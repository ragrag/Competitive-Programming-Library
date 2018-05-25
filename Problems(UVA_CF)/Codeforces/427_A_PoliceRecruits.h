
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
int x;
cin>>x;
int rec=0;
int c =0;
rep(i,x)
{
int x;
cin>>x;
if(x==-1 && rec==0)
	c++;
else if(x==-1 && rec!=0)
{
rec--;
}
else rec+=x;

}
cout<<c<<endl;
		return 0;
}
