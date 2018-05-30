#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define mp make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
int main()
{
fast;
//freopen ("out.h","w",stdout);
string s1,s2,s3;
getline(cin,s1);
getline(cin,s2);
getline(cin,s3);
int c=0;
rep(i,s1.size())
{
    if(s1[i] == 'a' || s1[i] == 'e'|| s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u'  )
        c++;
}
if(c!=5)
{
    cout<<"NO\n";
    return 0;
}
c=0;
rep(i,s2.size())
{
    if(s2[i] == 'a' || s2[i] == 'e'|| s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u'  )
        c++;
}
if(c!=7)
{
    cout<<"NO\n";
    return 0;
}
c=0;
rep(i,s3.size())
{
    if(s3[i] == 'a' || s3[i] == 'e'|| s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u'  )
        c++;
}
if(c!=5)
{
    cout<<"NO\n";
    return 0;
}
cout<<"YES"<<endl;
		return 0;
}
