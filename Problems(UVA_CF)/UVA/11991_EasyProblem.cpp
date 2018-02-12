#include <iostream>
#include <vector>

using namespace std;

typedef vector <int> vi;
typedef pair<int, int> ii;
typedef vector <ii> vii;




int main()
{
	int s;
	int q;
	cin >> s >> q;
	int oc, n;
	int x;
	vector <vii> ar;
	ar.assign(10, vii());
	for (int i = 0; i < s; i++)
	{
		cin >> x;
		ar[x - 1].push_back(make_pair(ar[x - 1].size() + 1, i + 1));
	}

	for (int i = 0; i < q; i++)
	{
		cin >> oc >> n;
		if (ar[n - 1].size() < oc)
			cout << 0 << endl;
		else	
			cout << ar[n - 1][oc - 1].second << endl;
	}
	return 0;
}