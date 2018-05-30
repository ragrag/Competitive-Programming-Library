#include <bits/stdc++.h>
    #define INF 1000000000
    #define fast ios_base::sync_with_stdio(false)
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
    fast;
string s;
cin>>s;
rep(i,s.size())
{
    if(s[i] == '9' && i==0)
        continue;
if(s[i] >= '5')
{
    int x = 9 -( s[i] - '0');
    s[i] = (char) x+'0';
}
}
cout<<s<<endl;
	return 0;
}
