#include <iostream>
using namespace std;
int main()
{
	char ar[1000][1000];
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
		
		for (int j = 0; j < n; j++)
		{
			if (j % 2 != 0)
				ar[i][j] = '.';
			else{
				ar[i][j] = 'C';
				count++;
			}
		}
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (ar[i-1][j] == 'C')
				{
					ar[i][j] = '.';
				}
				else{
					ar[i][j] = 'C';
					count++;
				}
			}
		}
	}
	cout << count << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << ar[i][j];
		cout << endl;
	}
	return 0;
}
