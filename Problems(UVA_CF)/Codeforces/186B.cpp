#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define  pb push_back
#define  nl cout<<endl
#define  mp make_pair
#define  rep(i,n) for(int i=0;i<n;i++)
#define  rep2(i,n) for(int i=1;i<=n;i++)
#define  vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define frep rep(i,n)
#define frep2 rep2(i,n)
#define  vrprint(x)  copy(x.rbegin(), x.rendist(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
using namespace std;
bool cmp (pair <double,int>  a ,pair <double,int>  b)
{
if (a.first == b.first)
{
    return a.second < b.second;
}
else return a.first > b.first;
}
int main()
{
    fast;
    double n, t1,t2;
    double k;
    cin>>n>>t1>>t2>>k;
    vector <pair < double,int > > vec;
rep(i,n)
{
double x1,x2;
cin>>x1>>x2;
double g1 = (x1*t2) + (x2- (x2*(k/100)))*t1  ;
double g2 = (x2*t2) + (x1- (x1*(k/100)))*t1  ;
vec.pb(mp ( max  (g1,g2),i));
}
sort (vec.begin(),vec.end(),cmp);
cout.precision(2);
rep(i,n)
{
    cout<<vec[i].second+1<<" "<<fixed<<vec[i].first<<endl;
}
    return 0;
}
