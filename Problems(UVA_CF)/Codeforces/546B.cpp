#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int counter = 0;
	int ar[3000];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		re:
		for (int j = 0; j < n; j++)
		{
		
		if (ar[i] == ar[j] && i != j)
		{
			counter++;
			ar[i]++;
			goto re;
		}
		}
	}
	cout << counter << endl;
	return 0;
}
