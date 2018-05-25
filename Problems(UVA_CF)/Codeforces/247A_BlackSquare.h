
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
int ar[5];

for(int i=1;i<5;i++)
{
	cin>>ar[i];
}
string s;

cin>>s;
int all=0;
for(int i=0;i<s.size();i++)
{

	all += ar[s[i] - '0'];
}
cout<<all<<endl;
		return 0;
}
