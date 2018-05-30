#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <math.h>
#include <set>
#include <iomanip>
#include <queue>
#define INF 1000000000
using namespace std;
typedef long long ll;
typedef vector <int> vi;
vi visited;
vi dist;
int main()
{
int n;
ll s;
cin >>n>>s;
vector <pair <double, ll>> p;
int ind = -1;
for (int i=0;i<n;i++)
{
double x,y;
ll pp;
cin>>x>>y>>pp;
//x = abs(x);y=abs(y);
p.push_back(  make_pair(sqrt ( (x*x)+(y*y)),pp ) );
}
sort(p.begin(),p.end());
int it=0;
while ( s< 1000000 && it<n)
{
   s+= p[it].second;
   it++;
}
if (it==n && s < 1000000)
{
    cout<<-1<<endl;
}
else {
        cout.precision(12);
    cout <<fixed<<p[it-1].first<<endl;
}
	return 0;
}
