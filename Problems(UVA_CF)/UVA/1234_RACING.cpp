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

int t;
cin>>t;
while (t--)
{


  int n, e;
  cin >> n;
  cin>>e;

  adj.assign(n, vector < ii > ());
  vector < pair < int, ii > > EdgeList;
  int tot=0;
  for (int i = 0; i < e; i++) {
    int from, to, w;
    cin >> from >> to >> w;
    EdgeList.pb(mp(w, ii(from-1, to-1)));
    adj[from-1].pb(mp(to-1, w));
    adj[to-1].pb(mp(from-1, w));
    tot+=w;
  }

  sort(EdgeList.begin(), EdgeList.end());
  reverse(EdgeList.begin(),EdgeList.end());
  int mst_cost = 0;
  initSet(n);

  for (int i = 0; i < e; i++) {
    pair < int, ii > front = EdgeList[i];
    if (!isSameSet(front.second.first, front.second.second)) {
      mst_cost += front.first;

      unionSet(front.second.first, front.second.second);
    }

  }

  cout <<tot- mst_cost << endl;


}
int x;
cin>>x;
  return 0;
}
