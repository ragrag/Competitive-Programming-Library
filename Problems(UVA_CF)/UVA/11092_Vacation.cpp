#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define  pb push_back
#define  nl cout<<endl
#define  mp make_pair
#define  rep(i,n) for(int i=0;i<n;i++)
#define  rep2(i,n) for(int i=1;i<=n;i++)
#define  vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define frep rep(i,n)
#define frep2 rep2(i,n)
#define  vrprint(x)  copy(x.rbegin(), x.rendist(), ostream_iterator<int>(cout, " "))
using namespace std;
const int MAX_CHAR = 26;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;

typedef pair<int,ii> iii;
string a,b;
int table[101][101];
int dp(int i,int j)
{


if(i>= a.size() || j >= b.size())
    return 0;

if(table[i][j] !=-1)
    return table[i][j];

    if(a[i] == b[j])
        return table[i][j] = 1 + dp(i+1,j+1);

    else{
         return table[i][j] = max(dp(i+1,j),dp(i,j+1));
    }



}

int main() {
    fast;
int casee=0;
while(true)
{
    ++casee;
    memset(table,-1,sizeof(table));


getline(cin,a);
if(a=="#")
    break;
    getline(cin,b);
cout<<"Case #"<<casee<<": you can visit at most "<<dp(0,0)<<" cities."<<endl;

}
    return 0;
}
