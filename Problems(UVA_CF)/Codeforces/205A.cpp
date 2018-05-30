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
	vector <pair<int, int> > ar;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		ar.push_back({ x, i });
	}
	
	sort(ar.begin(), ar.end());
	if (n == 1)
	{
		cout << 1 << endl;
		return 0;
	}
	if (ar[0].first == ar[1].first)
	{
		cout << "Still Rozdil" << endl; return 0;
	}
	else if (ar[0].first != ar[1].first)
	{
		cout << ar[0].second+1 << endl; return 0;
	}
	
}
