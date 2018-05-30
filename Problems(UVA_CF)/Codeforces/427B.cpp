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
	ll n, c, t;
	cin >> n >> t >> c;
	
	ll count = 0; ll seq = 0;
	for (int i = 0;i < n;i++)
	{
		int temp;
		cin >> temp;
		if (temp <=t)
			count++;
		else if(temp > t)
		{
			if (count >= c) 
				seq+= (count-(c-1)); 
			count = 0;
		}
	}
	if (count >= c)
		seq += (count-(c-1));
	cout << seq  << endl;
	return 0;
}
