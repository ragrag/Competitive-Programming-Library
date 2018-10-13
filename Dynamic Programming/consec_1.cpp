
const int MAX = 109;
int memo[MAX], cnt[MAX], pr[MAX];
int n;

int best(int i)	// push parameter J to loop. O(NM) time, O(N) memory
{
	if(i == n)
		return 0;
	int &ret = memo[i];
	if(ret != -1)	return ret;

	ret = OO;
	int sum = 0;
	for (int j = i; j < n; ++j) {	// what if i allowed only maximum to match i+5?
		sum += cnt[j];
		ret = min(ret, (sum+10)*pr[j] + best(j+1) );
	}

	return ret;

}


int main()
{
	freopen("c.in", "rt", stdin);

	int cases;
	scanf("%d", &cases);

	while(cases--) {
		scanf("%d", &n);
		lp(i, n)
			scanf("%d%d", &cnt[i], &pr[i]);

		memset(memo, -1, n*sizeof(int));

		printf("%d\n", best(0));
	}


	return 0;
}
