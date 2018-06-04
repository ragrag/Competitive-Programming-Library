#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define  pb push_back
#define  nl cout<<endl
#define  mp make_pair
#define  rep(i,n) for(int i=0;i<n;i++)
#define  rep2(i,n) for(int i=1;i<=n;i++)
#define  vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define frep rep(i,n)
#define frep2 rep2(i,n)
#define  vrprint(x)  copy(x.rbegin(), x.rendist(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
using namespace std;
int main()
{
    fast;
set <int> s;
char ar[1000][1000];
int n,m;
cin>>n>>m;
vector <int> vec;
rep(i,n)
{
int idxg, idxc;
    rep(j,m)
    {
cin>>ar[i][j];
if(ar[i][j] == 'G')
    idxg = j;
if(ar[i][j] == 'S')
    idxc = j;
    }
   if (idxc < idxg)
   {
       cout<<-1<<endl;
       return 0;
   }
   else
   {
vec.pb(idxc-idxg);
   }
}
sort( vec.begin(), vec.end() );
vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
cout<<vec.size();
    return 0;
}
