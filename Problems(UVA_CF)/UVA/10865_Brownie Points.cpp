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
while(true)
{


int n, mx , my , stan =0, ollie =0,center;
cin>>n;
if(n==0)
    break;
center = (n/2 )+1;
vector <pair < int,int> > vec;
vec.pb(mp(0,0));

rep2(i,n)
{
    int x,y;
    cin>>x>>y;
    vec.pb(mp(x,y));
    if (i == center)
    {
        mx = x;
        my = y;
    }
}
rep2(i,n)
{
        if (vec[i].first > mx && vec[i].second > my)
        {
            stan++;
            continue;
        }
        if (vec[i].first < mx && vec[i].second < my )
        {
            stan++;
            continue;
        }
        if (vec[i].first < mx && vec[i].second > my )
        {
            ollie++;
            continue;
        }
        if (vec[i].first > mx && vec[i].second < my )
        {
            ollie++;
            continue;
        }
}
cout<<stan << " "<<ollie<<endl;
}
	return 0;
}
