#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <set>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
vi dfs_num;
vector <vector<int> >  adj;
void dfs(int u,int &cnt) {
	dfs_num[u]=1;
	for (int j = 0; j < (int)adj[u].size(); j++) {
        if(adj[adj[u][j]].size()==0)
            cnt++;
	}
}
int main()
{
int v;
cin>>v;
	adj = vector <vector<int> > (v+99);
	dfs_num = vi(v+99);
int from;
cin >>from;
set <int> se;
int cnt =from+1;
se.insert(from);
for (int i = 1;i < v-1;i++)
	{
		adj[from].push_back(cnt);
		cin >>from;
		se.insert(from);
		if(i==(v-2))
            adj[from].push_back(cnt+1);
       cnt++;
	}
int c=0;
	for(auto f : se) {
  dfs(f,c);
  if(c<3)
  {
      cout<<"NO"<<endl;
  return 0;
  }
c=0;
}
	cout<<"YES" <<endl;
    return 0;
}
