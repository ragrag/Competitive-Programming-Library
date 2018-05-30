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
	int n;
	cin >> n;
	cin >> s;
	
	char *t2 = new char[n];
	
	
	int m = (s.size() - 1) / 2;
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		int temp = i + 1;
		if (n % 2 == 0)
		{
			t2[m - counter] = s[i];
		}
		else
		{
			t2[m + counter] = s[i];
		}
		if (counter >= 0)
		{
			counter = counter - temp;
		}
		else
		{
			counter = counter + temp;
		}
	}
	
	for (int i = 0;i < n;i++)
	{
		cout << t2[i];
}
	cout<<endl;
	return 0;
}
