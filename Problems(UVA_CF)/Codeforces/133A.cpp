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
int main()
{
fast;
string hq9;
cin>>hq9;
rep(i,hq9.size())
{
	if(hq9[i] == 'H' || hq9[i] == 'Q' || hq9[i] == '9')
		{
		cout<<"YES\n";
		return 0;
		}
}
cout<<"NO\n";
return 0;
}
