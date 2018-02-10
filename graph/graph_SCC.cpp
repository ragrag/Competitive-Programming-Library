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
vi dfs_num;     // (V,0)
vi dfs_low;  
vi S;                                   
int numSCC;
int dfsNumberCounter;

void tarjanSCC(int u) {
  dfs_low[u] = dfs_num[u] = dfsNumberCounter++;      
  S.push_back(u);           
  visited[u] = 1;
  for (auto v:adj[u]) {
    if (dfs_num[v] == 0)
      tarjanSCC(v);
    if (visited[v])                                
      dfs_low[u] = min(dfs_low[u], dfs_low[v]);
  }

  if (dfs_low[u] == dfs_num[u]) {        
    printf("SCC %d:", ++numSCC);           
    while (1) {
      int v = S.back(); S.pop_back(); visited[v] = 0;
      printf(" %d", v);
      if (u == v) break;
    }
    printf("\n");
} }

int main()
{
int n,e;
cin>>n>>e;

adj = vector < vector<int> > (n+1);

dfsNumberCounter=0;
dfs_num = vi(n+1);
dfs_low.assign(n+1,0); 
visited.assign(n+1,0); //SCC
numSCC=0;

    for (int i = 0;i < e;i++)
	{
		int from,to;
		cin >> from >>to;
		adj[to].push_back(from);
        adj[from].push_back(to);
		
	}

	 
	 for (int i = 0; i <= n; i++)
		if (dfs_num[i] == 0)
		tarjanSCC(i);
	
	cout<<numSCC;
		
		return 0;
}
