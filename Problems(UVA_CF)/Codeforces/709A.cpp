#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
int main()
{
	int n, b, d;
	int waste = 0;
	int wasteq = 0;
	cin >> n >> b >> d;
	int *ar = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (ar[i] >b)
			continue;
		if (ar[i] <= b)
		{
			
			waste = waste + ar[i];
			if (waste >d)
			{
				waste = 0;
				wasteq++;
			}
		}
			
		
	}
	
	cout << wasteq << endl;
	return 0;
}
