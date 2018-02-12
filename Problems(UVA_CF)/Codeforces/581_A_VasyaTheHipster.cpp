#include <iostream>
using namespace std;

int main()
{
	int r, b, c, days;

	cin >> r >> b;

	if (r == b)
	{
	
		days = 0;
		cout << r << " " << days << endl;
	}

	if (r > b)
	{
		c = (r - b) / 2;
		cout << b << " " << c << endl;
	}

	if (r < b)
	{
		c = (b - r) / 2;
		cout << r << " " << c << endl;
	}

	return 0;
}