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
		long long n,x;
		cin >> n >> x;
		long long *ar = new long long[n];
		for (long long i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		sort(ar, ar + n);
		long long h = 0;
		for (long long i = 0; i < n; i++)
		{
			
			while (ar[i]>0)
			{
				ar[i]--;
				h += x;
			}
			if (x <= 1)
				int y;
			else
				x --;
		}
		cout << h << endl;
		return 0;
	}
