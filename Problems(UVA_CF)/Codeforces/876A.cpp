#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, a, b, c;
	int ar[3];
	int max;
	cin >> n >> a >> b >> c;
	
	ar[0] = a;
	ar[1] = b;
	ar[2] = c;
	int idx = *min_element(ar, ar + 3);
	
	if ( idx == a || idx == b || n == 1)
	{
		max = min(a, b)*(n - 1);
	}
	else max = min(a, b) + c*(n - 2);
	cout << max << endl;
	return 0;
}
