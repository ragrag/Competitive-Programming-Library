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
typedef vector <int> vi;
typedef pair<int,int> ii;

vector <int> dist;
vector <vector<ii>> adj;
int n;

void bellman(int s) {

dist[s]=0;
  for (int i = 0; i < n - 1; i++)
    for (int u = 0; u < n; u++)
      for (auto v: adj[u]) {
        dist[v.first] = min(dist[v.first], dist[u] + v.second);
      }
}



 bool hasNegativeCycle()
 {
  for (int u = 0; u < n; u++)
    for (auto v : adj[u]) {
      if (dist[v.first] > dist[u] + v.second)
        return true;
    }
    return false;
 }

int main()
{
int e;
cin>>n>>e;

adj.assign(n+1, vector<ii>());
dist = vi(n+1, INF);

    for (int i = 0;i < e;i++)
	{
		int from, to,w;
		cin >> from >> to>>w;
		adj[from].push_back(mp(to,w));
       // adj[to].push_back(mp(from,w));
	}

	   bellman(0);

  printf("Negative Cycle Exist? %s\n", hasNegativeCycle() ? "Yes" : "No");

  if (!hasNegativeCycle())
    for (int i = 0; i < n; i++)
      printf("SSSP(%d, %d) = %d\n", 0, i, dist[i]);
		return 0;
}
