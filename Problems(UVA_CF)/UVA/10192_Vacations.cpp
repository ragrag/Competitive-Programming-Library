#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define mp make_pair
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;

string a,b;
int table[101][101];
int dp(int i,int j)
{
    if(i==a.size() || j==b.size())
        return 0;
    int &test  = table[i][j];
    if(test !=-1)
        return test;

    if(a[i] == b[j])
        return  1+ dp(i+1,j+1);

    test = max(dp(i+1,j),dp(i,j+1));
    return test;
}
int main()
{
  //freopen("output.txt", "w", stdout);
fast;
int casee=0;
while (getline(cin, a), a[0] != '#')
    {
    getline(cin, b);
    memset(table,-1,sizeof(table));
    cout<<"Case #"<<++casee<<": you can visit at most "<<dp(0,0)<<" cities."<<endl;
}
        return 0;
}


