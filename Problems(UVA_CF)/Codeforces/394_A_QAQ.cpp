#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector <int> vi;
typedef pair<int, int> ii;
typedef vector <ii> vii;




int main()
{
	vii ar;
	
	string s;
	
	cin >> s;
	int a=0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
			a++;
	}
	ar.assign(a, make_pair(0, 0));
	int ac = -1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			ac++;
			ar[ac] = make_pair(0, 0);
			for (int j = i; j < s.size(); j++)
			{
				if (s[j] == 'Q')
				{
					ar[ac].second++;
				}
			}
			for (int j = i; j >= 0; j--)
			{
				if (s[j] == 'Q')
				{
					ar[ac].first++;
				}
			}
		}
	}
	int count=0;
	for (int i = 0; i < ar.size(); i++)
	{
		count += ar[i].first*ar[i].second;
	}
	cout << count << endl;
	return 0;
}