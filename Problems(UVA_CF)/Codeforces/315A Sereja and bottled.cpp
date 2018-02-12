#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
	
	int n;
	int count = 0;
	int bp[99][2];
	

	cin >> n;
	
	for (int i = 0; i < n; i++) 
	{
		cin>>bp[i][0];	
		cin >> bp[i][1];
	}

	for (int i = 0; i < n; i++) 
	{
		bool found = false;
			for (int j = 0; j < n; j++) 
			{
				if (i != j && bp[i][0] == bp[j][1]) 
				{
					found = true;
					break;
				}
			}
			if (!found)
				count++;
		}
	cout << count << endl;
return 0;
	}
