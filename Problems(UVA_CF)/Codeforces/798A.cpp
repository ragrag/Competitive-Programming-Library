#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef vector <int> vi;
typedef pair<int, int> ii;
typedef vector <ii> vii;
int main()
{
	int dif = 0;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length()/2; i++)
	{
		if (s[i] != s[(s.length() - 1) - i])
			dif++;
	}
	if (dif >1)
		cout << "NO" << endl;
	if (dif == 1)
		cout << "YES" << endl;
	if (dif == 0 && s.length() % 2 != 0)
		cout << "YES" << endl;
	else if (dif == 0 && s.length() % 2 == 0)
		cout << "NO" << endl;
	return 0;
}
