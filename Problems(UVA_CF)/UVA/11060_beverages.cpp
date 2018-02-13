
#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<string>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;


vector <int> dist;
vector <vector<int>> adj;
map <string,int> drinks;
map <int,string> drinksstr;

//BFS Topological Sorting
vi p;
vector <string> ts;

void toposortBFS(int n) {

   priority_queue < int, vector < int > , greater < int >>  q;
   for (int i = 0; i < n; i++) {
      for (auto v: adj[i])
         p[v]++;
   }
   for (int i = 0; i < n; i++) {
      if (p[i] == 0)
         q.push(i);
   }

   while (!q.empty()) {
      int u = q.top();
      q.pop();
      ts.pb(drinksstr[u]);
      for (auto v: adj[u]) {
         if (--p[v] == 0) {
            q.push(v);
         }
      }
   }
}



int main()
{

int n,e;
int casee=0;
while(cin>>n)
{


drinks.clear();
drinksstr.clear();
adj = vector < vector<int> > (n);
dist = vi(n, INF);
p = vector <int>(n);

rep (i,n)
{
    string t;
    cin>>t;
    drinks[t] = i;
    drinksstr[i] = t;
}
cin>>e;
    for (int i = 0;i < e;i++)
	{
		string from, to;
		cin >> from >> to;
		adj[drinks[from]].push_back(drinks[to]);
       // adj[to].push_back(from);
	}



ts.clear();
toposortBFS(n);

cout<<"Case #"<<++casee<<": Dilbert should drink beverages in this order: ";

rep(i,ts.size())
{
    cout<<ts[i];
    if(i < ts.size()-1)
        cout<<" ";
    else cout<<'.';
}
nl;nl;
}

		return 0;
}
