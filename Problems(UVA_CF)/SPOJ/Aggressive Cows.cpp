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
vector <ll> vec;
int n,c;



bool feasible(ll m)
{
int nc =1;
int last = 0;

for(int i=1;i<n;i++)
{

	if ((vec[i] - vec[last]) >= m)
	{
		nc++;
		last = i;
	if(nc==c)
		return true;
	}
}
return false;
}



int main()
{

	int t;
	cin>>t;
	while(t--)
	{
cin>>n>>c;
vec.clear();
rep(i,n)
{
	ll t;cin>>t;
	vec.pb(t);
}
sort(vec.begin(),vec.end());
ll r =vec[n-1]- vec[0] , l = vec[0], mid;

while (r - l >1 )
{
	mid = l + (r-l)/2;
	if (feasible(mid))
		l=mid;
	else r=mid;
}
cout<<l<<endl;
	}
return 0;

}
