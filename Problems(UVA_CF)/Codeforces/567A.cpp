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
vector <long long> vec;
int n;
cin>>n;
rep(i,n)
{
	ll t;
	cin>>t;
	vec.pb(t);
}
rep(i,n)
{
if(i!=0)
	cout<<min (abs(vec[i]-vec[i+1]),abs(vec[i]-vec[i-1]) ) <<" "<<max (abs(vec[i]-vec[vec.size()-1]), abs(vec[i]-vec[0]) )<<endl;
else cout<<abs(vec[i]-vec[i+1])<<" "<<max (abs(vec[i]-vec[vec.size()-1]), abs(vec[i]-vec[0]) )<<endl;
}
return 0;
}
