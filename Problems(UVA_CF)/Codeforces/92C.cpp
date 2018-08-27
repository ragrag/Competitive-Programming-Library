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
string s1,s2;
int main() {
    fast;
    //freopen ("out.h","w",stdout);
   // freopen ("in.h","rw",stdin);
cin>>s1>>s2;
map <char,vector<int>> _map;
for(int i=0;i<(int) s1.size();i++)
{
_map[s1[i]].pb(i);
}
for(auto v:s2)
{
    if((int) _map[v].size() ==0)
    {
        cout<<-1<<endl;
        return 0;
    }
}
int res=1,prev=0;
for(int i=0;i< (int)s2.size();i++)
{
auto idx = lower_bound(_map[s2[i]].begin(),_map[s2[i]].end(),prev);
if(idx!=_map[s2[i]].end())
{
    prev = *idx+1;
}
else {
    prev = *lower_bound(_map[s2[i]].begin(),_map[s2[i]].end(),0)+1;
    res++;
}
}
cout<<res<<endl;
    return 0;


}
