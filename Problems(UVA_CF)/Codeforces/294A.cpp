#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
map <char,int> mapone;
map<char,int> maptwo;
int main()
{
vi vec;
int n,m;
cin >>n;
rep(i,n)
{
int k;
cin>>k;
vec.pb(k);
}
cin>>m;
rep(i,m)
{
int l,r;
cin>>l>>r;
if (l<=(vec.size()-1))
	vec[l] += (vec[l-1]-r);
if (l-2 >=0 )
	vec[l-2] += (r-1);
vec[l-1] = 0;
}
rep (i,n)
{
	cout<<vec[i]<<endl;
}
return 0;
}
