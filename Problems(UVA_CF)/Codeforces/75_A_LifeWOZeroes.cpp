#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int rz(int);



int main()
{
	int x, y, sum1;
	cin >> x;
	cin >> y;
	sum1 = x + y;
	x = rz(x);
	y = rz(y);
	x = rz(x);
	y = rz(y);
	
	sum1 = rz(sum1);
	sum1 = rz(sum1);
	if (x + y == sum1)
	{
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;

return 0;
}

int rz(int x)
{
	string xSTR = to_string(x);

	for (int i = 0; i < xSTR.length(); i++)
	{

		if (xSTR[i] == '0')
		{
			 xSTR.erase(i,1);
		}


	}

	return stoi(xSTR);



}