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



vector <vector<int>> adj;
vector <vector<string>> scc;

vi visited;
vi dfs_num;     // (V,0)
vi dfs_low;
vi S;
map <string,int> circle;
map <int,string> circlestr;
int dfsNumberCounter;

void tarjanSCC(int u) {
  dfs_low[u] = dfs_num[u] = dfsNumberCounter++;
  S.push_back(u);
  visited[u] = 1;
  for (auto v:adj[u]) {
    if (dfs_num[v] == 0)
      tarjanSCC(v);
    if (visited[v])
      dfs_low[u] = min(dfs_low[u], dfs_low[v]);
  }

  if (dfs_low[u] == dfs_num[u]) {
    scc.pb(vector<string>());
    while (1) {
      int v = S.back(); S.pop_back(); visited[v] = 0;
      scc.back().push_back(circlestr[v]);
      if (u == v) break;
    }
} }

int main()
{
int casee=0;
    while(1)
    {


int n,e;
cin>>n>>e;
if(n==0 && e==0)
    break;
adj = vector < vector<int> > (n+1);

dfsNumberCounter=0;
dfs_num = vi(n+1);
dfs_low.assign(n+1,0);
visited.assign(n+1,0); //SCC
circle.clear();
circlestr.clear();
scc.clear();
set <string> names;
vector <pair<string,string>> calls;
    for (int i = 0;i < e;i++)
	{
		string from,to;
		cin >> from >>to;
	calls.pb(mp(from,to));
    names.insert(from);
    names.insert(to);
	}
	int index=0;
for(auto f:names)
{
    circle[f] = index;
    circlestr[index++] = f;
}
for (auto f:calls)
{
    adj[circle[f.first]].pb(circle[f.second]);
}
	 for (int i = 0; i <= n; i++)
		if (dfs_num[i] == 0)
		tarjanSCC(i);


		sort( scc.begin(), scc.end() );
scc.erase( unique( scc.begin(), scc.end() ), scc.end() );
cout <<"Calling circles for data set "<<++casee<<":"<<endl;;

for(int i=0;i<scc.size();i++)
{
    for(int j=0;j<scc[i].size();j++)
    {
        if(scc[i][j].size()==0)
            continue;
        cout<<scc[i][j];
        if(j < scc[i].size()-1)
            cout<<", ";
        else nl;
    }

}

    }
		return 0;
}
