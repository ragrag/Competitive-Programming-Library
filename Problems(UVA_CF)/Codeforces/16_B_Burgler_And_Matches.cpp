#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

	int matches=0;
	int cap;
	int n;
	int sumbox = 0;
	vector < pair <int,int> > boxes;

	cin >> cap >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		int y;
		cin >> x >> y;
		pair <int, int> t;
		t.first = y;
		t.second = x;
		sumbox += x;
		boxes.push_back(t);

	}


	if (cap > sumbox)
	{

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < boxes[i].second; j++)
			{
				matches += boxes[i].first;
			}
		}

		cout << matches << endl;
		return 0;
	}


	else {

		sort(boxes.begin(), boxes.end());
		reverse(boxes.begin(), boxes.end());
		while (cap > 0)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < boxes[i].second; j++)
				{
					matches += boxes[i].first;
					cap--;
					if (cap == 0)
						goto flag;
				}


			}
		}
	flag: cout << matches << endl;

		return 0;
	}
}