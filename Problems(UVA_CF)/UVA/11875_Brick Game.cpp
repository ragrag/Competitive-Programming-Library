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
float n;
cin>>n;
vi ar;

rep(i,(int) n)
{
int temp;
cin>>temp;
ar.pb(temp);
}
sort(ar.begin(),ar.end());
cout<<fixed<<"Case "<<casee<<": "<<ar[ceil(n/2)-1]<<"\n";
}

		return 0;
}
