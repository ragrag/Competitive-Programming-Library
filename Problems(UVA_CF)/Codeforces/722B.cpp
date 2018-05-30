#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
typedef long long ll;
using namespace std;
int main(){
	cin.tie(0);
	int n;
	cin >> n;
	int vcount =0;
	vector <pair<int, int> > ind;
	vector <string> line;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		ind.push_back({ i, t });
	}
	string dummy;
	getline(cin, dummy);
	for (int i = 0; i < n; i++)
	{
		string s;
		
		getline(cin, s);
		line.push_back(s);
	}
	for (int i = 0; i < n; i++)
	{
		vcount = 0;
		for (int j = 0; j < line[i].length(); j++)
		{
			if (line[i][j] == 'a' || line[i][j] == 'e' || line[i][j] == 'i' || line[i][j] == 'o' || line[i][j] == 'y' || line[i][j] == 'u')
			{
				vcount++;
			}
		}
		if (vcount != ind[i].second)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES";
	cout << endl;
	return 0;
}
