#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;


int main()
{
fast;
cout<<"PERFECTION OUTPUT\n";
while(true)
{
	int n;
	cin>>n;
	if(n==0)
		break;
	int sum=0;
for(int i=1;i<n;i++)
	{
if(n%i == 0 )
{
	sum+=i;
}
	}
if(sum < n)
{
	rep(i, (int) 5-to_string(n).size())
	 cout<<" ";
 cout<<n<<"  ";
 cout<<"DEFICIENT\n";
 continue;
}
else if (sum == n)
{
	rep(i, (int) 5-to_string(n).size())
		 cout<<" ";
	 cout<<n<<"  ";
	 cout<<"PERFECT\n";
	 continue;
}
else
{
	rep(i, (int) 5-to_string(n).size())
		 cout<<" ";
	 cout<<n<<"  ";
	 cout<<"ABUNDANT\n";
}



}
cout<<"END OF OUTPUT\n";
		return 0;
}
