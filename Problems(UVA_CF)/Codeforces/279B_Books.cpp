#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 1e5 + 5;
typedef long long ll;
int main()
{

ll n,t;
cin >>n>>t;
int res = 0, x = 0;

int time[N];
for (int i=0;i<n;i++)
{
    int temp;
    cin>>temp;
    time[i]=temp;
}

int ps[N];
for(int i=0;i<n;i++)
    ps[i] = i==0? time[i] : ps[i-1]+time[i];


    for(int i = 0; i < n; i++)
    {
        if(time[i] <= t)
            x = upper_bound(ps+i, ps+n, ps[i] + t - time[i] ) - (ps+i);
        res= max(res, x);
    }



    cout<<res<<"\n";
    return 0;\

}