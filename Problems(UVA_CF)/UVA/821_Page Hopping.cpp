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


int cas =0;
bool casee = false;
bool endd = false;

while(true)
{

bool ar[100] = {0};

for (int i = 1; i <=100; i++) {
    for (int j = 1; j <= 100; j++)
	{
      adj[i][j] = INF;
	}
    adj[i][i] = 0;
  }

  int from, to;
    cin >> from >> to;
if(from ==0 && to ==0 )
    break;
    while(1)
	{


adj[from][to] = 1;
ar[from] = 1;
ar[to] = 1;
	if(from ==0 && to==0 )
{
    break;
}
cin>>from>>to;

}

	for (int k = 0; k <= 26; k++) //k->i->j
	 for (int i = 0; i <= 26; i++)
	  for (int j = 0; j <= 26; j++)
	      adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);



float c=0;
float cc=0;
for(int i=1;i<=100;i++)

{
for(int j=1;j<=100;j++)
{
    if(ar[i] && ar[j])
    {


    if(i==j)
        continue;
    c+=adj[i][j];
    cc++;
    }

}
}

float ans = c/cc;
 cout.precision(3);
cout<<fixed<<"Case "<<++cas<<": average length between pages = "<<ans<<" clicks"<<endl;

}

        return 0;
    }


