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

while(1)

{


  int n, e;
  cin >> n >> e;
  if(n==0 && e ==0)
    break;

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
      unionSet(front.second.first, front.second.second);
      EdgeList.erase(EdgeList.begin() + i);
      i--;
    }

  }
vector <int> w;
for(auto f:EdgeList)
{
    w.pb(f.first);
}
sort(w.begin(),w.end());
if(w.size() == 0)
{
    cout<<"forest"<<endl;
}
else
for (int i=0;i<w.size();i++)
{
    cout<<w[i];
    if(i<w.size()-1)
        cout<<" ";
    else cout<<endl;
}

}
  return 0;
}
