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
string one,two,three;
cin>>one>>two>>three;
rep(i,one.size())
	mapone[one[i]]++;
rep(i,two.size())
	mapone[two[i]]++;
rep(i,three.size())
	maptwo[three[i]]++;
rep(i,three.size())
{
if (maptwo[three[i]] != mapone[three[i]])
{
	cout<<"NO"<<endl;
	return 0;
}
}
if (three.size() != (one.size() + two.size() ))
		cout<<"NO"<<endl;
else
	cout<<"YES"<<endl;
return 0;
}
