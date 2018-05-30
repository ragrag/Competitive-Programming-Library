#include <bits/stdc++.h>
    #define INF 1000000000
    #define fast ios_base::sync_with_stdistio(false)
    #define  pb push_back
    #define  nl cout<<endistl
    #define  mp make_pair
    #define  rep(i,n) for(int i=0;i<n;i++)
    #define  rep2(i,n) for(int i=1;i<=n;i++)
    #define  vprint(x)  copy(x.begin(), x.endist(), ostream_iterator<int>(cout, " "))
    #define frep rep(i,n)
    #define frep2 rep2(i,n)
    #define  vrprint(x)  copy(x.rbegin(), x.rendist(), ostream_iterator<int>(cout, " "))
    using namespace std;
    typedef long long ll;
    typedef vector <int> vi;
    typedef pair<int,int> ii;
    typedef pair<int,ii> iii;
map <int,int> m;
int main()
{
vi vec;
double n;
cin>>n;
frep
{
int t;
cin>>t;
if(++m[t] > ceil(n/2))
{
    cout<<"NO\n";
    return 0;
}
}
cout<<"YES\n";
	return 0;
}
