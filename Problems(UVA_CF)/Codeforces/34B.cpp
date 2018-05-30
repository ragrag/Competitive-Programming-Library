#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	int max=0;
	vector <int> tv;
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		tv.push_back(x);
	}
	sort(tv.begin(), tv.end());
	for (int i = 0; i < m; i++)
	{
		if (tv[i] <= 0)
			max += (tv[i] * -1);
		else if (tv[i]>0)
			break;
	}
	cout << max << endl;
return 0;
}
