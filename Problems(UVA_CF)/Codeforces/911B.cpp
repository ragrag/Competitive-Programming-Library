#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
	int a, b;
	int n;
	cin >> n >> a >> b;
	int maxx = 0;
	
	for (int i = 1; i <n; i++)
	{
		maxx = max(maxx, min(a / i, b / (n - i)));
	}
	cout << maxx << endl;
	return 0;
}
