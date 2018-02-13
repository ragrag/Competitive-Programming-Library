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

int N;
vi pset(200005);
void initSet(int n)
{
    pset.assign(n, 0); for (int i = 0; i < n; i++) pset[i] = i;
}
int findSet(int i)
{
    return (pset[i] == i) ? i : (pset[i] = findSet(pset[i]));
}
bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
void unionSet(int i, int j) { pset[findSet(i)] = findSet(j); }
vector < vector < ii > > adj;

int main() {

    int t;
    cin>>t;
    for(int o=1;o<=t;o++)
    {


   int e,a;
   cin >> N >> e>>a;

   adj.assign(N+1, vector < ii > ());
   vector < pair < int, ii > > EdgeList;
   for (int i = 0; i < e; i++) {
      int from, to, w;
      cin >> from >> to >> w;
      EdgeList.pb(mp(w, ii(from-1, to-1)));
      adj[from].pb(mp(to-1, w));
      adj[to].pb(mp(from-1, w));
   }

   sort(EdgeList.begin(), EdgeList.end());
   int mst_cost = 0;
  initSet(N);
   for (int i = 0; i < e; i++) {
      pair < int, ii > front = EdgeList[i];


        if (front.first >= a )
        {
            break;
        }
      if (!isSameSet(front.second.first, front.second.second)) {
         mst_cost += front.first;

         unionSet(front.second.first, front.second.second);
      }

   }

int   airPorts = 0;
        for(int i = 0 ; i < N ; i++)
            if(pset[i] == i){
                mst_cost += a;
                airPorts ++;
            }
   cout <<"Case #"<<o<<": "<< mst_cost <<" "<<airPorts<<endl;
    }
   return 0;
}
