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
const int MAX_CHAR = 26;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;

const int N = 1e6;
int lp[N+1];
vector<int> pr;
vector <int> prefix;
int a,b,k;
bool valid(int mid)
{

    for(int i=a;i<=b-mid+1;i++)
    {

        int start = i-1;
        int end=(i+mid-1 );

        if(prefix[end]-prefix[start] < k)
            return false;
    }

    return true;

}
int main() {
    fast;
    //freopen ("out.h","w",stdout);
    //freopen ("in.h","rw",stdin);

    for (int i=2; i<=N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);

    }
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
        lp[i * pr[j]] = pr[j];
}
prefix.pb(0);
int cc=0;
for(int i=1;i<=N;i++)
{
if(i==pr[cc])
{
    cc++;
    prefix.pb( prefix[i-1] + 1 );
}
else prefix.pb( prefix[i-1]);
}
    cin>>a>>b>>k;
    int l = 1, r = b - a + 1;
    int ans = -1;
    while(l<=r)
    {
        int mid = (l + r) >> 1;
        if(valid(mid))
        {
            r=mid-1;
            ans=mid;
        }
        else
            l=mid+1;
    }
cout<<ans<<endl;
    return 0;
}
