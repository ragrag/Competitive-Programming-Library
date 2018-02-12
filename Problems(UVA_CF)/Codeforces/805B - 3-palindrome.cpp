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
		ios_base::sync_with_stdio(false);
		long long n;
		cin >> n;

		string s(n, '0');
		s[0] = 'a';
		s[1] = 'a';

		for (int i = 2; i<n; i++)
		{
			if (s[i - 2] == 'a') 
				s[i]= 'b';
			else s[i] =  'a';
		}

		if (n == 1)
		{
			cout << "a" << endl;
			goto end;
		}

		cout << s << endl;

	end: int z;
		return 0;
	}