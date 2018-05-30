#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
typedef long long ll;
using namespace std;
int main(){
	ll n;
		cin >> n;
		
		for (int i = 9; i >= 1; i--)
		{
			ll temp = (pow(2, i) - 1) * pow(2, i - 1);
			
			if (n % temp == 0)
			{
				cout << temp<<endl;
				break;
			}
		}
	return 0;
}
