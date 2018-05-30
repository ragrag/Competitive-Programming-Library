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
map <string,int> m;
    int main()
    {
    fast;
    //freopen ("out.h","w",stdout);
int n;
cin>>n;
{}
rep(i,n)
{
  string s;
  cin>>s;
  m[s]++;
}
vector <string> vec;
if (m["purple"] ==0 )
    vec.pb("Power");
if (m["green"] ==0 )
    vec.pb("Time");
    if (m["blue"] ==0 )
    vec.pb("Space");
    if (m["orange"] ==0 )
    vec.pb("Soul");
    if (m["red"] ==0 )
    vec.pb("Reality");
    if (m["yellow"] ==0 )
    vec.pb("Mind");
    cout<<vec.size()<<endl;
    rep(i,vec.size())
    {
        cout<<vec[i]<<endl;
    }
            return 0;
    }
