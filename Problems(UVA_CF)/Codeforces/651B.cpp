#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <math.h>
#include <set>
#include <queue>
#define INF 1000000000
using namespace std;
typedef long long ll;
typedef vector <int> vi;
vi visited;
vi dist;
int main()
{
   int n;
   cin>>n;
   int ma=0;
int ar[1002] = {0};
 for (int i=0;i<n;i++)
 {
     int temp;
     cin>>temp;
     ar[temp]++;
 }
 for (int i=0;i<1002;i++)
{
  ma = max(ma,ar[i]);
}
   cout<<n-ma<<endl;
	return 0;
}
