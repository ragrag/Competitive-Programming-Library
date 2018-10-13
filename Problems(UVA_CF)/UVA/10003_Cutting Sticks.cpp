#include <bits/stdc++.h>
#define INF 10e15
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
string s;

int c,n;
int cuts[51];
int tab[55][55];

int dp(int i,int j,int sc,int ec)
{

if(i==j || sc> ec)
    return 0;

int &ret=tab[sc][ec];
if(ret!=-1)
    return ret;

ret = INF;
for(int k=sc;k<=ec;k++)
{
    int pos = cuts[k];
ret = min (ret, dp(i,pos,sc,k-1)+dp(pos+1,j,k+1,ec)+(j-i+1) );
}

return ret;

}


int main()
{

fast;
//freopen("in.h","r",stdin);
  //freopen("out.h","w",stdout);
  while(1)
  {


cin>>c;
if(c==0)
    break;
memset(tab,-1,sizeof(tab));
cin>>n;
rep(i,n)
{
    cin>>cuts[i];
}
cout<<"The minimum cutting is "<<dp(1,c,0,n-1)<<"."<<endl;

  }
		return 0;
}
