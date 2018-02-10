
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



//BFS BASE
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
		q.push(v);
	}
	}
}
}


//BFS Barpitite Graph Check
bool isBipartite = true;

void checkBPD(int s) {

queue<int> q;
dist[s]=0;
q.push(s);

while (!q.empty()) {

	int u = q.front();
	q.pop();

	for (int j = 0; j < (int)adj[u].size(); j++){
		int v = adj[u][j];
	if (dist[v] == INF){
		dist[v] = 1- dist[u] ;
		q.push(v);
	}
	else if (dist[v]  == dist[u] )
          {
		isBipartite = false;
		return;
	}
}
}
}

//BFS Topological Sorting
vi p;
vi ts;

void toposortBFS(int n) {

   priority_queue < int, vector < int > , greater < int >>  q;
   for (int i = 1; i <= n; i++) {
      for (auto v: adj[i])
         p[v]++;
   }
   for (int i = 1; i <= n; i++) {
      if (p[i] == 0)
         q.push(i);
   }

   while (!q.empty()) {
      int u = q.top();
      q.pop();
      ts.pb(u);
      for (auto v: adj[u]) {
         if (--p[v] == 0) {
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
dist = vi(n, INF);

    for (int i = 0;i < e;i++)
	{
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
        adj[to].push_back(from);
	}


	   bfs(0);

	   //TOPO SORT
ts.clear();
toposortBFS(n);
vprint(ts);   



		return 0;
}
