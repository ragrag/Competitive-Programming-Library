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
ll minwisd = INF;
int n,m;
ll k;
vector <vector<pair<int,pair<ll,ll> >> >adj;
bool vis[1000005];
vector <ll> dist;

void dijkstra(int s,int wis) {
    dist = vector<ll>(n+1, INF);
    memset(vis,0,n+1);
    dist[s] = 0;
    priority_queue < pair<ll,int>, vector < pair<ll,int >  >, greater < pair<ll,int> > > pq;
    pq.push(mp(0, s));
    while (!pq.empty()) {
      pair<ll,int> front = pq.top(); pq.pop();
      int d = front.first, u = front.second;
        vis[u]=1;
      if (d > dist[u])  continue;

      for (auto v: adj[u]) {
           ll current_wisdom = v.second.second;
           ll current_cost = v.second.first;


            if(current_wisdom > wis)
                continue;

            ll totalCost = current_cost+d;

        if (totalCost < dist[v.first] && !vis[v.first]) {
          dist[v.first] =  totalCost;
          pq.push(mp(dist[v.first], v.first));
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
    cin>>n>>m>>k;
    adj = vector <vector<pair<int,pair<ll,ll> >> >(n+1);
minwisd=INF;
    rep2(i,m)
    {
        ll from,to,cost,wisdom;
        cin>>from>>to>>cost>>wisdom;
        adj[from].pb(mp (to,mp(cost,wisdom)));
        adj[to].pb(mp (from,mp(cost,wisdom)) );
    }


ll l=0,r=1e9;
bool found=false;

while(l<r)
{
    ll mid = l +((r-l)/2) ;
    dijkstra(1,mid);
    if(dist[n] < k)
    {
        minwisd=min(minwisd,mid);
        found=true;
    }
    if(found)
    {
        r=mid;
        found = false;
    }
    else
        l=mid+1;

}

if(minwisd == INF)
    cout<<-1<<endl;
else cout<<minwisd<<endl;

}
return 0;
}