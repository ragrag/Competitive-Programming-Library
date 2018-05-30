#include <iostream>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <string>
#include <vector>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
int main()
{
	string x; 
	int k;
	cin >> x >> k;
	while (k--)
	{
		ll n = x[x.size() - 1] - '0';
		if (n != 0)
		{
			ll temp = stol(x);
			temp--;
			x = to_string(temp);
		}
		else x.erase(x.size() - 1);
	}
	cout << x << endl;
	return 0;
}
