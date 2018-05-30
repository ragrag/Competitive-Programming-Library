#include <math.h>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <limits>
using namespace std;
typedef long long ll;
int main() {
	ll n, k, temp, cnt = 0, mm = 10e9;
	set <ll> s;
	map <ll, ll> table;
	cin >> n >> k;
	for (int k = 0; k < n; k++) {
		cin >> temp;
		table[temp]++;
		mm = min(mm, temp);
		s.insert(temp);
	}
	if (k == 0) {
		if (mm > 1)
			cout << mm - 1;
		else
			cout << -1;
		return 0;
	}
	for (auto i : s) {
		cnt += table[i];
		if (cnt == k) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
