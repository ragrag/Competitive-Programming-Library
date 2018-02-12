#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
#define mp make_pair
using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

vector < vector < ii > > adj;
vi taken;
priority_queue < ii > pq;

vi visited;

void dfs(int u) {
	visited[u] = 1;
	for (int j = 0; j < (int)adj[u].size(); j++) {

		int v = adj[u][j].first;
		if (visited[v] == 0)
    {
			dfs(v);
	}
}


}

void process(int vtx) {
   taken[vtx] = 1;
   for (int j = 0; j < (int) adj[vtx].size(); j++) {
      ii v = adj[vtx][j];
      if (!taken[v.first]) pq.push(ii(-v.second, -v.first));
   }
}

int main() {
    int t;
    cin>>t;
    int p=t;
    while(t--)
    {


   int n, e,a;
   cin >> n >> e>>a;

   adj.assign(n+1, vector < ii > ());
   taken.assign(n+1, 0);
    visited = vi(n+1);
   for (int i = 0; i < e; i++) {
      int from, to, w;
      cin >> from >> to >> w;
      adj[from].pb(mp(to, w));
      adj[to].pb(mp(from, w));
   }

   int numcc =0;
   int tc=0;
   rep2(i,n)
   {
   if(!visited[i])
    {


   dfs(i);
   process(i);
   int mst_cost = 0;
   while (!pq.empty()) {
      ii front = pq.top();
      pq.pop();
      int u = -front.second, w = -front.first;
      if (!taken[u])
         mst_cost += w, process(u);
   }
    tc+=mst_cost;
    numcc++;
   }

   }
cout << "Case #"<<p-t<<": "<<tc+(numcc*a) <<" "<<numcc<< endl;
}


   return 0;
}

