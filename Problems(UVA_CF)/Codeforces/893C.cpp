#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef vector<long long> vi;
typedef vector <vi> vii;
vi dfs_num;
vector <vector<int> >  adj;
void dfs(int u) {
	dfs_num[u]=1;
	for (int j = 0; j < (int)adj[u].size(); j++) {
		int v = adj[u][j];
		if ( dfs_num[v] == 0)
		{
		dfs(v);
		}
	}
}
int main()
{
	 ios_base::sync_with_stdio(false);
    long long price =0;
	int n, e;
	cin >> n >> e;
    
	adj = vector <vector<int> > (n + 1);
	dfs_num = vi(n + 1);
	
    vector <pair<long long, int> > nodes;
    for(int i=0;i<n;i++)
    {
        long long c;
        cin>>c;
        nodes.push_back(make_pair(c,i+1));
    }
    sort(nodes.begin(),nodes.end());
	
	for (int i = 0;i < e;i++)
	{
		int from, to;
		cin >> from >> to;
		adj[from].push_back(to);
        adj[to].push_back(from);
	}
    for(int i=0;i<n;i++)
    {
    if(dfs_num[nodes[i].second] == 0)
    {
     dfs(nodes[i].second);
     price+=nodes[i].first;
    }
    }
    for(int i=0;i<n;i++)
    {
    if(dfs_num[nodes[i].second] == 0)
    {
     price+=nodes[i].first;
    }
    }
    
cout<<price<<endl;
		return 0;
}
