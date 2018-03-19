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
int p[400][400];

void printPath(int i, int j) {
if (i != j) printPath(i, p[i][j]);
cout<<j<<" ";
}


int main()
{
int n,e;
cin>>n>>e;

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
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

//FLOYD	
	for (int k = 0; k <= 26; k++) //k->i->j
	 for (int i = 0; i <= 26; i++)
	  for (int j = 0; j <= 26; j++)
	      adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
  
	       

	//For Path
	for (int k = 0; k < n; k++) //k->i->j
	 for (int i = 0; i < n; i++)
	  for (int j = 0; j < n; j++)
	    if (adj[i][k] + adj[k][j] < adj[i][j]) {
	     adj[i][j] = adj[i][k] + adj[k][j];
	     p[i][j] = p[k][j];
       }

		int source,dest;
        cin >> source >> dest;
        cout << adj[source][dest] << endl;
        printPath(source , dest);

        return 0;
    }


