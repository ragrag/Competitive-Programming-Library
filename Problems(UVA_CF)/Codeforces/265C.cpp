#include <bits/stdc++.h>
#define INF 1000000
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
int n,s;

int main() {

    fast;
    string s;
    cin>>s;
   vi right;
   vi left;
    rep(i,s.size())
    {
        if(s[i] == 'l' )
           left.pb(i+1);
        else
           right.pb(i+1);
    }

    for(int i=0;i<right.size();i++)
        cout<<right[i]<<endl;
     for(int i=left.size()-1;i>=0;i--)
        cout<<left[i]<<endl;

    return 0;
}
