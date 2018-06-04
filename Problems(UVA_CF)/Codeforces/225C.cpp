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
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
map <int,int> vis;
vector < vector <char > > ar;
int n,m,l,r;
int dotCount [1001];
int tab[1009][5][1009];
int calc(int col, int last, int width)
{
if (col == m)
{
    if ( width >=l && width <=r)
        return 0;
    else return INF;
}
int &ans = tab[col][last][width];
if (ans!=-1)
    return ans;
int dots = INF;
if ( (last != 1 && (width+1 <=r )) ||  (last == 1 && width >=l)  )
{
    dots =( n - dotCount[col] )+ calc(col+1,0,last == 1 ? 1 :width+1);
}
int hashes = INF;
if ( ( last != 0 && (width+1 <=r ) ) ||  (last == 0 && width >=l )  )
{
    hashes=( dotCount[col] ) + calc(col+1,1,last == 0 ? 1 : width+1);
}
ans = min(dots,hashes);
return ans;
}
int main()
{
fast;
cin>>n>>m>>l>>r;
ar = vector< vector <char > > (n);
memset(tab,-1,sizeof(tab));
rep (i,n)
    rep(j,m)
    {
        char cc;
        cin>>cc;
    if(cc =='.')
        dotCount[j]++;
    }
cout<<calc(0,2,0);
	return 0;
}
