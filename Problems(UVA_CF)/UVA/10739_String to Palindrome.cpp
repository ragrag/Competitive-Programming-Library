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
int tab[1001][1001];
int dp(int i,int j)
{
    if(i>=j)
    {
        return 0;
    }


int &ret= tab[i][j];
if(ret!=-1)
    return ret;

    int c1 = INF;
    if(s[i] != s[j])
        c1 = dp(i+1,j-1) + 1;
     else
        c1 = dp(i+1,j-1);
int c2 = dp(i+1,j) +1;
int c3 = dp(i,j-1) +1;

return ret = min(c1,min(c2,c3));

}


int main()
{

fast;
  // freopen("out.h","w",stdout);

int t;
cin>>t;
int casee=0;
while(t--)
{
    memset(tab,-1,sizeof(tab));
    cin>>s;
cout<<"Case "<<++casee<<": "<<dp(0,s.size()-1)<<endl;

}
		return 0;
}
