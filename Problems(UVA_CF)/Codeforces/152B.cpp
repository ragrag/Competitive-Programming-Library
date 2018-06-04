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
map <int,int> vis;
int main()
{
fast;
ll n,m,x,y,k;
cin>>n>>m>>x>>y>>k;
ll steps = 0;
rep(i,k)
{
int x1,y1;
cin>>x1>>y1;
ll l=0, r= 10e9,mid;
while(r-l>1 )
{
mid = l+ ((r-l)/2 );
    if ((mid*x1)+x>n || (mid*x1)+x<=0 || (mid*y1)+y>m || (mid*y1)+y<=0 )
    {
        r=mid;
    }
    else l=mid;
}
steps+=l;
    if(l!=0)
    {
    x+= l*x1;
    y+= l*y1;
    }
}
cout<<steps<<endl;
	return 0;
}
