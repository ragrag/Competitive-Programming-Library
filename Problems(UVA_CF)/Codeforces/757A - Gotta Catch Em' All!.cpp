#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

typedef vector <int> vi;
typedef pair<int, int> ii;
typedef vector <ii> vii;


int main()
{

	int b1 = 0;
	int u = 0;
	int b = 0;
	int a = 0;
	int r = 0;
	int s = 0;
	int l = 0;
	string s1;
	getline(cin, s1);
	int count = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == 'B')
			b1++;
		if (s1[i] == 'u')
			u++;
		if (s1[i] == 'b')
			b++;
		if (s1[i] == 'a')
			a++;
		if (s1[i] == 'r')
			r++;
		if (s1[i] == 's')
			s++;
		if (s1[i] == 'l')
			l++;
	}

	
	cout << (min(b1, min(u / 2, min(l, min(b, min(a / 2, min(s, r)))))))<<endl;
	
	return 0;
}