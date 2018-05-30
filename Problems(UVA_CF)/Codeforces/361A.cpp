#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
typedef long long ll;
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	
	vector <vector <int> > ar(n,vector<int>(n));
	int z = 0;
	for (int i = 0; i < n; i++)
	{
		
			ar[i][z] = k;
			z++;
		
	}
	
	for (int i = 0; i < n; i++)
	{
		
		for (int j = 0; j < n; j++)
		{
			cout << ar[i][j] <<" ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
