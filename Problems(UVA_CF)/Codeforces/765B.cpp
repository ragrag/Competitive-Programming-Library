#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
typedef long long ll;
using namespace std;
int main(){
	bool ar[150] = { false };
	string s;
	cin >> s;
	if (s[0] != 'a')
	{
		cout << "NO" << endl;return 0;
	}
	for (int i = 0; i < s.length(); i++)
	{
		ar[s[i]] = true;
		
		
		for (int j = s[i]; j >= 97; j--)
		{
			
			
			if (ar[j] == false)
			{
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	
	cout << "YES" << endl;
}
