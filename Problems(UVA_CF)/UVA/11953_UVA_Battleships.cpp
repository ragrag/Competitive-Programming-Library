    #include <bits/stdc++.h>
    #define INF 1000000000
    #define fast ios_base::sync_with_stdio(false)
    #define pb push_back
    #define nl cout<<endl
    #define rep(i, n)	for(int i=0;i<n;i++)
    using namespace std;
    typedef long long ll;
    typedef vector <int> vi;
    ll MAX_SIZE = 10000001;


int k,n,m;
char ar[101][101];
int dr[] = {1,0,-1, 0};
int dc[] = {0,1, 0,-1}; // S,SE,E,NE,N,NW,W,SW neighbors

int floodfill(int r, int c,  char c2) {
if (r < 0 || r >= n || c < 0 || c >= m) return 0;
if (ar[r][c] == c2  ) return 0;

int ans = 1;
ar[r][c] = c2;
for (int d = 0; d < 4; d++)
ans += floodfill(r + dr[d], c + dc[d], c2);
return ans;
}


int main()
{
        fast;
int casee=0;
int t;
cin>>t;

while (t--)
{


int sum=0;

cin>>k;
n = k;
m=k;

   rep(j,n)
    {
        rep(h,m)
        {
            cin>>ar[j][h];
        }
    }



    rep(j,n)
    {
        rep(h,m)
        {
            if(ar[j][h] == 'x' )
            {

            floodfill(j,h,'.');

            sum++;
            }
        }
    }


cout <<"Case " <<++casee<<": "<<sum<<endl;

}

return 0;
}



