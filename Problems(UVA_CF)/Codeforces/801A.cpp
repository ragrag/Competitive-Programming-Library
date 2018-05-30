#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
typedef long long ll;
using namespace std;
int main(){
	int count = 0;
	bool is = false;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'V' && s[i + 1] == 'K' && (i + 1 < s.length()))
		{
			count++;
			s[i] = '#';
			s[i + 1] = '#';
		}
		
	}
	for (int i = 0; i<s.length(); i++){
		if ((s[i] == 'V'&& s[i + 1] == 'V') || (s[i] == 'K' && s[i + 1] == 'K')){
			count++;
			break;
		}
	}
	cout << count << endl;
}
