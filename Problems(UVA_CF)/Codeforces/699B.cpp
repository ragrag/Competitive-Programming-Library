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
vector <vector<int>> adj;
void dfs(int u) {
	dfs_num[u] = 1;
	for (int j = 0; j < (int)adj[u].size(); j++) {
		int v = adj[u][j];
		if (dfs_num[v] == 0)
    {
			dfs(v);
	}
}
}
int main()
{
int r[1000]={0};
int cr[1000]={0};
vector <string> ar(1000);
int n,m;
cin>>n >>m;
int ma=0;
for (int i=0;i<n;i++)
{
    cin>>ar[i];
        for(int j=0;j<ar[i].size();j++)
        {
            if (ar[i][j]=='*')
            {
             r[i]++;
             cr[j]++;
            ma++;
            }
        }
}
vector <string > ar2 = ar;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
    int  c = r[i] + cr[j];
    if(ar2[i][j] == '*')
        c-=1;
           if(c== ma)
{
 cout <<"YES"<<endl<<i+1 <<" "<<j+1<<" "<<endl;
        return 0;
}
    }
}
cout<<"NO"<<endl;
		return 0;
}
