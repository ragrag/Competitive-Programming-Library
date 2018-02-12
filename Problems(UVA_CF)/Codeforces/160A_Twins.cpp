#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void main()
{
	int n;
	int coincount = 0;
	double tempsum = 0;
	double total=0;

	vector <int> v;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	
	for (int i = 0; i < v.size(); i++)
	{
		total += v[i];
	}


	total = total / 2;
	

	
		for (int i = 0; i <v.size(); i++)
		{
			if (tempsum <= total)
			{
			tempsum += v[i];
			
			coincount++;
			}
		}
		
	


	cout << coincount << endl;

}