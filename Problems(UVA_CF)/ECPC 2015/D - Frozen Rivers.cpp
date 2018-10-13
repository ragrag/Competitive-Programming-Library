#include <bits/stdc++.h>
#define INF 10e15
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;

vector <vector <pair<int,int> > > adj;
bool vis[100001];
vector <ll> timings;
void dfs(int u,ll cost)
{

vis[u]=1;
if(adj[u].size() == 0 )
{
    timings.pb(cost);
}

 for(int i=0;i<(int) adj[u].size();i++)
 {
     int v = adj[u][i].second;

     if(!vis[v])
     {
         if(!vis[v]  )
         {
             if(adj[u][i].first > adj[u][0].first)
                dfs(v,  adj[u][0].first + (adj[u][i].first-adj[u][0].first)*2 +cost);
                else
                    dfs(v,  adj[u][i].first+cost  );
         }
     }
 }


}
int main()
{

fast;
//freopen("in.h","r",stdin);
  //freopen("out.h","w",stdout);
int t;
cin>>t;
while(t--)
{

int n;
cin>>n;

adj = vector <vector <pair<int,int> > > (n+1);
timings.clear();
memset(vis,0,n+1);
for(int i=2;i<=n;i++)
{
int parent,cost;
cin>>parent>>cost;
adj[parent].pb(mp(cost,i));

}
rep2(i,n)
{
    sort(adj[i].begin(),adj[i].end());
}
dfs(1,0);
sort(timings.begin(),timings.end());

int q;
cin>>q;
rep(i,q)
{

ll qq;
cin>>qq;
auto idx = upper_bound(timings.begin(),timings.end(),qq) - timings.begin();

idx--;

if(idx>=0)
 cout<<idx+1<<endl;

 else cout<<0<<endl;

}


}
		return 0;
}
