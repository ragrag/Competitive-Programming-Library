#include <iostream>
using namespace std;
int main()
{
	int n, dex;
	int ar[100];
	int r, l = 0;
	int counter = 0;
	cin >> n>> dex;
	dex--;
	l = dex;
	r = dex;
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	while (true)
	{
		l--;
		r++;
		
		if (l<0 || r==n)
			goto flag;
		else {
			
			if (ar[l] != ar[r])
			{
				ar[l] = 0;
				ar[r] = 0;
			}
		}
	}
	flag:
	for (int i = 0; i < n; i++)
	{
		if (ar[i] == 1)
			counter++;
	}
	cout << counter << endl;
	return 0;
}
