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
  int n;
  cin>>n;
  vi vec;
  rep (i,n)
  {
      int t;cin>>t;
      vec.pb(t);
  }
int mind = INF;
int minidx;
  for(int i=1;i<n-1;i++)
  {
   if (vec[i+1]- vec[i-1] < mind)
   {
    mind = vec[i+1]- vec[i-1];
   minidx =i;
   }
  }
vec.erase(vec.begin()+minidx);
 int maxc = -1;
 rep(i,n-1)
 {
     maxc = max(maxc,vec[i+1]-vec[i]);
 }
cout<<maxc<<endl;
	return 0;
}
