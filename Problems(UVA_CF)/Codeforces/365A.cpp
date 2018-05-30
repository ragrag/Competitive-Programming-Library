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
bool ar[10] = {0};
int main()
{
int n,k;
cin>>n>>k;
vector <string> vec;
int num=0;
rep(i,n)
{
string t;
cin>>t;
vec.pb(t);
}
rep(i,n)
{
rep(j,vec[i].size())
		{
	ar[vec[i][j]-'0'] = 1;
		}
bool found=true;
rep(o,10)
{
if(   o<=k && ar[o]!=1  )
{
	found=false;
	break;
}
}
num += found;
found=false;
memset(ar,0,10);
}
cout<<num<<endl;
return 0;
}
