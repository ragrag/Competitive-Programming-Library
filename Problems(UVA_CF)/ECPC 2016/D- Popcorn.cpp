#include <bits/stdc++.h>

using namespace std;


#define MAX_BINOMIAL_UPPER  61
long long n_choose_k(int n,  int k)
{
	assert (n <= MAX_BINOMIAL_UPPER);

	if (n < k) {
		return 0;
	} else if (n == 0 || k == 0 || k == n) {
		return 1;
	}
	if (k > n - k)  k = n - k;

	 long long result = 1;
	for (int d = 1; d <= k; ++d) {
		result *= n--;
		result /= d;
	}

	return result;
}

int main() {
    freopen("popcorn.in", "r", stdin);
int t;
cin>>t;
while(t--)
{
    int n,c;
    cin>>n>>c;
    cout<<n_choose_k(n,c)<<endl;
}
}