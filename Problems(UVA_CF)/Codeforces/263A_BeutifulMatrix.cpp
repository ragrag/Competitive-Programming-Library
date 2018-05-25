
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


for(int i=1;i<6;i++)
{

	for(int j=1;j<6;j++)

	{
	int x;
	cin>>x;
	if(x==1)
	{
		cout<<abs(i-3) + abs(j-3)<<endl;
		break;

	}

	}
}

	return 0;
}
