#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int main()
{
	
	ll a, b;
	ll ry, rbb, rr;
	cin >> a >> b;
	cin >> ry >> rbb >> rr;
	ll rc = (ry * 2) + rbb;
	ll rb = rbb + (rr * 3);
	rc -= a;
	rb -= b;
	
	cout << max((rc) , (ll)0)  + max((rb),(ll)0) << endl;
	return 0;
}
