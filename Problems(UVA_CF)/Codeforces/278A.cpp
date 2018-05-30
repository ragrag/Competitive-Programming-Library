#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *ar = new int[n + 1];
	for (int i = 1; i <= n; i++)
	{
		cin >> ar[i];
	}
	int from, to;
	cin >> from >> to;
	int a = min(from, to);
	int b = max(from, to);
	int x = 0, y = 0;
	for (int i = 1; i <= n; i++) 
	{
		if (i >= a && i < b) 
		{ 
			x += ar[i];
		}
		else 
		{
			y += ar[i]; 
		}
	}
	cout << min(x, y) << endl;
	return 0;
}
