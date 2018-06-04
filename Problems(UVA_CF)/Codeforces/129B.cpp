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
vector <vector<int>> adj;
vi visited;
vi all;
vector <pair<int,int>> rem;
void dfs(int u){
    bool ret2 = false;
    visited[u]=1;
    int x;
    if(adj[u].size() == 1 )
    {
        ret2 = true;
    }
    for(auto v : adj[u])
    {
        if(visited[v] == 0)
             dfs(v);
    x=v;
    }
  if (ret2)
    {
        rem.pb(make_pair(u,x));
    }
}
int main()
{
    fast;
int n,e;
cin>>n>>e;
adj = vector < vector<int> > (n+1);
visited = vi(n+1);
if(e==0)
{
    cout<<0<<endl;
    return 0;
}
    for (int i = 0;i < e;i++)
	{
		int from,to;
		cin >> from >>to;
		adj[from].push_back(to);
        adj[to].push_back(from);
    }
int c=0;
while(true)
{
rep(i,n)
{
if(!visited[i])
    dfs(i);
}
if(rem.size()>0)
{
//vprint(all);nl;
rep(i,rem.size())
{
    int x= rem[i].second;
    int u= rem[i].first;
    adj[x].erase(remove(adj[x].begin(), adj[x].end(), u), adj[x].end());
    adj[u].clear();
}
    rem.clear();
    visited = vi(n+1);
    c++;
}
else
{
    cout<<c<<endl;
    return 0;
}
}
cout<<c<<endl;
		return 0;
}
