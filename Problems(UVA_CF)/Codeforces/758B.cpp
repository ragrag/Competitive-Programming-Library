#include <vector>
	#include <iostream>
	#include <algorithm>
#include <string>
#include <set>
	using namespace std;
	typedef vector<int> vi;
	typedef pair<int, int> ii;
	typedef vector<ii> vii;
	int main()
	{
		string x;
		cin >> x;
		int r = 0, b = 0, g = 0, y = 0;
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] == 'R')
			{
				for (int j = i; j < x.length(); j = j + 4)
				{
					if (x[j] == '!')
						r++;
					
				}
				for (int j = i; j >=0; j = j -4)
				{
					if (x[j] == '!')
						r++;
				
				}
				break;
			}
		}
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] == 'G')
			{
				for (int j = i; j < x.length(); j = j + 4)
				{
					if (x[j] == '!')
						g++;
					
				}
				for (int j = i; j >=0; j = j - 4)
				{
					if (x[j] == '!')
						g++;
				}
				break;
			}
		}
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] == 'Y')
			{
				for (int j = i; j < x.length(); j = j + 4)
				{
					if (x[j] == '!')
						y++;
				}
				for (int j = i; j >=0; j = j - 4)
				{
					if (x[j] == '!')
						y++;
				}
				break;
			}
		}
		for (int i = 0; i < x.length(); i++)
		{
			if (x[i] == 'B')
			{
				for (int j = i; j < x.length(); j = j + 4)
				{
					if (x[j] == '!')
						b++;
				}
				for (int j = i; j >=0; j = j - 4)
				{
					if (x[j] == '!')
						b++;
				}
				break;
			}
		}
		cout << r << " " << b << " " << y << " " << g << endl;
		return 0;
	}
