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
int main()
{
fast;
string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
char dir;
cin>>dir;
string n;
cin>>n;
vector <char > vec;
rep(i,n.size())
{
rep(j,s.size())
		{
if(s[j] == n[i])
{
	if(dir == 'L')
		vec.pb(s[j+1]);
	else vec.pb(s[j-1]);
}
		}
}
for(char v: vec)
	cout<<v;
return 0;
}
