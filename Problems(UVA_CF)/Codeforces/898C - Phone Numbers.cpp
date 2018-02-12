#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int n;
	map <string, vector<string>> m;
	cin >> n;
	

	for (int i = 0;i < n;i++)
	{
		int x;
		string x1;
		cin >> x1 >> x;
		for (int i = 0;i < x;i++)
		{

			if(m.find(x1) == m.end())
			{ 
				vector <string> l;
				string ll;
				cin >> ll;
				l.push_back(ll);
				m[x1] = l;
			}
			else if (m.find(x1) != m.end())
			{
				string ll;
				cin >> ll;
				m[x1].push_back(ll);
			}
		}

	}

	map<string, vector<string>>::iterator it = m.begin();

	for (it = m.begin();it != m.end();it++)
	{
		flag :
		for (int i = 0;i < (*it).second.size();i++)
		{
			for (int j = 0;j < (*it).second.size();j++)
			{
				
				if (i == j)
					continue;
				if (j > (*it).second.size())
					break;

				string t1 = (*it).second[i];
				string t2 = (*it).second[j];
				int c = t1.size() - t2.size();
				int c1 = t2.size();


				if (c>=0)
				{
					string temp = t1.substr(c, c1);
					if (temp == t2)
					{
						(*it).second.erase((*it).second.begin() + j);
						goto flag;
					}
				}
				
				
			}
		}
		
	}



	cout << m.size() << endl;
	for (it = m.begin();it != m.end();it++)
	{
		
		cout << (*it).first << " " << (*it).second.size();
		for (int i = 0;i < (*it).second.size();i++)
		{
			cout << " "<< (*it).second[i];
			
		}
		cout << endl;
	}

	return 0;
}