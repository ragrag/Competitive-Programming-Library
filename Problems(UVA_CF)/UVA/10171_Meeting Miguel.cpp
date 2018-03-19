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

int adj2[400][400];



int main()
{
//freopen("out.txt","w",stdout);
  while(true)
 {

int ar[25][25] = {0};

 int n;

cin>>n;
if(n==0)
    break;

for (int i = 0; i <= 26; i++) {
    for (int j = 0; j <= 26; j++)
	{
      adj[i][j] = INF;
      adj2[i][j] = INF;
	}
    adj[i][i] = 0;
    adj2[i][i] = 0;
  }

    for (int i = 0;i < n;i++)
	{
    char dir ;
    char age;

cin>>age>>dir;

		int from, to,w;
char f,t;
		cin >> f >> t>>w;
from = f-'A';
to = t - 'A';

if (age == 'M')
        if(dir == 'U')
        {
            adj2[from][to] = min(w,adj2[from][to]);
        }
        else
        {

           adj2[from][to] = min(w,adj2[from][to]);
            adj2[to][from] = min(w,adj2[to][from]);
        }
else
{

     if(dir == 'U')
        {
            adj[from][to] = min(w,adj[from][to]);

        }
        else
        {

           adj[from][to] = min(w,adj[from][to]);
            adj[to][from] = min(w,adj[to][from]);

        }
}

	}
	char mee,magg;
int me, mag;
cin>>mee>>magg;
me = mee - 'A';
mag = magg - 'A';

	for (int k = 0; k <= 26; k++) //k->i->j
	 for (int i = 0; i <= 26; i++)
	  for (int j = 0; j <= 26; j++)
	  {
	      adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
          adj2[i][j] = min(adj2[i][j], adj2[i][k] + adj2[k][j]);
       }

int minpath = INF-5;
vector <int> pos;

for (int i=0;i<=26;i++)
{

        int temp = adj2[mag][i] + adj[me][i] ;

        if(temp < minpath )
        {
           pos.clear();
            minpath = temp;
            pos.pb(i);

        }

        else if (temp == minpath)
            pos.pb(i);

}
sort(pos.begin(),pos.end());
if (pos.size()> 0 )
{


cout<<minpath<<" ";
for(int i=0;i<pos.size();i++)
{
    if(i==0)
        cout<<(char) (pos[i] + 'A');
    else cout<<" " <<(char) (pos [i] + 'A');

}

nl;
}
else {

    cout<<"You will never meet."<<endl;
}



 }
        return 0;
    }


