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


int main()
{
fast;
int t;
cin>>t;

for (int casee = 1;casee<=t;casee++)
{
float d,v,u;
cin>>d>>v>>u;

float t1= d/u;
float t2 = d/(sqrt(u*u - v*v));

if( v>=u || t1 == t2 )
{
	cout<<"Case "<<casee<<": can't determine\n";
	continue;
}
cout.precision(3);
cout<<fixed<<"Case "<<casee<<": "<<fabs(t2-t1)<<"\n";

}

		return 0;
}
