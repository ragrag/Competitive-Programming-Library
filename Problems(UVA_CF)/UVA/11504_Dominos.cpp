#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, "\n"))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;



vector <vector<int>> adj;
vi visited;
vi visited2;


vi topsort;


void dfs(int u) {
	visited[u] = 1;
	for (int j = 0; j < (ll)adj[u].size(); j++) {

		int v = adj[u][j];
		if (visited[v] == 0)
    {
			dfs(v);
	}
}
topsort.push_back(u);
}



void dfs2(int u) {
	visited2[u] = 1;
	for (int j = 0; j < (int)adj[u].size(); j++) {

		int v = adj[u][j];
		if (visited2[v] == 0)
    {
			dfs2(v);
	}
}

}

int main()
{

    int t;
    cin>>t;
    while (t--)
    {

int n,e;
cin>>n>>e;

adj = vector < vector<int> > (n+1);
visited.assign(n+1,0);
visited2.assign(n+1,0);
topsort.clear();
    for (int i = 0;i < e;i++)
	{
		int from,to;
		cin >> from >>to;
		adj[from].push_back(to);
        //adj[from].push_back(to);

	}

rep2(i,n)
{
    if(!visited[i])
    {
        dfs(i);
    }
}
reverse(topsort.begin(),topsort.end());

int cc=0;
for(auto f:topsort)
{
    if(visited2[f] == 0)
    {
         dfs2(f);
         cc++;
    }

}

cout<<cc<<endl;

}


		return 0;
}
