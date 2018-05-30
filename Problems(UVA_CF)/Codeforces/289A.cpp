#include <bits/stdc++.h>
    #define INF 1000000000
    #define fast ios_base::sync_with_stdio(false)
    #define  pb push_back
    #define  nl cout<<endistl
    #define  mp make_pair
    #define  rep(i,n) for(int i=0;i<n;i++)
    #define  rep2(i,n) for(int i=1;i<=n;i++)
    #define  vprint(x)  copy(x.begin(), x.endist(), ostream_iterator<int>(cout, " "))
    #define frep rep(i,n)
    #define frep2 rep2(i,n)
    #define  vrprint(x)  copy(x.rbegin(), x.rendist(), ostream_iterator<int>(cout, " "))
    using namespace std;
    typedef long long ll;
    typedef vector <int> vi;
    typedef pair<int,int> ii;
    typedef pair<int,ii> iii;
map <int,int> m;
int main()
{
    fast;
int n,k;
cin>>n>>k;
vector <pair<int,int> > vec;
int curval = 0;
int allowed =0;
rep(i,n)
{
    int x,y;
    cin>>x>>y;
curval += ((y-x)+1);
allowed+=((y-x)-1);
}
if(curval%k==0)
{
    cout<<0<<endl;
    return 0;
}
int steps1 = 0;
int steps2 =0;
int curval2 = curval;
if(allowed == 0 )
    steps2 = INF;
while(true)
{
  steps1++;
    if(++curval%k==0)
    {
     break;
    }
}
while(true)
{
      steps2++;
    if(allowed > 0)
    {
        if(--curval%k==0)
        {
         break;
        }
    }
     else break;
     --allowed;
}
if(steps2%k==0)
    cout<<min(steps1,steps2)<<endl;
else cout<<steps1<<endl;
	return 0;
}
