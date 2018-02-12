#include <iostream>
using namespace std;

int main()
{
	int n;
	int h;
	int w=0;

	int ar[9999];

	cin >> n >> h;

	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (ar[i] <= h)
			w += 1;
		else w += 2;
	}

	cout << w << endl;
	return 0;
}