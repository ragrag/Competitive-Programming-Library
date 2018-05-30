#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(long long i=0;i<n;i++)
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
ll l,r , a, b, c;
cin>>l>>r;
a=l;
for (ll k = l;k<=r;k++)
{
a=k;
for(ll i =l+1;i<r;i++)
{
	if(i==a)
		continue;
if(gcd(a,i)==1)
	{
	b=i;
	for (ll j=r;j>l;j--)
	{
	if(j==b || j==a)
		continue;
	if(gcd(b,j)==1 && gcd(j,a) != 1)
	{
		cout<<a<<" "<<b<<" "<<j<<endl;
		return 0;
	}
	}
	}
}
}
cout<<-1<<endl;
return 0;
}
