
#include <bits/stdc++.h>
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
int vis[2000][2000];


int dx[4] = { 0, 0, 1, -1};
int dy[4] = { 1, -1, 0, 0};

int R, C,k;

bool valid(int x, int y)
{
	return (x < R && x >= 0 && y<C && y >= 0 );
}

int main()
{
    fast;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

		cin >> R >> C>>k;

		queue<pair<int, int>> q;
		rep(i,k)
		{
		    int x1,x2;
		    cin>>x1>>x2;
          q.push(mp(x1-1,x2-1));
		  vis[x1-1][x2-1] = 1;
		}

   pair <int, int> u;
	while (!q.empty()) {
		u = q.front();
		q.pop();
		for (int k = 0;k<4;k++)
		{
			int x = u.first + dx[k];
			int y = u.second + dy[k];
			if (valid(x,y) && !vis[x][y] ) {
				vis[x][y] = 1;
				q.push(mp(x, y));
			}
		}

	}
		cout<<u.first+1 <<" "<<u.second+1<<endl;
		return 0;
}
