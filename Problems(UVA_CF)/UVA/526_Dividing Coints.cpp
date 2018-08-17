#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back

#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
int n;
vi vec;

int table[105][50000];

int dp(int idx, int taken,int taken2)
{
    if(idx==n)
        return abs(taken-taken2);

    int &res= table[idx][taken];
    if(res!=-1)
        return res;

        res = dp(idx+1,taken+vec[idx],taken2);
        res= min(res,dp(idx+1,taken,taken2+vec[idx]));

        return res;

}

int main() {
fast;
 //freopen ("output.txt","w",stdout);
int t;
cin>>t;
while(t--)
{
memset(table,-1,sizeof(table));
vec.clear();
cin >>n;
int tot=0;
rep(i,n)
{
    int c;
    cin>>c;
    vec.pb(c);
    tot+=c;
}
cout<<dp(0,0,0)<<endl;;
}
return 0;
}
