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

class UnionFind { 
   private:
      vi p, rank, setSize; 
   int numSets;
   public:
      UnionFind(int N) {
         setSize.assign(N, 1);
         numSets = N;
         rank.assign(N, 0);
         p.assign(N, 0);
         for (int i = 0; i < N; i++) p[i] = i;
      }
   int findSet(int i) {
      return (p[i] == i) ? i : (p[i] = findSet(p[i]));
   }
   bool isSameSet(int i, int j) {
      return findSet(i) == findSet(j);
   }
   void unionSet(int i, int j) {
      if (!isSameSet(i, j)) {
         numSets--;
         int x = findSet(i), y = findSet(j);
   
         if (rank[x] > rank[y]) {
            p[y] = x;
            setSize[x] += setSize[y];
         } else {
            p[x] = y;
            setSize[y] += setSize[x];
            if (rank[x] == rank[y]) rank[y]++;
         }
      }
   }
   int numDisjointSets() {
      return numSets;
   }
   int sizeOfSet(int i) {
      return setSize[findSet(i)];
   }
};

vector < vector < ii > > adj;

int main() {
   int n, e;
   cin >> n >> e;

   adj.assign(n, vector < ii > ());
   vector < pair < int, ii > > EdgeList;
   for (int i = 0; i < e; i++) {
      int from, to, w;
      cin >> from >> to >> w;
      EdgeList.pb(mp(w, ii(from, to)));
      adj[from].pb(mp(to, w));
      adj[to].pb(mp(from, w));
   }
   sort(EdgeList.begin(), EdgeList.end());
   int mst_cost = 0;
   UnionFind UF(n);
   for (int i = 0; i < e; i++) {
      pair < int, ii > front = EdgeList[i];

      if (!UF.isSameSet(front.second.first, front.second.second)) {
         mst_cost += front.first;
         UF.unionSet(front.second.first, front.second.second);
      }
   }
   cout << mst_cost << endl;

   return 0;
}