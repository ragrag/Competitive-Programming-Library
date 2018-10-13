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
typedef pair<int,int> ii;

char ar[501][501];
bool vis[501][501];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n,m,k,s;
bool valid(int i,int j)
{
return (i>=0 && i<n && j>= 0 && j<m && ar[i][j] == '.' && !vis[i][j]);
}
int cc=0;
void dfs(int i,int j)
{

if(cc==s-k)
 {
        return;
 }
 vis[i][j]=true;
 cc++;
// cout<<"Visiting "<<i <<" "<<j<<" "<<cc<<endl;

rep(k,4)
{
    int nr =i+ dy[k];
    int nc = j+dx[k];
    if(valid(nr,nc))
        dfs(nr,nc);
}


}

int main()
{

fast;
  // freopen("out.h","w",stdout);

cin>>n>>m>>k;
int start,endd;
rep(i,n)
{
    rep(j,m)
    {
        cin>>ar[i][j];
        if(ar[i][j]=='.')
        {
            s++;
            start = i;
            endd=j;
        }
    }
}

dfs(start,endd);
rep(i,n)
{
    rep(j,m)
    {
        if(ar[i][j] =='.' && !vis[i][j])
            cout<<'X';
        else cout<<ar[i][j];
    }
    cout<<endl;
}


		return 0;
}
