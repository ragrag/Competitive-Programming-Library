#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define  pb push_back
#define  nl cout<<endl
#define  mp make_pair
#define  rep(i,n) for(int i=0;i<n;i++)
#define  rep2(i,n) for(int i=1;i<=n;i++)
#define  vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define frep rep(i,n)
#define frep2 rep2(i,n)
#define  vrprint(x)  copy(x.rbegin(), x.rendist(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
int main()
{
fast;
int n,k;
cin>>n>>k;
vi prefix;
int mind = INF;
int idx;
prefix.pb(0);
rep(i,n)
{
int t;
cin>>t;
i==0? prefix.pb(t) : prefix.pb(t+prefix[i]);
if(i>= (k-1))
{
    int m = prefix[i+1] - prefix[i-((k-1))];
    if(m < mind)
       {
        mind = m;
        idx = i+1-(k-1) ;
       }
}
}
cout<<idx<<endl;
	return 0;
}
