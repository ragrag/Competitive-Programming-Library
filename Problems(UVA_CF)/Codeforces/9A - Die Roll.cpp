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
		int x, y;

		cin >> x >> y;

		vector <int> ar;

		for (int i = 0; i < 6; i++)
		{
			if (i + 1 >= max(x, y))
			{
				ar.push_back(i + 1);
			}
		}

		if (ar.size() == 6)
		{
		
			cout << "1/1" << endl;
			goto end;
		}
		if (ar.size() == 0)
		{

			cout << "0/1" << endl;
			goto end;

		}
		

		if (ar.size() == 5)
			cout << "5/6" << endl;
		if (ar.size() == 3)
		{
			cout << "1/2" << endl;
		}
		if (ar.size() == 4)
		{
			cout << "2/3" << endl;
		}

		if (ar.size() == 1)
		{
			cout << "1/6" << endl;
		}

		if (ar.size() == 2)
		{
			cout << "1/3" << endl;
		}
	end: int ll;

		return 0;
	}