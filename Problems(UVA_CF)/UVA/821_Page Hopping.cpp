#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define mp make_pairs
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int, int> ii;

int adj[400][400];
int p[400][400];

void printPath(int i, int j) {
	if (i != j) printPath(i, p[i][j]);
	cout << j << " ";
}

int fact(int n)
{
	if (n <= 1)
		return 1;
	return n*fact(n - 1);
}

int nPr(int n, int r)
{
	return fact(n) / fact(n - r);
}

int main()
{

	vector <string> anss;
	int cas = 0;

	while (true)
	{

		int ar[100] = { 0 };

		for (int i = 1; i <= 110; i++) {
			for (int j = 1; j <= 110; j++)
			{
				adj[i][j] = INF;
				p[i][j] = i;
			}
			adj[i][i] = 0;
		}

		int from, to;
		cin >> from >> to;
		if (from == 0 && to == 0)
			break;
		while (1)
		{


			adj[from][to] = 1;
			ar[from] = 1;
			ar[to] = 1;

			cin >> from >> to;
			if (from == 0 && to == 0)
			{
				break;
			}
		}

		for (int k = 1; k <= 110; k++) //k->i->j
			for (int i = 1; i <= 110; i++)
				for (int j = 1; j <= 110; j++)
					if (adj[i][k] + adj[k][j] < adj[i][j]) {
						adj[i][j] = adj[i][k] + adj[k][j];
						p[i][j] = p[k][j];
					}




		long double c = 0;
		long double cc = 0;
		for (int i = 1;i <= 105;i++)

		{
			for (int j = 1;j <= 105;j++)
			{
				if (i == j)
					continue;
				if (i != j && adj[i][j] != INF)
				{
					c += adj[i][j];
					cc++;
				}

			}
		}
	
		float ans = c / cc;
		cout.precision(3);

		cout << fixed << "Case " << ++cas << ": average length between pages = " << ans << " clicks" << endl;
	}

	return 0;
}


