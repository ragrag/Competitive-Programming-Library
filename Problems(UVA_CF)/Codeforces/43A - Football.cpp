#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


int main()
{
	
	int n;
	cin >> n;
	
	
	string *ar = new string[n];

	for (int i = 0; i < n; i++)
	{
		string l;
		cin >> l;
		ar[i] = l;
	}

	sort(ar, ar+n);

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (ar[i] == ar[i + 1])
			count++;
		else if (ar[i] != ar[i + 1])
			break;
	}
	count += 1;
	if (count> n / 2)

	
		cout << ar[0] << endl;

		
	else cout << ar[n - 1] << endl;
	return 0;
}