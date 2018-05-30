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
ll t[50007];
ll c[50007];
ll tab[50007][4];
map <string,int> m;
    int main()
    {
    fast;
    //freopen ("out.h","w",stdout);
     memset(tab,0x3f3f3f3f,sizeof tab );
     int n;cin>>n;
      rep (i,n){
    cin >>t[i];
    }
    rep (i,n){
    cin >>c[i];
    }
    rep(i,n)
    {
        tab[i][0]=c[i];
        rep(j,i){
            if (t[j]<t[i]){
            tab[i][1]=min(tab[j][0]+c[i],tab[i][1]);
            tab[i][2]=min(tab[j][1]+c[i],tab[i][2]);
            }
        }
    }
    ll ans=INF;
    rep(i,n){
        ans=min(ans,tab[i][2]);
    }
    if (ans <INF){
    cout <<ans<<endl;
    }
    else cout <<-1<<endl;
	return 0;
    }
