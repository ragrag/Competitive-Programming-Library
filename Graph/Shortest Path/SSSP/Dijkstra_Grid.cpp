//UVA 929
#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define pb push_back
#define nl cout<<endl
#define mp make_pair
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

int dist[1001][1001];
int adj[1001][1001];

int n,m;

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
bool valid (int r,int c)
{
return  ( (r >= 0 && r< n) && (c >=0 && c<m ) );
}


int dijkstra() {
    dist[0][0] = adj[0][0];
    priority_queue < iii, vector<iii> , greater < iii > > pq;
    pq.push(mp(dist[0][0], mp(0,0) ) );

    while (!pq.empty()) {
      iii front = pq.top(); pq.pop();
      int from = front.second.first;
      int to = front.second.second;
      int curCost = front.first;
      if (curCost == dist[from][to])
      for (int i=0;i<4;i++) {
    	int  x = from+dx[i];
    	int  y = to+dy[i];

        if (valid(x,y) && ( dist[from][to] + adj[x][y] ) < dist[x][y]) {
        	dist[x][y] = dist[from][to] + adj[x][y];
          pq.push(mp( dist[x][y],mp(x,y) ) );
        }
      }
    }
return dist[n-1][m-1];
}


int main()
{
fast;
int t;
cin>>t;

while(t--)
{

cin>>n>>m;

for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
		{
		dist[i][j] = INF;
		cin>>adj[i][j];
		}
}

cout<< dijkstra()<<endl;
}

		return 0;
}
