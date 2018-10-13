# include<vector>
# include<string>
# include<stack>
# include<iostream>
using namespace std;
string A, B;

const int MAX  = 1000+9;

int memo[MAX][MAX];

struct state {
	int i, j;
	bool isProcessed;
	state(int i, int j) : i(i), j(j), isProcessed(0) {}
};

int best(int i, int j) {
	stack<state> st;
	state cur = state(i, j);
	st.push(cur);

	while(!st.empty()) {
		cur = st.top(), i = cur.i, j = cur.j, st.pop();
		//base case handling
		if(memo[i][j] == -1) {
			if(i >= j)
				memo[i][j] = 0;
			else if(!cur.isProcessed) {
				//push me again to be processed later
				cur.isProcessed = 1;
				st.push(cur);
				//push my sub-states
				st.push(state(i+1, j-1));
				st.push(state(i+1, j));
				st.push(state(i, j-1));
			} else // Evaluate
				memo[i][j] = min(memo[i+1][j-1] + (A[i] != A[j]), min(memo[i][j-1]+1, memo[i+1][j]+1));
		}
	}

	return memo[cur.i][cur.j];
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("c.in", "rt", stdin);
    //freopen("c.txt", "wt", stdout);
#endif

	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> A;

		memset(memo, -1, sizeof memo);
		cout << "Case " << i << ": " << best(0, (int)A.size()-1) << endl;
	}

	return 0;
}
