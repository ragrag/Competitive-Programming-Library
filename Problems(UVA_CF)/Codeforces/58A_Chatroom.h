#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


bool removeext(string x);

int main()
{
	
	string x;

	cin >> x;
	
	if (removeext(x) == true)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}

bool removeext(string x)
{
	
	int lcount=0;
	int ecount=0;
	int ocount=0;
	int indexe=0;
	int indexl=0;
	int hcount = 0;
	int indexh;
	
	
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] != ('h') && x[i] != ('e') && x[i] != ('l')&& x[i] != ('o'))
		{
			
			x.erase(i, 1);

			i--;
		}

	}


	for (int i =0; i < x.length(); i++)
	{
		lcount = 0;
		ecount = 0;
		hcount = 0;
		ocount = 0;
		
		for (int h = 0; h < x.length(); h++)
		{
			if (x[h] == 'h')
			{
				hcount++;
				indexh = h;
				break;
			}
		}
		
		if (hcount >0)
		{

			for (int j = indexh; j < x.length(); j++)
			{
				if (x[j] == 'e')
				{
				
					ecount++;
				indexe = j;
				break;
				}

			}
		}
			if (ecount >0)
			{
				for (int k = indexe; k < x.length(); k++)
				{

					if (x[k] == 'l')
					{
					
						lcount++;
					indexl = k;
					}
					if (lcount == 2)
						break;
				}
			}

			if (lcount >= 2)
			{
				for (int n = indexl; n < x.length(); n++)
				{
					if (x[n] == 'o'){
						ocount++;
						goto flag;

					}

				}

			}

		
	}

	flag: 
	if (ocount > 0)
	{
		return true;

	}
	else return false;

}