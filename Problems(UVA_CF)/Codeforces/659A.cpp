#include <bits/stdc++.h>
    #define INF 1000000000
    #define fast ios_base::sync_with_stdistio(false)
    #define  pb push_back
    #define  nl cout<<endistl
    #define  mp make_pair
    #define  rep(i,n) for(int i=0;i<n;i++)
    #define  rep2(i,n) for(int i=1;i<=n;i++)
    #define  vprint(x)  copy(x.begin(), x.endist(), ostream_iterator<int>(cout, " "))
    #define  vrprint(x)  copy(x.rbegin(), x.rendist(), ostream_iterator<int>(cout, " "))
    using namespace std;
    typedef long long ll;
    typedef vector <int> vi;
    typedef pair<int,int> ii;
    typedef pair<int,ii> iii;
int main()
{
  int n,a,b;
  cin>>n>>a>>b;
  while(b!=0)
  {
  if(b<0)
{
    a--;
    if(a<1)
        a=n;
    b++;
}
  if(b>0)
{
    a++;
    if(a>n)
        a=1;
        b--;
}
  }
cout<<abs(a) <<endl;
	return 0;
}
