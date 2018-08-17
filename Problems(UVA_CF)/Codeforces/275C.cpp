#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
map <int,bool> mapp;
int main() {
fast;
int n, k;
vector <int> vec;
cin>>n>>k;
int g=n;
if(n==1){
    cout<<1<<endl;
    return 0;
    }

rep(i,n)
{
    int t;
    cin>>t;
    vec.pb(t);
}
sort(vec.begin(),vec.end());
rep(i,n)
{
    if(mapp[vec[i]])
        continue;
    auto it = lower_bound((vec.begin()+i )+1,vec.end(),(ll)vec[i]*k);
    if(it!=vec.end() && *it == (ll) vec[i]*k)
    {
     g--;
     mapp[*it]=true;
    }
}
cout<<g<<endl;
   return 0;
}
