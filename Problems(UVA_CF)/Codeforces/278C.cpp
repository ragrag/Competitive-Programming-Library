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


// Union-Find Disjoint Sets Library written in OOP manner, using both path compression and union by rank heuristics
class UnionFind {                                              // OOP style
private:
  vi p, rank, setSize;                       // remember: vi is vector<int>
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) {
    if (!isSameSet(i, j)) { numSets--;
    int x = findSet(i), y = findSet(j);
    // rank is used to keep the tree short
    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
};

int main() {
    int n,l;
    int zeroes=0;
    cin>>n>>l;
    vector <vi> vec(n);
    vector <vi> lang(l+1);
    UnionFind UF(n);

    rep(i,n)
    {
        int k;
        cin>>k;
        if(k==0)
            zeroes++;
        rep(j,k)
        {
            int lan;
            cin>>lan;
            vec[i].pb(lan);
            lang[lan].pb(i);
        }
    }
for(int i=0;i<n;i++)

{
    for(int j=0;j<vec[i].size();j++)
    {
        int tl = vec[i][j];
        for (int k=0;k<lang[tl].size();k++)
        {
            if(lang[tl][k] == i)
                continue;
            UF.unionSet(lang[tl][k],i);
        }
    }
}


if(zeroes >=UF.numDisjointSets())
    cout<<zeroes;
else{

  cout<<UF.numDisjointSets()-1; // 5
}
  return 0;
}
