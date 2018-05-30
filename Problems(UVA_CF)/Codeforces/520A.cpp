#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <math.h>
#include <set>
#include <iomanip>
#include <queue>
#define INF 1000000000
using namespace std;
typedef long long ll;
typedef vector <int> vi;
int main()
{
   int n;
   cin>>n;
   bool ar[200] = {false};
   for (int i=0;i<n;i++)
   {
       char c;
       cin>>c;
        if (isupper(c))
            c=tolower(c);
       ar[c]=true;
   }
   for (int i='a';i<='z';i++){
    if (ar[i]== false)
   {
       cout <<"NO" <<endl;return 0;
   }
   }
   cout<<"YES" <<endl;
	return 0;
}
