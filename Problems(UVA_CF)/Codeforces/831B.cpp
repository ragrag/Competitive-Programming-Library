#include <vector>
	#include <iostream>
	#include <algorithm>
#include <string>
	using namespace std;
	typedef vector<int> vi;
	typedef pair<int, int> ii;
	typedef vector<ii> vii;
	int main()
	{
		string str1;
		string str2;
		string str3;
		
		bool up = false;
		cin >> str1 >> str2;
		cin >> str3;
		
		vector <char> ar;
		for (int i = 0; i < str3.length(); i++)
		{
			if (str3[i] >= 48 && str3[i] <= 57)
			{
				ar.push_back(str3[i]);
					continue;
			}
			if (isupper(str3[i]))
			{
			
				str3[i] = tolower(str3[i]);
				up = true;
			}
			for (int j = 0; j <str1.length(); j++)
			{
				if (str3[i] == str1[j])
				if (up == true)
					ar.push_back(toupper(str2[j]));
				else ar.push_back(str2[j]);
			}
			up = false;
		}
		for (int i = 0;i< str3.length(); i++)
		{
			cout << ar[i];
		}
		cout << endl;
			return 0;
	}
