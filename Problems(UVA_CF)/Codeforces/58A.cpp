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
bool hel[5] = {false};
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
   string s;
   cin>>s;
char exp ='h';
   rep(i,s.size())
   {
       if (s[i] == 'h')
       {
        hel[0]=1;
        continue;
       }
       if (s[i] == 'e' && hel[0]  )
       {
        hel[1]=1;
        continue;
        }
        if (s[i] == 'l' && hel[1]  && !hel[2] )
         {
         hel[2]=1;continue;}
         else if (s[i] == 'l' && hel[2]  ){
         hel[3]=1;continue;}
         if (s[i] == 'o' && hel[3]  )
         {
             cout<<"YES"<<endl;
             return 0;
         }
   }
   cout<<"NO"<<endl;
     return 0;
 }
