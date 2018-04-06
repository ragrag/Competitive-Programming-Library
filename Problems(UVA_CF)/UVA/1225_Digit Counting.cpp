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
int t;
cin>>t;

while(t--)
{
int n;
cin>>n;
int ar[10] = {0};
rep2(i,n)
{
rep(j,to_string(i).size())
		{
		ar[ to_string(i)[j] -'0']++;
		}

}
for(int i=0;i<=9;i++){
	cout<<ar[i];
	if(i!=9)
		cout<<" ";
}
cout<<"\n";
}

		return 0;
}
