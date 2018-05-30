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
    vi ar;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    ar.push_back(x);
}
   vector <pair<int,int> > ev;
   vector <pair<int,int> > od;
    for (int i=0;i<n;i++)
    {
        if (ar[i]% 2 == 0 )
            ev.push_back( {ar[i],i+1});
            else od.push_back({ar[i],i+1});
    }
    ev.size() ==1 ? cout<<ev[0].second : cout <<od[0].second
    ;
	return 0;
}
