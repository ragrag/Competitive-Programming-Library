#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
int main()
{
fast;
vi p;
vi m;
vi e;
vector <pair <int, pair<int,int>>> teams;
int n;
cin>>n;
rep(i,n)
{
	int t;
	cin>>t;
if(t==1)
	p.pb(i+1);
else if (t==2)
	m.pb(i+1);
else e.pb(i+1);
}
int k=0;
while (true)
{
if(p.size()>k && m.size()>k && e.size()>k)
{
	teams.pb(mp(p[k],mp(m[k],e[k])));
	k++;
}
else break;
}
cout<<teams.size()<<endl;
for(auto team:teams)
{
	cout<<team.first<<" "<<team.second.first<<" "<<team.second.second<<endl;
}
return 0;
}
