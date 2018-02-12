#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector <int> vi;
typedef pair<int, int> ii;
typedef vector <ii> vii;




int main()
{
	int m, n;
	cin >> m>> n;
	vector <vi> ar(m, vi(n));

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n;j++)
		{
			ar[i][j] = 0;
		}
	}

	
	vi ind(10000);
	for (int i = 0; i < m; i++)
	{
		int c;
		cin >> c;
		for (int j = 0; j < c; j++)
		{
			cin >> ind[j];
		}

		for (int k = 0; k < c; k++)
		{
			cin >> ar[i][ind[k]-1];
		}
		
	}
	vector <vi> ar2(n, vi(m));
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			ar2[i][j] = ar[j][i];
		}
	
	}

	cout << n << " " << m << endl;
	for (int i = 0; i < n; i++)
	{
		int co = 0;
		vi car(10000);
		for (int j = 0; j < m; j++)
		{
			if (ar2[i][j] != 0)
			{
				
				car[co] = j+1;
				co++;
			}
		}
		cout << co<<" ";
		for (int k = 0; k < co; k++)
		{
			cout << car[k] << " ";
		}
		cout << endl;
		for (int j = 0; j < m; j++)
		{
			if(ar2[i][j]!=0)
				cout << ar2[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}