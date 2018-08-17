#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
int main() {
fast;
int n,d;
ll ways(0);
cin>>n>>d;
vi vec;
rep(i,n)
{
    int x;
    cin>>x;
    vec.pb(x);
}
rep(i,n-2)
{
    int idx =(upper_bound(vec.begin()+i+1,vec.end(),(vec[i] +d)) - vec.begin())-1;
    ways+= (ll) ((idx-i)-1)*(idx-i)/2;
}
cout<<ways;
   return 0;
}
