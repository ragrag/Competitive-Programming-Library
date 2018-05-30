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
int main()
{
fast;
string x , y;
cin>>x>>y;
string left, right;
for(int i=0;i<x.size();i++)
{
if ( x[i] == '|')
{
left = x.substr(0,i);
right = x.substr(i+1,x.size());
}
}
int leftC = left.size();
int rightC = right.size();
for(int i=0;i<y.size();i++)
{
	if (leftC <= rightC)
	{
		leftC++;
		left+= y[i];
	}
	else {
	rightC++;
	right+=y[i];
	}
}
left.size() == right.size()? cout<< left<<'|'<<right<<"\n" : cout<<"Impossible\n";
return 0;
}
