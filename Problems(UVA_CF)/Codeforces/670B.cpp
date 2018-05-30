#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector <vi> vii;
int main()
{
	int n, k;
	cin >> n >> k;
	int ar[100000];
	for (int i = 1;i <= n;i++)
	{
		cin >> ar[i];
	}
	int i = 1;
	while ((k - i )> 0)
	{
		k -= i;
		i++;
	}
	cout << ar[k] << endl;
	return 0;
}
