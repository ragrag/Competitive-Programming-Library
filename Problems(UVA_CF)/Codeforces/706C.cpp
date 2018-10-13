#include <bits/stdc++.h>
#define INF 10e15
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;

vector <int>  costs;
vector <string> normal;
vector <string> reversed;
int n;
ll memo[100000][2];
ll dp(int idx, int r,string last)
{


    if(idx==n)
        return 0;

    if(idx !=0 && last > normal[idx] && last > reversed[idx])
        return INF;
ll &ret =memo[idx][r];
if(ret!=-1)
    return ret;
    ll c2 = INF;
    ll c1= INF;

    if (last =="" || normal[idx]  >= last)
     c1 = dp(idx+1,0,normal[idx]);

    if( last == "" ||  reversed[idx] >= last)
        c2 = dp(idx+1,1,reversed[idx])+ costs[idx];

    return ret= min(c1,c2);
}

int main()
{

fast;
  // freopen("out.h","w",stdout);
memset(memo,-1,sizeof(memo));
cin>>n;
rep(i,n)
{
    int x;
    cin>>x;
    costs.pb(x);
}
rep(i,n)
{
string s;
cin>>s;
normal.pb(s);
 reverse(s.begin(), s.end());
reversed.pb(s);
}
ll ans = dp(0,0,"");
ans == INF? cout<<-1<<endl:cout<<ans<<endl;
		return 0;
}
