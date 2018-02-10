#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
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


int adj[400][400];

int main()
{
int n,e;
cin>>n>>e;

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      adj[i][j] = INF;
    adj[i][i] = 0;
  }

    for (int i = 0;i < e;i++)
	{
		int from, to,w;
		cin >> from >> to>>w;
	    adj[from][to] = w;
	}

	for (int k = 0; k < n; k++) //k->i->j
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);

for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      printf("APSP(%d, %d) = %d\n", i, j, adj[i][j]);

		return 0;
}
