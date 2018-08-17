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


vector <ll> pw;

int main() {
    fast;

for(int i=1;i<32;i++)
{
    pw.pb(pow(2,i));
}

int n;
cin>>n;
vi vec(n);
unordered_map <int,vector <int>> mp;
rep(i,n)
{
    cin>>vec[i];
    mp[vec[i]].pb(i);
}
ll ways=0;
rep(i,n)
{
    for(auto v:pw)
    {
        if(mp[v-vec[i]].size()>0 && mp[v-vec[i]].back() >i)
            ways+= mp[v-vec[i]].size() - (upper_bound(mp[v-vec[i]].begin(),mp[v-vec[i]].end(),i )-mp[v-vec[i]].begin());
    }
}
cout<<ways<<endl;
    return 0;
}
