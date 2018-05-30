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
float t;
cin>>t;
int a =0;
rep (i,t)
{
char x;
cin>>x;
if(x=='A')
	a++;
}
if(a>(t/2))
	cout<<"Anton"<<endl;
else
	a == t/2 ? cout<<"Friendship\n" : cout<<"Danik\n";
		return 0;
}
