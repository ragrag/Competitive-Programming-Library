
#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;


vector <int> dist;
vector <vector<int>> adj;

//BFS Barpitite Graph Check
bool isBipartite = true;

void checkBPD(int s) {

queue<int> q;
dist[s]=0;
q.push(s);

while (!q.empty()) {

	int u = q.front();
	q.pop();

	for (int j = 0; j < (int)adj[u].size(); j++){
		int v = adj[u][j];
	if (dist[v] == INF){
		dist[v] = 1- dist[u] ;
		q.push(v);
	}
	else if (dist[v]  == dist[u] )
          {
		isBipartite = false;
		return;
	}
}
}
}




int main()
{
    while(1)
    {


int n;
cin>>n;
if (n==0)
    break;

isBipartite = true;
adj = vector < vector<int> > (n);
dist = vi(n, INF);

while(1)
	{
		int from, to;
		cin >> from >> to;
		if(from==0 && to ==0)
            break;
		adj[from-1].push_back(to-1);
        adj[to-1].push_back(from-1);
	}

rep (i,n)
{
    if (dist[i] == INF)
    {
        checkBPD(i);
    }
}

isBipartite == true ? cout<<"YES\n" : cout<<"NO\n";
}

		return 0;
}
