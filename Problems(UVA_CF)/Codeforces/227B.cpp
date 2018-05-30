#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
typedef long long ll;
using namespace std;
int main()
{
map <int,int> ar;
int n;
cin>>n;
for (int i=0;i<n;i++)
{
    int x;
    cin>>x;
	ar[x]= i;
}
vector <int> res; 
int q;
cin>>q;
for(int i=0;i<q;i++)
{
    int temp;
    cin>>temp;
res.push_back(ar[temp]);
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
