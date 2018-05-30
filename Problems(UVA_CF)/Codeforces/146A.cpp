#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector <vi> vii;
int main()
{
	string s;
	pair <int, int> c;
	pair<int, int>f;
	c.first = 0;
	c.second = 0;
	f.first = 0;
	f.second = 0;
	int n;
	cin >> n;
	cin >> s;
	
	
	for (int i = 0;i < n;i++)
	{
		if (i < (n  / 2))
		{
			if (s[i] == '4')
			{
				c.first++;
			}
			if (s[i] == '7')
			{
				c.second++;
			}
		}
		
		else if (i >= (n / 2))
		{
			if (s[i] == '4')
			{
				f.first++;
			}
			if (s[i] == '7')
			{
				f.second++;
			}
		}
		if (s[i] != '4' && s[i] != '7')
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	if (c.first == f.first && c.second == f.second)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
