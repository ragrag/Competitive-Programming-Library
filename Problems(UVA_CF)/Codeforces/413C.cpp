#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <math.h>
#include <set>
#include <iomanip>
#include <queue>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
using namespace std;
typedef long long ll;
typedef vector <int> vi;
int main()
{
fast;
int n,m;
vi ar;
vi auc;
vi indauc;
cin>>n>>m;
for (int i=0;i<n;i++)
{
int t;
cin>>t;
ar.push_back(t);
}
for(int i=0;i<m;i++)
{
    int x;
    cin>>x;
    int z = ar[x-1];
    auc.push_back(z);
    ar[x-1]=0;
}
if (auc.size() > 0)
sort(auc.rbegin(),auc.rend());
ll tot=0;
for(int i=0;i<ar.size();i++)
{
    tot+=ar[i];
}
for(int i=0;i<m;i++)
{
    if(auc[i] < tot )
    {
        tot+=tot;
    }
    else tot+=auc[i];
}
cout<<tot<<endl;
	return 0;
}
