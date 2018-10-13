//Lp
       long long ncr=1;
        for (int i=0;i<r;i++)
        {
            ncr=ncr*(n-i)/(i+1);
        }
		
//Func
#define MAX_BINOMIAL_UPPER  61
long long nCr(int n,  int k)
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


//PRECOMPUTE


long long nck[N + 2][N + 2]; //[n][r]

void pascal(){
	int i, j;
	
	for (i = 0; i <= N; i++){
		nck[i][0] = 1;
	}
	
	for (i = 1; i <= N; i++){
		for (j = 1; j <= i; j++){
			nck[i][j] = nck[i - 1][j - 1] + nck[i - 1][j];
		}
	}
}

