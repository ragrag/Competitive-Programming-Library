
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


vector <int> dist;
vector <vector<int>> adj;

//BFS Shortest Path
vi p;

void printPath(int u, int s) {
if (u == s) { cout<<s; return; }
printPath(p[u],s);
cout<<" "<<u; }

void bfs(int s) {
queue<int> q;
dist[s]=0;
q.push(s);
while (!q.empty()) {
	int u = q.front();
	q.pop();
	for (int j = 0; j < (int)adj[u].size(); j++){
		int v = adj[u][j];
	if (dist[v] == INF){
		dist[v] = dist[u] + 1;
		p[v] = u;
		q.push(v);

	}
	}
}
}

int main()
{
int n,e;
cin>>n>>e;

adj = vector < vector<int> > (n+1);
p = vector <int> (n+1);
dist = vi(n, INF);

    for (int i = 0;i < e;i++)
	{
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
	//	adj[to].push_back(from);
	}

	int source,dest;
	cin>>source>>dest;
	   bfs(source);
	printPath(dest, source);

		return 0;
}
