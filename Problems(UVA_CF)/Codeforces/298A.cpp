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
string x;
int n;
cin>>n>>x;
int start,end;
rep(i ,n)
{
	if(x[i] == 'R')
	{
		start = i+1;
		for(int j=i+1;j<n;j++)
		{
			if(x[j] == 'L')
			{
				end = j;
				cout<<start<<" "<<end<<endl; return 0;
			}
			else if(x[j] =='.')
			{
				end = j+1;
				cout<<start<<" "<<end<<endl; return 0;
			}
		}
	}
	if(x[i] == 'L')
	{
		end = i;
		for(int j=i+1;j<n;j++)
		{
			 if(x[j] == '.')
			{
				start = j;
				cout<<start<<" "<<end<<endl; return 0;
			}
		}
	}
}
return 0;
}
