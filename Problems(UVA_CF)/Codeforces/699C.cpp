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
using namespace std;
int n; vi vec;
int tab[124][4];
int calc (int day,int last)
{
    if (day==n)
        return 0;
 int &ret = tab[day][last];
 if(ret!=-1)
     return ret;
     ret = INF;
        ret =  min(ret, 1 + calc(day+1,0));
    if(vec[day] == 1 || vec[day] ==3 )
    {
       if (last != 1)
        {
        ret =  min(ret, calc(day+1,1));
        }
    
    }
     if(vec[day] == 2 || vec[day] == 3)
    {
       if (last != 2){
          ret =  min(ret,  calc(day+1,2));
        }
    }
return ret;
}
int main()
{
    fast;
    memset(tab, -1,sizeof(tab));
cin>>n;
rep(i,n)
{
    int t;cin>>t;
    vec.pb(t);
}
cout <<calc(0,3)<<endl;
    return 0;
}
