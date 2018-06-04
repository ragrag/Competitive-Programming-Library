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
int n; vector <pair <int,int> > vec;
int tab[(int)10e5][2];
int calc (int idx, int dir)
{
    if (idx==n-1)
        return 1;
 int &ans = tab[idx][dir];
 if(ans!=-1)
    return ans;
 ans = -3;
ans = max(ans, calc(idx+1,0));
if( (idx == n-1) || (vec[idx].first+ vec[idx].second <  vec[idx+1].first )  ) //right
{
        ans = max(ans, 1 + calc(idx+1,1));
}
if (dir == 1)
{
    if(   vec[idx].first - vec[idx].second  >  vec[idx-1].first + vec[idx-1].second  ) //left
    {
        ans = max(ans, 1 + calc(idx+1,0));
    }
}
else if( idx==0 || vec[idx].first - vec[idx].second  >  vec[idx-1].first   )
{
        ans = max(ans, 1 + calc(idx+1,0));
}
return ans;
}
int main()
{
    fast;
    memset(tab,-1,sizeof(tab));
cin>>n;
rep(i,n)
{
    int x,h;
    cin>>x>>h;
    vec.pb(mp(x,h));
}
cout<<calc(0,3);
    return 0;
}
