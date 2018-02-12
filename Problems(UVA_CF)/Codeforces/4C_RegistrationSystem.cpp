#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n;
	vector < pair <string, int>> names;
	cin >> n;
	bool first = false;
	for (int i = 0; i < n; i++)
	{
		bool found = false;
		
		string x;
		cin >> x;
		pair <string, int> temp;

		temp.first = x;
		if (first == false)
		{
			names.push_back(temp);
			first = true;
		}

		else if (first == true)
		{

			for (int i = 0; i < names.size(); i++)
			{
				if (x == names[i].first)
				{
					names[i].second++;
					x = x + to_string(names[i].second);
					found = true;
					break;
				}

			}
		}
		if (found == true)
		{
			cout << x << endl;
			temp.first = x;
			
			names.push_back(temp);
		}
		else if (found == false)
		{
			cout << "OK" << endl;
			temp.first = x;;
			names.push_back(temp);
		}

	}




return 0;
}