
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

int main()
{

	fast;
	vector <ll> single;
	vector <vector <ll> > multi;

	rep(i, 14)
	{
		ll x;
		cin >> x;
		single.pb(x);
	}

	rep(i, 14)
	{
		multi.pb(single);
	}

	ll maxS = -1;

	rep(i, 14)
	{
		ll all = multi[i][i] >14 ? multi[i][i] / 14 : 0;
		int temp = multi[i][i] - (all * 14);
		multi[i][i] = 0;
		ll curSum = 0;
		int j = i + 1;
		while(true)
		{
			if (j == 14)
				j = 0;
			multi[i][j] += temp > 0 ? all + 1 : all;
			temp--;
			curSum += multi[i][j] % 2 == 0 ? multi[i][j] : 0;
			if (j == i)
				break;
			j++;
		}
		maxS = max(curSum, maxS);
	}
	cout << maxS << endl;

	return 0;
}