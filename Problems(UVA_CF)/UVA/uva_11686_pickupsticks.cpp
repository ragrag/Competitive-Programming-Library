#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, "\n"))
using namespace std;
typedef long long ll;
typedef vector <int> vi;

vector <int> dist;
vector <vector<int>> adj;

vi visited;
vi ts;
vi dfs_parent;
int cyc=0;


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
        int y=0;
      else  
        cyc++;
    }
  }
  ts.pb(u);
  visited[u] = 1;
}



int main()
{
        fast;

        while(true)
    {

cyc=0;
int n,e;
cin>>n>>e;
if(n==0 && e==0)
    return 0;
adj = vector < vector<int> > (n+1);
dfs_parent = vi (n+1);
dist = vi(n, -1);
visited.assign(n+1,0);
ts.clear();
rep(i,e)
	{
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
       // adj[to].push_back(from);
	}

int numc=0;
	rep2(i,n)
	{
	    if(!visited[i])
        {
            graphCheck(i);
            numc++;
        }
	}
//cout<<"\n CYCLE NUMBERS : " <<cyc<<" nc : "<<numc<<endl;

cyc == 0? vrprint(ts):cout<<"IMPOSSIBLE\n";

    }
return 0;
}



