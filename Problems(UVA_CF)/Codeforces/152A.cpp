#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int count = 0;
	int n, m;
char	ar[2000][2000];
	cin >> n;
	cin >> m;
	bool mark1 = true;
	bool mark2;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> ar[i][j];
		}
	}
	
	for (int i = 0; i < n; ++i)
	
	
	{
		
		for (int j = 0; j < m; ++j)
		{
			mark2 = false;
			for (int l = 0; l < n; ++l)
			{
				if (ar[l][j] > ar[i][j])
				{
					mark2 = true;
				}
			}
			if (!mark2)
			{
				mark1 = false;
			}
		}
		if (!mark1)
			count++;
		mark1 = true;
	}
	cout << count << endl;
	return 0;
	}
