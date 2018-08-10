#include <bits/stdc++.h>
#define INF 1000000
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
int n,s;

int main() {
    fast;
    int n , m, lq , hq;
    cin>>n>>m>>lq>>hq;
    vector <pair<int,int>> clients;
    rep(i,n)
    {
        int l,r;
        cin>>l>>r;
        clients.pb( mp( ((l*lq) + (r*hq ) ),i+1));
    }
    sort(clients.begin(),clients.end());
    int counter = 0;
    vi taken;
    rep(i,n)
    {
        if(m-clients[i].first >= 0)
        {
            taken.pb(clients[i].second);
            counter++;
            m-=clients[i].first;
        }
        else break;
    }
    cout<<counter<<endl;
    rep(i,taken.size())
    {
        cout<<taken[i]<<" ";
    }
    nl;
    return 0;
}
