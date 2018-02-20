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

int maxx;
vi visited;
bool dfs(int u, int to) {
    if(u==to)
        return true;

	visited[u] = 1;
	bool found = false;
	for (auto v: adj[u]) {
		if (visited[v.first] == 0 && dfs(v.first,to))
    {
                 maxx = max(maxx,v.second);
                 return true;
	}
}
return false;
}


vi pset(200005);
void initSet(int n) {
  pset.assign(n, 0);
  for (int i = 0; i < n; i++) pset[i] = i;
}
int findSet(int i) {
  return (pset[i] == i) ? i : (pset[i] = findSet(pset[i]));
}
bool isSameSet(int i, int j) {
  return findSet(i) == findSet(j);
}
void unionSet(int i, int j) {
  pset[findSet(i)] = findSet(j);
}

int main() {

  int n, e,q;
  int casee=0;
  while(cin>>n>>e>>q)
{
if(n==0 && e==0 && q==0)
    break;
if(casee != 0 )
    nl;
  adj.assign(n+1, vector < ii > ());
  vector < pair < int, ii > > EdgeList;
  for (int i = 0; i < e; i++) {
    int from, to, w;
    cin >> from >> to >> w;
    EdgeList.pb(mp(w, ii(from, to)));

  }

  sort(EdgeList.begin(), EdgeList.end());

  initSet(n+1);
  for (int i = 0; i < e; i++) {
    pair < int, ii > front = EdgeList[i];
    if (!isSameSet(front.second.first, front.second.second)) {



      adj[front.second.first].pb(mp(front.second.second, front.first));
      adj[front.second.second].pb(mp(front.second.first, front.first));

      unionSet(front.second.first, front.second.second);
    }
  }

cout<<"Case #"<<++casee<<endl;
rep(i,q)
{
    visited = vi(n+1);
    maxx=0;
    int from,to;
    cin>>from>>to;
    dfs(from,to);
    maxx==0 ? cout<<"no path"<<endl: cout<<maxx<<endl;
}

}

  return 0;
}
