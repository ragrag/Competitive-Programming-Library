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
char ar[26][26];
int dr[] = {1,1,0,-1,-1,-1, 0, 1};
int dc[] = {0,1,1, 1, 0,-1,-1,-1}; // S,SE,E,NE,N,NW,W,SW neighbors



void floodfill(int r, int c, char c1) {
if (r < 0 || r >= n || c < 0 || c >= n) return;
if (ar[r][c] != c1) return;
ar[r][c] = '#';
for (int d = 0; d < 8; d++)
	floodfill(r + dr[d], c + dc[d], c1);
}





int main()
{
        fast;
int casee=0;
while (cin>>k)
{


int sum=0;

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
            if(ar[j][h] == '1')
            {


            floodfill(j,h,'1');
            sum++;
            }
        }
    }

cout <<"Image number " <<++casee<<" contains "<<sum<<" war eagles."<<endl;

}

return 0;
}



