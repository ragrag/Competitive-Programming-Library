#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
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


vector <vector <int>> dist;
vector <vector<int>> bombs;

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int R, C;
bool valid(int x, int y)
{
	return (x < R && x >= 0 && y<C && y >= 0 && bombs[x][y] == 0);
}


int bfs(int x, int y, int x2, int y2) {
	queue<pair<int, int>> q;

	dist[x][y] = 0;

	q.push(mp(x, y));
	while (!q.empty()) {

		pair <int, int> u = q.front();
		q.pop();

		if (u.first == x2 && u.second == y2)
		{

			return dist[u.first][u.second];
		}

		for (int k = 0;k<4;k++)
		{
			x = u.first + dx[k];
			y = u.second + dy[k];



			if (valid(x,y) && dist[x][y] == INF ) {
				dist[x][y] = dist[u.first][u.second] + 1;
				q.push(mp(x, y));
			}
		}

	}
}

int main()
{

	while (true) {

		cin >> R >> C;
		if (R == 0)
			break;



		dist = vector <vector <int> >(1000, vector<int>(1000, INF));
		bombs = vector <vector<int> >(1000, vector<int>(1000));




		int cr;
		cin >> cr;

		rep(i, cr)
		{
			int row;
			cin >> row;
			int nbombs;
			cin >> nbombs;
			rep(j, nbombs)
			{
				int bombc;
				cin >> bombc;
				bombs[row][bombc] = 1;
			}
		}
		int x, y, x1, y1;
		cin >> x >> y >> x1 >> y1;
		cout << bfs(x, y, x1, y1) << endl;

	}	return 0;
}
