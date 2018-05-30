#include <bits/stdc++.h>
    #define INF 1000000000
    #define fast ios_base::sync_with_stdio(false)
    #define pb push_back
    #define nl cout<<endl
    #define rep(i, n)	for(int i=0;i<n;i++)
    using namespace std;
    typedef long long ll;
    typedef vector <int> vi;
    ll MAX_SIZE = 10000001;
vi visited;
vi dfs_parent;
vector <vector<int>> adj;
void dfs(int u) {
	visited[u] = 1;
	for (int j = 0; j < (int)adj[u].size(); j++) {
		int v = adj[u][j];
		if (visited[v] == 0)
    {
			dfs(v);
	}
}
}
int cyc=0;
void graphCheck(int u) {
    visited[u] = 1;
for (int j = 0; j < (int)adj[u].size(); j++) {
    int v = adj[u][j];
    if (visited[v] == 0) {
        dfs_parent[v] = u;
        graphCheck(v);
    }
    else {
        if (v != dfs_parent[u])
        {
          // cout<<"CYCLE "<<u << " "<<v<<endl;
        cyc++;
        }
    }
}
}
int main()
{
        fast;
int n,e;
cin>>n>>e;
adj = vector < vector<int> > (n+1);
visited.assign(n+1,0);
dfs_parent.assign(n+1, 0);
for (int i = 0;i < e;i++)
	{
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
        adj[to].push_back(from);
	}
    for(int i=1;i<n+1;i++)
        if(!visited[i])
        graphCheck(1);
	cyc==2  ? cout <<"FHTAGN!"<<endl:cout<<"NO"<<endl;
return 0;
}
