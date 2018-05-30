#include <iostream>
using namespace std;
int main()
{
	int x;
	char ar[200000];
	int acounter=0;
	int fcounter=0;
	int icounter=0;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		cin >> ar[i];
	}
	
	for (int i = 0; i < x; i++)
	{
		if (ar[i] == 'A')
			acounter++;
		else if (ar[i] == 'F')
			fcounter++;
		else icounter++;
	}
	if (icounter == 0)
	{
		if (acounter>0)
		cout << acounter << endl;
		else cout << 0 << endl;
	}
	else if (icounter > 0)
	{
		if ((acounter>0 || fcounter>0) && icounter <=1)
		cout << icounter << endl;
		else cout << 0 << endl;
	}
	return 0;
}
