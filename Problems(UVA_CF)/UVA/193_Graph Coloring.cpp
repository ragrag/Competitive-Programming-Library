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
const int MAX_CHAR = 26;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;

typedef pair<int,ii> iii;
vector <vi> adj;
vi visited;
vi vis3;
 int maxx=0;
void dfs(int u,int color,vi vis,int black)
{
    vis[u] = color;
    black+= color==1? 1:0;
    for(auto v:adj[u])
    {
        if(vis[v]==-1)
        {
            if(u==1)
            {
                    vis[u]=0;
                    dfs(v,1,vis,black-1);
                    vis[u]=1;
                    dfs(v,0,vis,black);
            }
            else {
            if(vis[u]==0){
                dfs(v,0,vis,black);
                dfs(v,1,vis,black);
            }
            else {
                dfs(v,0,vis,black);
            }
        }
        }
    }
   if(black>maxx)
   {
       maxx= black;
       vis3 = vis;
   }

}

int main() {
    fast;
int t;
cin>>t;

while(t--)
{
    int n,e;
    cin>>n>>e;

    adj = vector<vi>(n+1);
    visited.assign(n+1,-1);
    vis3.clear();
    rep(i,e){
    int from,to;
    cin>>from>>to;
    adj[from].pb(to);
    adj[to].pb(from);

    }


    dfs(1,1,visited,0);
    cout<<maxx<<endl;
    rep2(i,n)
    {
        if(vis3[i]==1)
            cout<<i<<" ";
    }
    cout<<endl;




}
    return 0;
}
