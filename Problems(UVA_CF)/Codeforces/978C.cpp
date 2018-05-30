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
int n,m;
cin>>n>>m;
vector <ll> prefix;
rep(i,n)
{
	ll t;
	cin>>t;
	i==0? prefix.pb(t) : prefix.pb(t+prefix[i-1]);
}
rep(i,m)
{
ll b;
cin>>b;
ll order =b;
int dorm = lower_bound(prefix.begin(),prefix.end(),b) - prefix.begin();
if(dorm!=0)
	order = b-prefix[dorm-1];
cout<< dorm+1<<" "<<order<<endl;
}
	return 0;
}
