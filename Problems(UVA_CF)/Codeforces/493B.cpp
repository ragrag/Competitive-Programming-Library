#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
typedef long long ll;
using namespace std;
int main(){
	int n;
	cin >> n;
	vector <ll>  first;
	vector <ll> second;
	ll last;
	ll f=0;
	ll s=0;
	bool fb=false, sb = false;
	for (int i = 0; i < n; i++)
	{
		ll t;
		cin >> t;
		if (t >= 0)
		{
			first.push_back(abs(t));
				f += t;
		} 
		else {
			second.push_back(abs(t));
			s += abs(t);
		}
		if (i == n - 1)
			last = t;
	}
	if (f == s)
	{
		if (first>second )
		{
			cout << "first" << endl;
			return 0;
		}
		else if (second > first)
		{
			cout << "second" << endl;
			return 0;
		}
		else {
			last >= 0 ? cout << "first" << endl : cout << "second" << endl; return 0;
		}
	}
		
		
	
	if (f > s)
	{
		
		cout << "first" << endl;
		return 0;
	}
	if (s > f)
	{
		cout << "second" << endl; return 0;
	}
	
		
	
	return 0;
}
