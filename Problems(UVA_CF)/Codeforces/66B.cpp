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
bool ar[100000] = {false};
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
using namespace std;
int main()
{
int n;
int curmin;
int tcount=0;
int tempcount=0;
int ar[1000];
cin>>n;
for (int i=0;i<n;i++)
{
    cin>>ar[i];
}
for (int i=0;i<n;i++)
{
tempcount=0;
for(int j=i;j<n;j++)
{
    curmin = ar[j];
    tempcount++;
    if(curmin < ar[j+1] && (j+1<=n-1))
        break;
}
for(int j=i;j>=0;j--)
{
    curmin = ar[j];
    tempcount++;
    if(curmin < ar[j-1] && (j-1>=0))
        break;
}
tempcount-=1;
tcount = max(tcount,tempcount);
}
cout<<tcount<<endl;
    return 0;
    }
