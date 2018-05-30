#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>
#include <set>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
map <char, int> mapone;
map<char, int> maptwo;
map <char, int> mapp;
vector <pair<int, int> > vec;
int n, m;
char ar[1000][1000];
int dy[] = {0,0,1,-1};
int dx[] = {1,-1,0,0};
bool valid(int r, int c)
{
	return (r < n && r >= 0 && c < m && c >= 0);
}
int main()
{
	fast;
	char c;
	cin >> n >> m >> c;
	rep(i, n)
	{
		rep(j, m)
		{
			cin >> ar[i][j];
			if (ar[i][j] == c)
			{
				vec.pb(make_pair(i, j));
			}
		}
	}
	int cc=0;
	rep(i,vec.size())
	{
		rep(j, 4)
		{
			int y2 = vec[i].first + dy[j];
			int x2 = vec[i].second + dx[j];
		
			if (valid(y2, x2) &&  ar[y2][x2] != '.' && ar[y2][x2] != c && ++mapp[ar[y2][x2]] ==1 )
				cc++;
		}
		}
	cout << cc << endl;
		return 0;
}
