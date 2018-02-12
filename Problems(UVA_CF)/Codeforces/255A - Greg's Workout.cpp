#include <vector>
	#include <iostream>
	#include <algorithm>
	using namespace std;

	typedef vector<int> vi;
	typedef pair<int, int> ii;
	typedef vector<ii> vii;


	int main()
	{
		int it = 0;
		int c = 0, bi = 0, ba = 0;
		int n;
		cin >> n;
		int ar[10000];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (it== 1)
			{

				bi += ar[i];
				it++;
				continue;
			}
			 if (it == 2)
			{
				ba += ar[i];
				it = 0;
				continue;
		}
			 if (it == 0)
			 {
				 c += ar[i];
				 it++;
			 }
		}
	
		
	

		if (c>bi && c>ba)
			cout << "chest" << endl;
		if (bi>c && bi>ba)
			cout << "biceps" << endl;
		if (ba>c && ba>bi)
			cout << "back" << endl;
	
		return 0;
	}