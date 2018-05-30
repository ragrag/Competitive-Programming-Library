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
	ll n,k;
	cin>>n>>k;
	if(((n-1)/2 )+1 >= k )
	{
	cout<<(k*2)-1<<endl;
	return 0;
	}
	else if(k >((n-1)/2 )+1)
	{
		k-= ((n-1)/2 )+1;
		cout<<k*2<<endl;
		return 0;
	}
	return 0;
	}
