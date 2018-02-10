#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false)
#define INF 1000000000
#define PI acos(-1)
#define EPS 1e-9
#define MOD 1e9+7
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
#define mp make_pair
using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;


double DTR (double theta) { return theta * PI / 180.0;}
double RTD(double r) { return r * 180.0 / PI; }


//POINTS
struct point {
    double x , y;
    point () { x = y = 0; }
    point (double _x, double _y) {
        x = _x , y = _y;
    }
    bool operator < (point right) const {
        if (fabs(x - right.x) > EPS) {
            return x < right.x;
        }
        return y < right.y;
    }
    
    bool operator == (point right) const {
        return (fabs(x - right.x) < EPS && (fabs(y - right.y) < EPS));
    }

};

double Distance (point p1, point p2) {
    return sqrt(((p1.x - p2.x) * (p1.x - p2.x)) + ((p1.y - p2.y) * (p1.y - p2.y)));
}

point Rotate(point p, double theta) {
    double rad = DTR(theta);
    return point((p.x * cos(rad)) - (p.y * sin(rad)) , (p.x * sin(rad)) + (p.y * cos(rad)));
}

//LINE
struct line { double a, b, c; };
          
void pointsToLine(point p1, point p2, line &l) {
  if (fabs(p1.x - p2.x) < EPS) {              
    l.a = 1.0;   l.b = 0.0;   l.c = -p1.x;          
  } 
  else {
    l.a = -(double)(p1.y - p2.y) / (p1.x - p2.x);
    l.b = 1.0;             
    l.c = -(double)(l.a * p1.x) - p1.y;
} }

bool areParallel(line l1, line l2) {      
  return (fabs(l1.a-l2.a) < EPS) && (fabs(l1.b-l2.b) < EPS); }

bool areSame(line l1, line l2) {        
  return areParallel(l1 ,l2) && (fabs(l1.c - l2.c) < EPS); }
  
bool areIntersect(line l1, line l2, point &p) {
  if (areParallel(l1, l2)) return false;           
  p.x = (l2.b * l1.c - l1.b * l2.c) / (l2.a * l1.b - l1.a * l2.b);
  
  if (fabs(l1.b) > EPS)
	  p.y = -(l1.a * p.x + l1.c);
  else                 
	  p.y = -(l2.a * p.x + l2.c);
  return true; }


struct vec { double x, y; 
  vec(double _x, double _y) : x(_x), y(_y) {} };

vec toVec(point a, point b) {       // convert 2 points to vector a->b
  return vec(b.x - a.x, b.y - a.y); }

vec scale(vec v, double s) {     // nonnegative s = [<1 .. 1 .. >1]
  return vec(v.x * s, v.y * s); }           // shorter.same.longer

point translate(point p, vec v) {        // translate p according to v
  return point(p.x + v.x , p.y + v.y); }


double dot(vec a, vec b) { return (a.x * b.x + a.y * b.y); }
double norm_sq(vec v) { return v.x * v.x + v.y * v.y; }  
double cross(vec a, vec b) { return a.x * b.y - a.y * b.x; }

// convert point and gradient/slope to line
void pointSlopeToLine(point p, double m, line &l) {
  l.a = -m;                                               
  l.b = 1;                                                
  l.c = -((l.a * p.x) + (l.b * p.y)); }                

void closestPoint(line l, point p, point &ans) {
  line perpendicular;        
  if (fabs(l.b) < EPS) {              
    ans.x = -(l.c);   ans.y = p.y;      return; }

  if (fabs(l.a) < EPS) {            
    ans.x = p.x;      ans.y = -(l.c);   return; }

  pointSlopeToLine(p, 1 / l.a, perpendicular);          
  areIntersect(l, perpendicular, ans); }

// returns the reflection of point on a line
void reflectionPoint(line l, point p, point &ans) {
  point b;
  closestPoint(l, p, b);                   
  vec v = toVec(p, b);                             
  ans = translate(translate(p, v), v); }         


// returns the distance from p to the line ab  and a!=b 
// the closest point is stored in the 4th parameter (byref)
// formula: c = a + u * ab
double distToLine(point p, point a, point b, point &c) {
  
  vec ap = toVec(a, p), ab = toVec(a, b);
  double u = dot(ap, ab) / norm_sq(ab);
  c = translate(a, scale(ab, u));                  
  return dist(p, c); }           

  
// returns the distance from p to the line segment ab and a==b
// the closest point is stored in the 4th parameter (byref)
double distToLineSegment(point p, point a, point b, point &c) {
  vec ap = toVec(a, p), ab = toVec(a, b);
  double u = dot(ap, ab) / norm_sq(ab);
  if (u < 0.0) { c = point(a.x, a.y);                   
    return dist(p, a); }         
  if (u > 1.0) { c = point(b.x, b.y);                   
    return dist(p, b); }         
  return distToLine(p, a, b, c); }          

  // returns angle aob in rad
double angle(point a, point o, point b) {  
  vec oa = toVec(o, a), ob = toVec(o, b);
  return acos(dot(oa, ob) / sqrt(norm_sq(oa) * norm_sq(ob))); }


// returns true if point r is on the left side of line pq
bool ccw(point p, point q, point r) {
  return cross(toVec(p, q), toVec(p, r)) > 0; }

// returns true if point r is on the same line as the line pq
bool collinear(point p, point q, point r) {
  return fabs(cross(toVec(p, q), toVec(p, r))) < EPS; }
  
int main(){
    Fast;
    vector<point> P;
    point P1(4 , 4);
    point P2 = Rotate(P1 , 90);

    cout << P2.x << " " << P2.y << endl;

    point a(5 , 7);
    P.push_back(a);
    
    point b(1 , 2);
    P.push_back(b);
    
    cout << Distance(P1 , P2) << endl;
    
    sort(P.begin(), P.end());
    
    for (auto i : P) {
        cout << i.x << " " << i.y << endl;
    }
    
    return 0;
}