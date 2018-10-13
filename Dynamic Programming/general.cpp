# include<vector>
# include<string>
# include<iostream>
using namespace std;
string A, B;

const int MAX  = 1000+9;

int memo[MAX][MAX];

int best(int i, int j)
{
	if(i >= j)
		return 0;
	int &ret = memo[i][j];
	if(ret != -1)
		return ret;

	ret = best(i+1, j-1) + (A[i] != A[j]);
	ret = min(ret, best(i+1, j)+1);
	ret = min(ret, best(i, j-1)+1);

	return ret;
}


int main() {

	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> A;

		memset(memo, -1, sizeof memo);
		cout << "Case " << i << ": " << best(0, (int)A.size()-1) << endl;
	}

	return 0;
}
