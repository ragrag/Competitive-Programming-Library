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
using namespace std;
int main()
{
    fast;
    int n;
    cin>>n;
    vector <int> vec;
    vector <int> vec2;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        vec.push_back(t);
    }
    int maxn= -1;
    for(int i=vec.size()-1;i>=0;i--)
    {
        if(vec[i]>maxn)
        {
            vec2.push_back(0);
            maxn= vec[i];
        }
            else vec2.push_back( (maxn-vec[i])+1 );
    }
reverse(vec2.begin(),vec2.end());
for (auto v:vec2)
{
    cout<<v<<" ";
}
cout<<endl;
    return 0;
}
