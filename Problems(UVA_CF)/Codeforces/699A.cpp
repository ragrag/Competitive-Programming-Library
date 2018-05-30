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
int main()
{
fast;
int n;
string x;
cin>>n;
cin>>x;
vi vec;
int md=INF;
rep(i,n)
{
	int t;
	cin>>t;
	vec.pb(t);
}
rep(i,n)
{
	if(i==n-1)
		break;
	if(x[i] == 'R' && x[i+1] == 'L')
	{
		md = min (md,((vec[i]+vec[i+1])/2 )-vec[i]);
	}
}
md ==INF? cout<<-1<<"\n": cout<<md<<endl;
return 0;
}
