#include <vector>
	#include <iostream>
	#include <algorithm>
#include <string>
#include <set>
	using namespace std;
	typedef vector<int> vi;
	typedef pair<int, int> ii;
	typedef vector<ii> vii;
	int main()
	{
		long long n;
		long long sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			sum += (i + 1)*(n - i) - i;
		}
		cout << sum << endl;
		return 0;
	}
