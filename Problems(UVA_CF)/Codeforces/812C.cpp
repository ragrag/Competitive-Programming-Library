#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
using namespace std;
typedef long long ll;
typedef vector <int> vi;
ll MAX_SIZE = 10000001;
int main()
{
fast;
int n;
ll k;
cin>>n>>k;
vector <ll> m;
for (int i=0;i<n;i++)
{
    ll t;
    cin>>t;
    m.pb(t);
}
int l=1;
int r=n;
ll ans=0;
ll cost=0;
while(l<=r)
{
    vector <ll> mm=m;
    ll sum=0;
    int mid= l + (r-l+1)/2;
    for(int i=0;i<n;i++)
    {
        mm[i] = mm[i] + (ll) ((i+1)*mid );
    }
    sort(mm.begin(),mm.end());
    for(int i=0;i<mid;i++)
    {
        sum+=mm[i];
    }
    if (sum<=k &&sum>0)
    {
        ans=mid;
        cost=sum;
        l=mid+1;
    }
    else 
    {
        r=mid-1;
    }
}
cout<<ans<<" "<<cost<<endl;
return 0;
}
