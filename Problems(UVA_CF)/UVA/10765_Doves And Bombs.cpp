    #include <bits/stdc++.h>
    #define INF 1000000000
    #define fast ios_base::sync_with_stdio(false)
    #define pb push_back
    #define nl cout<<endl
    #define mp make_pair
    #define rep(i, n)	for(int i=0;i<n;i++)
    #define rep2(i,n) for(int i=1;i<=n;i++)
    #define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
    #define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
   using namespace std;
    typedef long long ll;
    typedef vector < int > vi;

    vector < vector < int >> adj;

    vi visited;
    vi dfs_parent; // (V,0)
    vi dfs_num;
    vi dfs_low;
    vi articulation_vertex;

    vector < pair < int, int >> station;
    int dfsNumberCounter, dfsRoot, rootChildren; //0,i,0

    void articulationPointAndBridge(int u) {
      dfs_low[u] = dfs_num[u] = ++dfsNumberCounter;
      visited[u] = 1;
      for (auto v: adj[u]) {
        if (visited[v] == 0) {
          dfs_parent[v] = u;
          if (u == dfsRoot) rootChildren++;
          articulationPointAndBridge(v);

          if (dfs_low[v] >= dfs_num[u]) {
            articulation_vertex[u]++;

          }

          dfs_low[u] = min(dfs_low[u], dfs_low[v]);
        } else if (v != dfs_parent[u])
          dfs_low[u] = min(dfs_low[u], dfs_num[v]);
      }
    }

    bool cmp(pair < int, int > a, pair < int, int > b) {
      if (a.second != b.second)
        return a.second > b.second;
      else return a.first < b.first;

    }

    int main() {

      int n, m;

      while (1)

      {

        cin >> n >> m;
        if (n == 0 && m == 0)
          break;
        adj = vector < vector < int > > (n + 1);

        dfs_num = vi(n + 1);
        dfs_low.assign(n + 1, 0);
        dfsNumberCounter = 0;
        articulation_vertex.assign(n + 1, 0); //articulation
        dfs_parent = vi(n + 1);
        visited.assign(n + 1, 0); //SCC

        while (1) {
          int from, to;
          cin >> from >> to;
          if (from == -1 && to == -1)
            break;

          adj[from].pb(to);
          adj[to].pb(from);

        }


        station.clear();

      	for (int i = 0; i <= n; i++)
		if (visited[i] == 0) {
		dfsRoot = i; rootChildren = 0;
		articulationPointAndBridge(i);
		articulation_vertex[dfsRoot] = (rootChildren > 1);
		}


        rep(i, n) {
            station.pb(mp(i, ++articulation_vertex[i]));
        }
        sort(station.begin(), station.end(), cmp);

        rep(i, m) {

          cout << station[i].first << " " << station[i].second << endl;
        }

      }

      return 0;
    }
