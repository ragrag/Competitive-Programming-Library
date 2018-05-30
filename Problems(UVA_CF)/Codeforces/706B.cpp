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
   int ns ;
   int q;
   vector <int> shop;
   cin >>ns;
   for(int i=0;i<ns;i++)
   {
       int temp;
       cin>>temp;
       shop.push_back(temp);
   }
   cin >> q;
   vector <int> b;
   for (int i=0;i<q;i++)
   {
       int temp;
       cin>>temp;
       b.push_back(temp);
   }
   sort(shop.begin(),shop.end());
   vector <int> res;
   for (int i=0;i<q;i++)
   {
       res.push_back(upper_bound(shop.begin(),shop.end(),b[i] ) - shop.begin());
   }
   for (auto i:res)
   {
       cout << i <<endl;
   }
	return 0;
}
