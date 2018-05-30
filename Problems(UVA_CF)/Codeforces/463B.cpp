#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
const int N = 10e5;
using namespace std;
int main()
{
int n;
int ar[100000];
ar[0]=0;
int diff=0;
int maxdif=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>ar[i];
}
for(int i=0;i<=n;i++)
{
  if(i+1<=n)
    diff += ar[i] - ar[i+1];
  if(diff<0)
  {
      maxdif += abs(diff);
      diff=0;
  }
}
cout<<maxdif<<endl;
    return 0;
    }
