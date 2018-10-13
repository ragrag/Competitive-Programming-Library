
int numList[] = {5, 2, 7, 3, 4, 6};	// solution is finally set of 0s and 1s..pick or leave.
//			     0  1  0  1  1  1

int m = 7;
// called with LIS(0, m)
int LIS(int i, int prev)
{
	if(i == m)
		return 0;

	int choice1 = LIS(i+1, prev);	// LEAVE
	int choice2 = 0;

	if(numList[prev] <= numList[i])
		choice2 = LIS(i+1, i) + 1;

	return max(choice1, choice2);
}


// W: 10, 4 , 20, 5, 7
// P: 10, 15, 3 , 1, 4

// knapsack size = 12
//	  0   1   0   0  1

const int MAX = 5;
int n = 5;
int weights[MAX] = {10, 4, 20, 5, 7};
int benfit[MAX] = {10, 15, 3, 1, 4};

// called with knapsack(0, intialWeight)
int knapsack(int i, int reminder)	// aka 0/1 knapsack
{
	if(i == n)
		return 0;

	int choice1 = knapsack(i+1, reminder);
	int choice2 = 0;

	if(reminder >= weights[i])
		choice2 = knapsack(i+1, reminder - weights[i]) + benfit[i];

	return max(choice1, choice2);
}




string str1 = "abcdefgzh";
string str2 = "ackghefhlmn";

// abcdefgzh
// 101011001

// ackghefhlmn
// 11000111000

// called with LCS(0, 0)
int LCS(int i, int j)
{
	if(i == sz(str1) || j == sz(str2))
		return 0;

	if(str1[i] == str2[j])
		return 1 + LCS(i+1, j+1);

	int choice1 = LCS(i+1, j);
	int choice2 = LCS(i, j+1);

	return max(choice1, choice2);
}





