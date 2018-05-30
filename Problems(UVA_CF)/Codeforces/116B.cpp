#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
typedef long long ll;
using namespace std;
int main(){
	
	int n, m;
	cin >> n >> m;
	char ar[10][10];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> ar[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (ar[i][j] == 'W')
			{
				if (ar[i + 1][j] == 'P' && i + 1 < n)
				{
					ar[i+1][j] = '.';
					count++; continue;
			}
				if (ar[i - 1][j] == 'P' && i - 1 >= 0)
				{	count++;
				ar[i-1][j] = '.';
				continue;
			}
				if (ar[i][j+1] == 'P' && j +1 <m)
				{
					ar[i][j + 1] = '.';
					count++;
				continue;
			}
				if (ar[i][j - 1] == 'P' && j - 1 >= 0)
				{
					ar[i][j - 1] = '.';
					count++;
					continue;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}
