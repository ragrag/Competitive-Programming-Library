#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define mp make_pairs
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, "\n\n"))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;

int adj[400][400];
int p[400][400];

void printPath(int i, int j) {
if (i != j) printPath(i, p[i][j]);
cout<<j<<" ";
}


int main()
{
    vi ans;
    int tt;
    cin>>tt;
    while(tt--)
    {


int n,e,ex,t;
cin>>n>>ex>>t>>e;

for (int i = 0; i < n+1; i++) {
    for (int j = 0; j < n+1; j++)
	{
      adj[i][j] = INF;
	  p[i][j] =i;
	}
    adj[i][i] = 0;
  }

    for (int i = 0;i < e;i++)
	{
		int from, to,w;
		cin >> from >> to>>w;
	    adj[from][to] = w;
	    //adj[to][from] = w;
	}

	for (int k = 1; k <= n; k++) //k->i->j
	 for (int i = 1; i <= n; i++)
	  for (int j = 1; j <= n; j++)
	    if (adj[i][k] + adj[k][j] < adj[i][j]) {
	     adj[i][j] = adj[i][k] + adj[k][j];
	     p[i][j] = p[k][j];
       }

		int mice=0;
		rep2(i,n)
		{
		    if(adj[i][ex] <=t )
                mice++;
		}
        ans.pb(mice);
    }
vprint(ans);
        return 0;
    }


