#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
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
int n;
cin>>n;
int sum=0;
vi bags;
rep (i,n)
{
int t;cin>>t;
bags.pb(t);
sum +=t;
}
int tot=0;
rep(i,n)
{
if ((sum-bags[i]) %2 ==0)
	tot++;
}
cout<<tot<<endl;
		return 0;
}
