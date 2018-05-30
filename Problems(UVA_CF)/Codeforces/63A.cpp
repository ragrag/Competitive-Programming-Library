#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
int main()
{
	
	int n;
	vector <string> all;
	vector <string> cw;
	vector <string> man;
	vector <string> rat;
	string captain;
	cin >> n;
	for (int k = 0; k <= n; k++)
	{
		string x;
		getline(cin, x);
		all.push_back(x);
	}
	for (int k = 0; k < all.size(); k++)
	{
		if (all[k][all[k].find(' ') + 1] == 'r')
		{
			rat.push_back(all[k].substr(0, all[k].find(' ')));
		}
		else if (all[k][all[k].find(' ') + 1] == 'w' || all[k][all[k].find(' ') + 2] == 'h')
		{
			cw.push_back(all[k].substr(0, all[k].find(' ')));
		}
		else if (all[k][all[k].find(' ') + 1] == 'm')
		{
			man.push_back(all[k].substr(0, all[k].find(' ')));
		}
		else 
			captain = all[k].substr(0, all[k].find(' '));
	}
	for (int i = 0; i <rat.size(); i++)
	{
		cout << rat[i] << endl;
	}
	for (int i = 0; i < cw.size(); i++)
	{
		cout << cw[i] << endl;
	}
	for (int i = 0; i < man.size(); i++)
	{
		cout << man[i] << endl;
	}
	cout << captain << endl;
	return 0;
}
