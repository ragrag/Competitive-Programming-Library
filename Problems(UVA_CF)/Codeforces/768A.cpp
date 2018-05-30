#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
int main()
{
	vector <long long> n;
	long long ns;
	cin >> ns;
	for (long long i = 0; i < ns; i++)
	{
		long long x;
		cin >> x;
		n.push_back(x);
	}
	long long count = 0;
	sort(n.begin(), n.end());
	for (long long i = 0; i < ns; i++)
	{
		if (n[i]>n[0] && n[i]<n[ns-1])
			count++;
		
	}
	cout << count << endl;
	return 0;
}
