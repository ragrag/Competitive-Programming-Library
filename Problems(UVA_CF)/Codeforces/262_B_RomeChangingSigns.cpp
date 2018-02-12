#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()

{

	int n, c=0;
	int sum = 0;
	int min = 0;
	cin >> n>> c;
	
	vector <int> list;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x; 
		list.push_back(x);
	}

	

	for (int i =0; i <list.size(); i++)
	{
		if (c <= 0)
			break;
		if (list[i] < 0)
		{

			list[i] *= -1;
			c--;
		}
		
	}
	int idx =

		distance(list.begin(), min_element(list.begin(), list.end()));

	
	while (c > 0)
	{

		list[idx] *= -1;
		c--;

	}
	

	for (int i = 0; i < list.size(); i++)
	{
		sum += list[i];
	}

	cout << sum << endl;
	
	return 0;
}