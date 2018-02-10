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

void process(int vtx) {
   taken[vtx] = 1;
   for (int j = 0; j < (int) adj[vtx].size(); j++) {
      ii v = adj[vtx][j];
      if (!taken[v.first]) pq.push(ii(-v.second, -v.first));
   }
}

int main() {
   int n, e;
   cin >> n >> e;

   adj.assign(n, vector < ii > ());
   taken.assign(n, 0);

   for (int i = 0; i < e; i++) {
      int from, to, w;
      cin >> from >> to >> w;
      adj[from].pb(mp(to, w));
      adj[to].pb(mp(from, w));
   }

   process(0);
   int mst_cost = 0;
   while (!pq.empty()) {
      ii front = pq.top();
      pq.pop();
      int u = -front.second, w = -front.first;
      if (!taken[u])
         mst_cost += w, process(u);
   }
   cout << mst_cost << endl;

   return 0;
}