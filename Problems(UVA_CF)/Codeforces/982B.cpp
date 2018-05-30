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
int main()
{
    fast;
vector <pair <ll, int > > seats;
priority_queue <pair <ll, int > > extro;
int  n;
cin>>n;
rep(i,n) 
{
ll w;cin>>w;
seats.pb(mp(w,i));
}
sort(seats.begin(),seats.end());
string passengers;
cin>>passengers;
int index=0;
rep(i,2*n)
{
if(passengers[i] == '0')
{
	cout<<seats[index].second+1<<" ";
	extro.push(seats[index]);
	index++;
}
else {
	pair <ll, int > top = extro.top();
	extro.pop();
	cout<<top.second+1<<" ";
}
}
	return 0;
}
