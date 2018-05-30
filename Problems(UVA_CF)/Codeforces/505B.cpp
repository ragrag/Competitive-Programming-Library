#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
typedef vector <vi> vii;
vi dfs_num;
vector <vector<pair<int, int>>> adj;
void dfs(int u, int c) {
	for (int j = 0; j < (int)adj[u].size(); j++) {
		int v = adj[u][j].first;
		if (adj[u][j].second == c && dfs_num[v] == 0)
		{
			dfs_num[adj[u][j].first] = 1;
			//cout << "edge " << adj[u][j].first << "entering " << " With weight " << adj[u][j].second << endl;
			dfs(v, c);
		}
	}
}
int main()
{
	int n, e;
	cin >> n >> e;
	adj = vector <vector<pair<int, int>>>(n + 1);
	dfs_num = vi(n + 1);
	for (int i = 0;i < e;i++)
	{
		int from, to, weight;
		cin >> from >> to >> weight;
		adj[from].push_back(make_pair(to, weight));
		adj[to].push_back(make_pair(from, weight));
	}
	int q;
	cin >> q;
	vector <int> res;
	for (int i = 0;i < q;i++)
	{
		int counter = 0;
		int f, t;
		cin >> f >> t;
		for (int j = 0;j <= e;j++)
		{
			dfs(f, j);
			
			if (dfs_num[t] == 1)
			{
				counter++;
			}
			dfs_num.assign(n+1, 0);
		}
		res.push_back(counter);
		
	}
	
	for (int i = 0;i < res.size();i++)
		{
		cout<<res[i]<<endl;
}
		return 0;
	
}
