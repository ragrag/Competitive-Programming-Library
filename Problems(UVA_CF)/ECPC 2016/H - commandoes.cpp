#include <bits/stdc++.h>
#define INF 1000000000
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
typedef vector <int> vi;

int host[12][12][12];
int memo[12][12][12];
bool valid(int F,int Y,int X)
{
    return (F<=10 && F >=1 && X<=10 && X >=1 && Y<=10 && Y >=1);
}

int dp(int F,int Y,int X){

if(!valid(F,Y,X))
{
    return 0;
}

int &ret = memo[F][Y][X];
if(ret != -1)
    return ret;

int c1 = dp(F,Y,X+1) +host[F][Y][X];
int c2 = dp(F,Y+1,X) +host[F][Y][X];
int c3 = dp(F-1,Y,X) +host[F][Y][X];

return ret = max(c1,max(c2,c3));
}

int main()
{
    freopen("commandos.in", "r", stdin);
fast;
int t;
cin>>t;
while(t--)
{
memset(memo,-1,sizeof(memo));
memset(host,0,sizeof(host));
int n;
cin>>n;
rep(i,n){
    int f,y,x,h;
    cin>>f>>y>>x>>h;
    host[f][y][x] = h;
}
cout<<dp(10,1,1)<<endl;
}


		return 0;
}
