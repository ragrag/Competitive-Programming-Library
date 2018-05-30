#include <math.h>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <limits>
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

int a, b, c;

pair<int,int> fill(int x, int y, int cap)
{
	if ((cap - x) > y)
	{
		x += y;
		y = 0;
	}
	else if ((cap - x) <= y)
	{
		y -= (cap - x);
		x += cap - x;
	
	}
	return mp(x, y);
}


int bfs(int x,int y, int c) {
	
	queue<pair <int,pair<int,int> >> q;

	q.push(mp (0, mp(x,y)));
	int countt = 0;
	map <pair<int, int>, int> m;
	while (!q.empty()) {

		pair <int ,pair<int,int>> u = q.front();
		q.pop();
		

		
		if (u.second.first == c || u.second.second == c)
			return u.first;

		if (++m[mp(u.second.first, u.second.second)] > 1)
			continue;
	
	
		u.first++;
			q.push(mp(u.first, mp(0, u.second.second)));
			q.push(mp(u.first, mp(u.second.first, 0)));
			q.push(mp(u.first, mp(a, u.second.second)));
			q.push(mp(u.first, mp(u.second.first, b)));
			q.push(mp (u.first,mp(u.second.first - min(u.second.first, b - u.second.second), u.second.second + min(u.second.first, b - u.second.second))));
			q.push(mp (u.first , mp(u.second.first + min(u.second.second, a - u.second.first), u.second.second - min(u.second.second, a - u.second.first))));
			}
	return -1;
		
	}



int main()
{
	fast;
	int t;
	cin >> t;

	while (t--)
	{
		cin >> a >> b >> c;

		cout << bfs(0, 0, c) << endl;
	}
	return 0;

}
