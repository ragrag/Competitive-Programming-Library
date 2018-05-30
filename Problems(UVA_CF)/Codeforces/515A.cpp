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
    int main()
    {
    fast;
    //freopen ("out.h","w",stdout);
ll k,n,m;
cin>>k>>n>>m;
ll steps = abs(k)+abs(n);
if(m<steps)
{
    cout<<"NO\n";
    return 0;
}
if(steps %2 == 0 || steps == 0 )
{
    if(m%2==0)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
else if(steps%2 != 0)
{
    if(m%2!=0)
        cout<<"YES\n";
   else cout<<"NO\n";
    return 0;
}
            return 0;
    }
