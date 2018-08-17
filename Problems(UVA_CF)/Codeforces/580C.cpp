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
vector < int > cats;
vector <vi> adj;
vector <bool> vis;
int m;
int dfs(int u,int c,int cons)
{
    int ans=0;
    vis[u] =1;
    cons = max(cons,c+cats[u]);
    for(auto v:adj[u])
        if(!vis[v])
          ans+=  dfs(v,cats[u] ==0? 0 : c+cats[u],cons);
    if(adj[u].size()==1 && cons <=m && u !=1)
        return ans+1;
    else return ans+0;
}

int main() {
fast;
int n;
cin>>n>>m;
cats.assign(n+1,0);
adj = vector < vi > (n+1);
vis = vector<bool>(n+1);
rep2(i,n)
{
    int c;
    cin>>c;
    cats[i] = c;
}
rep(i,n-1)
{
    int from,to;
    cin>>from>>to;
    adj[to].pb(from);
    adj[from].pb(to);
}
cout<<dfs(1,0,0);
   return 0;
}
