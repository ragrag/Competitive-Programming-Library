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
bool isBipartite = true;
vi visited;

vi ts;

void bfs(int s) {

queue<int> q;
dist[s]=0;
q.push(s);
visited[s] = 1;

while (!q.empty()& isBipartite) {

	int u = q.front();
	q.pop();

	for (int j = 0; j < (int)adj[u].size(); j++){
		int v = adj[u][j];

	if (visited[v] ==0 ){
        visited[v]=1;
		dist[v] = 1- dist[u] ;
		q.push(v);
	}
	else if (dist[v]  == dist[u] )
          {
		isBipartite = false;
		break;
	}
}
}
}


int main()
{
        fast;
    while(true)
    {

int n,e;
cin>>n;
if (n==0 )
return 0;

adj = vector < vector<int> > (n+1);
dist = vi(n, -1);
visited.assign(n+1,0);

while(true)
	{
		int from, to;
		cin >> from >> to;
		if(from ==0 && to==0)
            break;
		adj[from].push_back(to);
        adj[to].push_back(from);
	}

int h=0;;
int zero=0;int one=0;int total=0;
for(int i=1;i<=n;i++)
{
    if(!visited[i])
    {


    dist = vi(n, -1);
    zero=0;
    one=0;
    bfs(i);
    if(isBipartite)
   {

       for(int x=1; x<=dist.size(); x++)
    {
        if(dist[x] == 0)
           zero++;
        else if(dist[x] == 1)
                one++;
    }

    int tmp = max(zero, one);
                total += tmp;
   }
    }
}
	cout<<total;

    }
return 0;
}



