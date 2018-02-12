#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


typedef long long ll;
using namespace std;

int main()
{
vector <pair<int,int> > ar;
ll n;
cin>>n;
for (int i=0;i<n;i++)
{
    int x;
    cin>>x;

    ar.push_back({x,i});
}

sort(ar.begin(),ar.end());

int q;
vector <int> res;
cin>>q;
for(int i=0;i<q;i++)
{
    int temp;
    cin>>temp;
res.push_back(ar[lower_bound(ar.begin(),ar.end(),make_pair(temp,0) )- ar.begin()].second);
}
ll r1=0;
ll r2=0;
for(int i=0;i<res.size();i++)
{
    r1+= (res[i]+1);
    r2+= (n-res[i]);
}
cout<<r1<<" "<<r2<<endl;

    return 0;
}

