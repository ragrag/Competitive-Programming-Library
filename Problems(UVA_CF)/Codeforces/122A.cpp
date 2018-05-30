#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool islucky(int);
int main()
{
	int x;
	cin >> x;
	bool isl = false;
	for (int i = 0; i <= x; i++)
	{
		if (islucky(i))
		{
			if (x%i == 0)
				isl = true;
		}
	}
	 
	
			if (isl==true)
	{
		cout << "YES" << endl;
	}
	else cout << "NO" <<  endl;
return 0;
}
bool islucky(int x)
{
	
	bool luck = true;
	string n = to_string(x);
	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] != '4' && n[i] != '7')
			luck = false;
	}
	return luck;
}
