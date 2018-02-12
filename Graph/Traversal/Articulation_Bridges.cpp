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
vi dfs_parent; // (V,0)
vi dfs_num;   
vi dfs_low;  
vi articulation_vertex;
int dfsNumberCounter, dfsRoot, rootChildren; //0,i,0

void articulationPointAndBridge(int u) {
  dfs_low[u] = dfs_num[u] = dfsNumberCounter++;     
  visited[u]=1; 
  for (auto v:adj[u]) {
    if (visited[v] == 0) {                          
      dfs_parent[v] = u;
      if (u == dfsRoot) rootChildren++;  

      articulationPointAndBridge(v);

      if (dfs_low[v] >= dfs_num[u])             
        articulation_vertex[u] = true;           
      if (dfs_low[v] > dfs_num[u])                   
        printf(" Edge (%d, %d) is a bridge\n", u, v);
      dfs_low[u] = min(dfs_low[u], dfs_low[v]);      
    }
    else if (v != dfs_parent[u])    
      dfs_low[u] = min(dfs_low[u], dfs_num[v]);       
} }




int main()
{
int n,e;
cin>>n>>e;

adj = vector < vector<int> > (n+1);

dfs_num = vi(n+1);
dfs_low.assign(n+1,0); 
dfsNumberCounter=0;
articulation_vertex.assign(n+1,0); //articulation
dfs_parent = vi (n+1);
visited.assign(n+1,0); //SCC

    for (int i = 0;i < e;i++)
	{
		int from,to;
		cin >> from >>to;
		adj[to].push_back(from);
        adj[from].push_back(to);
		
	}
	 
	
	for (int i = 0; i <= n; i++)
		if (visited[i] == 0) {
		dfsRoot = i; rootChildren = 0; 
		articulationPointAndBridge(i);
		articulation_vertex[dfsRoot] = (rootChildren > 1); 
		} 
		
	for (int i = 0; i <= n; i++)
		if (articulation_vertex[i])
		 printf(" Vertex %d\n", i);

	
		
		return 0;
}