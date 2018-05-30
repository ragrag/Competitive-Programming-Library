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
int n,x;
cin>>n>>x;
 int c=0;
for(int i=1;i<=n;i++)
 {
     if(i>x)
         break;
     if( x%i ==0 && x/i <= n)
     {
        // cout<<i<<endl;
        c++;
     }
 }
 cout<<c<<endl;
	return 0;
}
