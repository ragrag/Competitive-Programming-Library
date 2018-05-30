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
		int n, f;
		cin >> n >> f;
		bool found = true;
		
		string s1;
		cin >> s1;
		vector <pair<char, int>> ar;
		set <char> s;
		for (int i = 0; i < s1.length(); i++)
		{
			s.insert(tolower(s1[i]));
		}
		vector <char> v(s.begin(), s.end());;
		 
		for (int i = 0; i < v.size(); i++)
		{
			ar.push_back(make_pair(v[i], 0));
		}
		for (int i = 0; i < s1.length(); i++)
		{
			for (int j = 0; j < ar.size(); j++)
			{
				if (ar[j].first == s1[i])
				{
					ar[j].second++;
				}
			}
		
		}
		for (int i = 0; i < ar.size(); i++)
		{
			if (ar[i].second > f)
			{
				found = false;
				break;
			}
		}
		found == true ? cout << "YES" << endl : cout << "NO" << endl;
		return 0;
	}
