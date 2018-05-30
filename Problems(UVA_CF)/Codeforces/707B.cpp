#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef vector<long long> vi;
typedef vector <vi> vii;
int s[1000000] ={0};
vi dfs_num;
vector <vector<pair<long long, long long>>> adj;
long long c=10e11;
void dfs(int u) {
	//dfs_num[u]=1;
	for (int j = 0; j < (int)adj[u].size(); j++) {
		//	cout << "edge " <<u <<" enterring "<< adj[u][j].first  << " With weight " << adj[u][j].second << endl;
	
		
		if(s[adj[u][j].first] ==1)
		{
	continue;
		
		}
		
	if (c>adj[u][j].second )
	{
	
		c=adj[u][j].second;
	}
	
		//int v = adj[u][j].first;
		
		//if ( dfs_num[v] == 0)
		//{
	
			//dfs(v,k,storage);
		//}
	}
}
int main()
{
	 ios_base::sync_with_stdio(false);
	long long min =10e11;
	int n, e,k=0;
	cin >> n >> e >>k;
	vector <long long> storage;
	adj = vector <vector<pair<long long, long long>>>(n + 1);
	
	
	
	
	for (int i = 0;i < e;i++)
	{
		int from, to, weight;
		cin >> from >> to >> weight;
		adj[from].push_back(make_pair(to, weight));
		adj[to].push_back(make_pair(from, weight));
	}
	for( int i=0;i<k;i++)
	{
		int ks;
		cin>>ks;
		storage.push_back(ks);
		s[ks] =1;
	}
	long long temp=10e11;
	
		for(int j=0;j<k;j++)
		{
			dfs(storage[j]);
				if (c<min)
				{
					temp=c;
					min=c;
				}
			
		//	dfs_num.assign(n+1,0);
			c=temp;
		}
	
	if(min==10e11 || k==0)
	{
		cout<<-1<<endl;
		return 0;
	}
	cout<<min<<endl;
		return 0;
	
}
