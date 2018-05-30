#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector <vi> vii;
int main()
{
	int n;
	bool ar[1234567] = { false };
	int c1 = 0, c2 = 0;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		char c;
		int d;
		cin >> c >> d;
		if (c == '+')
		{
			c1++;
			c2 = max(c1, c2);
			ar[d] = true;
		}
		else if (c == '-')
		{
			if (ar[d] == true)
				c1--;
			else if (ar[d] == false)
			{
				c2++;
				
			}
			ar[d] = false;
		}
	}
	
	cout << c2 << endl;
	return 0;
}
