#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define mp make_pairs
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

int t;
cin>>t;
for(int casee=1;casee<=t;casee++)
{

int n,e;
cin>>n>>e;

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
	{
      adj[i][j] = INF;
	}
    adj[i][i] = 0;
  }

    for (int i = 0;i < e;i++)
	{
		int from, to;
		cin >> from >> to;
	    adj[from][to] = 1;
	    adj[to][from] = 1;
	}
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n ; j++)
                adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);


int maxx1=-99;

int start,endd;
cin>>start>>endd;

for(int i=0;i<n;i++)
{


if((adj[start][i] + adj[i][endd] )> maxx1)
    {
    maxx1 = adj[start][i] + adj[i][endd];
    }



}

cout<<"Case "<<casee<<": " <<maxx1<<endl;
}
        return 0;
    }


