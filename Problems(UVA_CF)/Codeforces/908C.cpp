#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
int main()
{
    double n,r;
    double arx[1001];
    double ary[1001];
    cin>>n>>r;
    for(int i=0;i<n;i++)
        {
        cin>>arx[i];
    }
    for(int i=0;i<n;i++)
    {
        ary[i]=r;
        for(int j=0;j<i;j++)
        {
        if(((arx[i]-arx[j])*(arx[i]-arx[j]))<=4*(r*r))
        {
                ary[i]=max(ary[i],ary[j]+sqrt(4*r*r-((arx[i]-arx[j])*(arx[i]-arx[j]))));
            }
        }
        //cout.setprecision()
        cout<<fixed<<setprecision(10)<<ary[i]<<" ";
    }
    cout<<endl;
    return 0;
}
