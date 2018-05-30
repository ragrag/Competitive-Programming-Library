#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, "\n"))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, "\n"))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
bool hel[91] = {false};
vector <vector<int>> adj;
vi visited;
void dfs(int u) {
	visited[u] = 1;
	for (int j = 0; j < (int)adj[u].size(); j++) {
		int v = adj[u][j];
		if (visited[v] == 0)
    {
			dfs(v);
	}
}
}
 int main()
{
     fast;
int n;
cin>>n;
int bor=0;
int inte=0;
rep(i,n)
{
    int x;
    cin>>x;
    hel[x] =1;
}
rep2(i,90)
{
    if( !hel[i] )
    {
        bor++;
      inte++;
      if (bor==15)
        break;
    }
    else if (hel[i])
    {
        bor=0;
        inte++;
    }
}
 cout<<inte<<endl;
     return 0;
 }
