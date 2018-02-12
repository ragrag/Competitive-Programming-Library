#include <iostream>
using namespace std;
#include <string>
int main()
{
	bool meet = false;
	bool pass = false;
	int n, m;
	cin >> n >> m;
	string ar[100];
	char Old='z';
	
	int New;

	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
		
	}

	for (int i = 0; i < n; i++)
	{
		
		
		Old = 'z';
		
		for (int j = 0; j < m; j++)
		{
			if (Old == 'z')
				Old = ar[i][j];
			if (i == n - 1)
			{
				if (ar[i][j] == Old)
					pass = true;
				else {
					pass = false;
					goto flag;
				}
			}
			
			else
			{
				if (ar[i][j] == Old && ar[i][j] != ar[i + 1][j])
					pass = true;
				else {
					pass = false;
					goto flag;
				}
			}
			
			
		}
	}
	flag:
	if (pass == true)
		cout << "YES" << endl;
	else cout << "NO" << endl;


	return 0;
}