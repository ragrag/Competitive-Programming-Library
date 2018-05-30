#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
using namespace std;
typedef long long ll;
typedef vector <int> vi;
ll MAX_SIZE = 10000001;
int main()
{
    fast;
ll n;
int k;
cin>>n>>k;
int l=1, r=n;
int ans=0;
while(l<=r)
{
    int mid = (l+r)/2;
    int temp=mid;
    int sum=0;
    while(temp)
    {
        sum+=temp;
        temp/=k;
    }
    if (sum< n )
        l = mid+1;
    else
    {
        ans=mid;
        r=mid-1;
    }
}
cout<<ans<<endl;
	return 0;
}
