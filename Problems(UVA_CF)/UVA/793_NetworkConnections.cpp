#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef vector <int> vi;
typedef pair<int, int> ii;
typedef vector <ii> vii;


class UnionFind {
private:
	vi p, rank, setSize;
	int numSets;
public:
	UnionFind(int N) {
		setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
		p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i;
	}
	int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
	bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
	void unionSet(int i, int j) {
		if (!isSameSet(i, j)) {
			numSets--;
			int x = findSet(i), y = findSet(j);
			// rank is used to keep the tree short
			if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
			else                   {
				p[x] = y; setSize[y] += setSize[x];
				if (rank[x] == rank[y]) rank[y]++;
			}
		}
	}
	int numDisjointSets() { return numSets; }
	int sizeOfSet(int i) { return setSize[findSet(i)]; }
};
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
	
	int suc = 0;
	int unsuc = 0;
	int n;
	char c;
	int n1, n2;
	cin >> n;
	UnionFind u =  UnionFind(n);
	string line;
	while (cin){		
		cin >> c >> n1 >> n2;
		if (c == 'c')
		{
			u.unionSet(n1, n2);
		}
		else if (c == 'q')
		{
			u.isSameSet(n1, n2) ? suc++ : unsuc++;
		}
		
	}
	cout << suc << "," << unsuc << endl;
	}


	return 0;
}