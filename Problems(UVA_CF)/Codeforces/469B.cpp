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
vector <pair< int,int> > allowed;
bool vis[10001];
int main()
{
fast;
int z,x,l,r;
cin>>z>>x>>l>>r;
int t1,t2;
rep(i,z)
{
    cin>>t1>>t2;
    allowed.pb(mp(t1,t2));
}
int c=0;
rep(i,x)
{
    cin>>t1>>t2;
    for(int i=l;i<=r;i++)
    {
        if(!vis[i])
        {
            for (auto v : allowed)
            {
                for(int k=t1;k<=t2;k++)
                {
                     if((k+i>=v.first && k+i<=v.second ) )
                {
                    c++;
                    vis[i]= 1;
                   goto endd;
                }
                }
            }
        }
         endd : int y;
    }
}
cout<<c<<endl;
	return 0;
}
