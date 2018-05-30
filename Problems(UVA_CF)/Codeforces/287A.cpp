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
int n,c;
 char ar[8][8];
bool valid (char c,int i, int j)
 {
if(ar[i+1][j] == c && ar[i][j+1] == c)
{
	return true;
}
if(ar[i+1][j] == c && ar[i][j-1] == c)
{
	return true;
}
if(ar[i-1][j] == c && ar[i][j-1] == c)
{
	return true;
}
if(ar[i-1][j] == c && ar[i][j+1] == c)
{
	return true;
}
return false;
 }
int main()
{
fast;
for(int i=0;i<8;i++)
{
	for(int j=0;j<8;j++)
		{
		ar[i][j] = '-';
		}
}
for(int i=2;i<6;i++)
{
	for(int j=2;j<6;j++)
		{
		cin>>ar[i][j];
		}
}
for(int i=2;i<6;i++)
{
	for(int j=2;j<6;j++)
		{
		if(valid(ar[i][j],i,j))
		{
			cout<<"YES\n";
		return 0;
		}
		}
}
cout<<"NO\n";
return 0;
}
