#include <iostream>

using namespace std;

long long sum(long long x)
{
	return x*(x + 1) / 2;
}

long long sumrange(long long x, long long y)
{
	
    if(x <= 1)
        return sum(y);

	return sum(y) - sum(x-1);


}

long long splitterBS(long long k , long long n)
{
long long	start = 1;
long long	end = k;

while (start < end)
{
	long long mid = (start + end) / 2;
	long long sum = sumrange(mid, k);

	if (sum == n)
		return k - mid + 1;

	if (sum>n)
	{
		start = mid + 1;
	}
	else end = mid;
}
return k - start + 2;
}
int main()
{
	
	long long n;
	long long k;
	cin >> n>> k;

	if (n == 1)
		cout << 0 << endl;
	else if (n <= k)
		cout << 1 << endl;

	else {
		--k;
		--n;
		if (sum(k) < n)
			cout << -1 << endl;
		else cout << splitterBS(k, n) << endl;
	}





	return 0;
}