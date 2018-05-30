#include <bits/stdc++.h>
    #define INF 1000000000
    #define fast ios_base::sync_with_stdio(false)
    #define pb push_back
    #define nl cout<<endl
    #define rep(i, n)	for(int i=0;i<n;i++)
    using namespace std;
    typedef long long ll;
    typedef vector <int> vi;
    ll MAX_SIZE = 10000001;
    vi visited;
    vector <vector<int>> adj;
  void dfs(int u) {
	visited[u] = 1;
	//cout<<endl<<"Employee "<<u<<" : ";
	for (int j = 0; j < (int)adj[u].size(); j++) {
		//cout <<" "<< adj[u][j];
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
 int n,m,e;
cin>>n>>m;
bool zero=true;
adj = vector < vector<int> > (n+300);
visited = vi(n+300);
    for (int i = 0;i < n;i++)
	{
		cin>>e;
		rep(j,e)
		{
		int  to;
		cin >> to;
		if(to!=0)
            zero = false;
	adj[to+100].push_back(i+1);
    adj[i+1].push_back(to+100);
		}
	}
if (zero)
{
    cout<<n<<endl;
    return 0;
}
    int connected_componants=0;
    for (int i = 1;i <=n;i++)
	{
		if (visited[i] == 0)
		{
			dfs(i);
			connected_componants++;
		}
	}
cout<<endl<<connected_componants-1<<endl;
return 0;
}
