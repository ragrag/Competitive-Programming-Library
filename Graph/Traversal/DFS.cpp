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


//DFS With Topological Sorting
vi topsort;


void dfs(int u) {
	visited[u] = 1;
	for (int j = 0; j < (int)adj[u].size(); j++) {

		int v = adj[u][j];
		if (visited[v] == 0)
    {
			dfs(v);
	}
}
topsort.push_back(u);
}



//DFS Graph Property Check
vi dfs_parent;
int cyc;
int twoway;
int forwardedge;

void graphCheck(int u) {              
  visited[u] = 2;  
  for (int j = 0; j < (int)adj[u].size(); j++) {
    int v = adj[u][j];
    if (visited[v] == 0) {    
      dfs_parent[v] = u;                  
      graphCheck(v);
    }
    else if (visited[v] == 2) {          
      if (v == dfs_parent[u])          
        twoway++;
      else  
        cyc++;
    }
    else if (visited[v] == 1)             
     forwardedge++;
  }
  visited[u] = 1;     
}



int main()
{
int n,e;
cin>>n>>e;

adj = vector < vector<int> > (n+1);
visited = vi(n+1);
topsort.clear();

dfs_parent = vi (n+1);
cyc=0;
twoway=0;
forwardedge=0;

    for (int i = 0;i < n;i++)
	{
		int from,to;
		cin >> from >>to;
		adj[to].push_back(to);
        adj[to].push_back(from);
		}
	}


	 

    int connected_componants=0;
    for (int i = 0;i < n;i++)
	{
		if (visited[i] == 0)
		{
			dfs(i);
			connected_componants++;
		}
	}



		
		return 0;
}
