#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>
#include <set>
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
map <char, int> mapone;
map<char, int> maptwo;
vector <ll> vec;
int main()
{
	int n;
	ll k;
	cin >> n >> k;
 if ( k %2 !=0)
	{
		cout << 1 << endl;
		return 0;
	}
	else {
		
			ll l = 1;
			ll r = pow(2, n) - 1;;
			ll mid;
			bool first = false;
			while (r>=l)
			{
				mid = l + (r-l)/2;
				if (first)
					n--;
				first = true;
				
				if (k > mid)
				{
					l = mid+1;
				}
				else if (k < mid)
				{
					r = mid-1;
				}
				else if( k== mid) {
					cout << n << endl;
					return 0;
				}
			}
		
		
	}
		return 0;
}
