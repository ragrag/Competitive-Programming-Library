#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <set>
using namespace std;
typedef long long ll;
typedef vector <int> vi;
int main()
{
int n;
char ar[7] = { 'R', 'O', 'Y','G','B','I','V'};
cin >>n;
int x =(n/7);
vector <char > ans;
for(int i=0;i<(x*7);i++)
{
ans.push_back(ar[i%7]);
}
int t=n-(x*7);
string ss[6] = {"G","GB","YGB","YGBI","OYGBI","OYGBIV"};
if(t!=0)
{
for(int i=0;i<ss[t-1].size();i++)
{
ans.push_back(ss[t-1][i]);
}
}
for (auto f:ans)
{
    cout<<f;
}
    cout<<endl;
    return 0;
}
