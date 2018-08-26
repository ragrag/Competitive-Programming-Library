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

int n,k;
vector <int> ar;
map <pair<int,int> , bool> mpp;
    int tab[100001][101];

bool dp(int idx,int psum)
{
    if (idx==n){
        if(psum == 0 )
            return true;
        return false;
    }
if (tab[idx][psum]!=-1)
    return tab[idx][psum];

    bool c1 = dp(idx+1,(psum+ar[idx])%k);
    bool c2 = dp(idx+1,(psum-ar[idx])%k);

    return tab[idx][psum] = c1 | c2;

}

int main() {
    fast;
    //freopen ("out.h","w",stdout);
   // freopen ("in.h","rw",stdin);
int t;
cin>>t;
while(t--)
{
memset(tab,-1,sizeof(tab));
mpp.clear();
ar.clear();
cin>>n>>k;
rep(i,n)
{
    int x;
    cin>>x;

    ar.pb(x);
}
dp(1,(ar[0])%k) ? cout<<"Divisible" : cout<<"Not divisible";
nl;
}
    return 0;
}
