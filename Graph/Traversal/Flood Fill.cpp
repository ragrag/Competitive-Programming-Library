
int n;
char ar[100][100];
int dr[] = {1,1,0,-1,-1,-1, 0, 1};
int dc[] = {0,1,1, 1, 0,-1,-1,-1}; // S,SE,E,NE,N,NW,W,SW neighbors


int floodfill_Count(int r, int c, char c1) { 
if (r < 0 || r >= R || c < 0 || c >= C) return 0;
if (grid[r][c] != c1) return 0; 
int ans = 1;
grid[r][c] = '#';
for (int d = 0; d < 8; d++)
ans += floodfill_Count(r + dr[d], c + dc[d], c1);
return ans; 
}


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
cin>>n;

int sum=0;
   rep(j,n)
    {
        rep(h,n)
        {
            cin>>ar[j][h];
        }
    }

    rep(j,n)
    {
        rep(h,n)
        {
            if(ar[j][h] == '1')
            {
            floodfill(j,h,'1');
            sum++;
            }
        }
    }
	
	
	int floodcount =0;
	rep(j,n)
    {
        rep(h,n)
        {
            if(ar[j][h] == '1')
            {
           floodcount+= floodfill_Count(j,h,'1');
            }
        }
    }

cout <<sum<<" "<<floodcount;

return 0;
}


