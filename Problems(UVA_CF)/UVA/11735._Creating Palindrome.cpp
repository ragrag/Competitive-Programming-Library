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
string s;

int n,k;

int vec[10001];
int dp(int i,int j,int t)
{

if(t>k)return INF;
    if(i>=j)
    {
        return t;
    }
int c1;
if(vec[i] == vec[j])
    c1 = dp(i+1,j-1,t);
else
{
    c1=dp(i+1,j,t+1);
    c1 = min(c1,dp(i,j-1,t+1));
}


return  c1;
}


int main()
{

fast;
//freopen("in.h","r",stdin);
  //freopen("out.h","w",stdout);

int t;
cin>>t;
int casee=0;
while(t--)
{
   cin>>n>>k;
    rep(i,n){
   cin>>vec[i];
    }
int ans = dp(0,n-1,0);
if(ans >k)
    cout<<"Case "<<++casee<<": "<<"Too difficult"<<endl;
else if(ans == 0)
    cout<<"Case "<<++casee<<": "<<"Too easy"<<endl;
else cout<<"Case "<<++casee<<": "<<ans<<endl;

}
		return 0;
}
