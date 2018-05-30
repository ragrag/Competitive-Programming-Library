#include <iostream>
#include <algorithm>
#include <math.h>
#include <numeric>
#include <string>
#include <vector>
#include <map>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
int main()
{
	int s;
	string x; 
	cin >> s>>x;
	
	vector <pair <int,string> > ma;
	rep(i, x.size()-1)
	{
		bool found = false;
		string substr = x.substr(i, 2);
		
		for (int j = 0;j < ma.size();j++)
		{
			if (ma[j].second == substr)
			{
				ma[j].first++;
				found = true;
			}
		}
		if (!found)
		{
			ma.push_back(make_pair(0, substr));
		
		}
	}
	
	sort(ma.begin(), ma.end());
	cout << ma[ma.size() - 1].second << endl;
	return 0;
}
