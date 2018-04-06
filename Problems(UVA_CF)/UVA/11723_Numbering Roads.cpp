#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define mp make_pair
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;


int main()
{
    
int casee=0;
while(1)
{

float r;
float n;
cin>>r>>n;
if(r==0 && n ==0)
    break;
float s = r/n;

if(  ceil(s) -1  > 26)
{
    cout<<"Case "<<++casee<<": "<<"impossible"<<endl;
    continue;

}
 cout << "Case "<<++casee<<": "<<ceil(s) -1<<endl;
}
	return 0;
}
