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
    vector <vector<int>> adj;
int depth=0;
int dp=-99;
  void dfs(int u) {
	visited[u] = 1;
depth++;
	//cout<<endl<<"Employee "<<u<<" : ";
	for (int j = 0; j < (int)adj[u].size(); j++) {
		//cout <<" "<< adj[u][j];
	int v = adj[u][j];
		if (visited[v] == 0)
    {
			dfs(v);
	}
}
}
int main()
{
        fast;
 int n,e;
cin>>n;
adj = vector < vector<int> > (n+1);
visited = vi(n+1);
    for (int i = 0;i < n;i++)
	{
	int from ,to;
	cin>>from;
	if (from!=-1)
	adj[i+1].push_back(from);
else adj[i+1].pb(i+1);
	}
    int connected_componants=0;
    for (int i = 1;i <=n;i++)
	{
		dfs(i);
		dp=max(dp,depth);
		depth=0;
		visited = vi(n+1);
	}
cout<<dp<<endl;
return 0;
}
