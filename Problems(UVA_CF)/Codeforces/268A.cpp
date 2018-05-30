#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define mp make_pair
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
int ch(char z)
{
	return z - 'a' +1;
}
int main()
{
	fast;
int n;
cin>>n;
vector <pair <int,int> > teams;
rep(i,n)
{
int h,a;
cin>>h>>a;
teams.pb(mp(h,a));
}
int cn=0;
rep(i,n)
{
rep(j,n)
		{
if(i==j)
	continue;
if (teams[i].first == teams[j].second)
	cn++;
		}
}
cout<<cn<<endl;
		return 0;
}
