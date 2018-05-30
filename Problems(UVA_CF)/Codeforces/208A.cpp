#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string removewub(string x);
int main()
{
	string x;
	cin >> x;
	cout << removewub(x) << endl;
return 0;
}
string removewub(string x)
{
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] == ('W') && x[i + 1] == ('U') && x[i + 2] == ('B'))
		{
			x.insert(i+ 3, " ");
			x.erase(i, 3);
			
			i--;
		}
		
	}
	if (x[0] == ' ')
		x.erase(0, 1);
	return x;
}
