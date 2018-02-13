#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
#define mp make_pair
using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > ii;

int n,m;
char ar[500][500];
int dr[] = {1,0,-1, 0};
int dc[] = {0,1, 0,-1}; // S,SE,E,NE,N,NW,W,SW neighbors


int floodfill_Count(int r, int c, char c1) {
if (r < 0 || r >= n ) return 0;
if( c < 0)
    c= m-1;
 if (c >= m)
        c=0;

if (ar[r][c] != c1) return 0;
int ans = 1;
ar[r][c] = '8';
for (int d = 0; d < 4; d++)
ans += floodfill_Count(r + dr[d], c + dc[d], c1);
return ans;
}

int main() {
fast;


while ( cin>>n>>m )
{


   rep(j,n)
    {
        rep(h,m)
        {
            cin>>ar[j][h];
        }
    }

int x,y;
cin >>x>>y;
char q = ar[x][y];

floodfill_Count(x,y,q);
int sum=-900;
    rep(j,n)
    {
        rep(h,m)
        {
           sum = max( floodfill_Count(j,h,q),sum);
        }
    }



 cout<<sum<<endl;
}

return 0;
}
