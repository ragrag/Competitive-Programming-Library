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
const int MAX_CHAR = 26;
typedef long long ll;
typedef vector <int> vi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;



int main() {
    fast;
    //freopen ("out.h","w",stdout);
   // freopen ("in.h","rw",stdin);
int n,k;
string ss;
cin>>n>>k;
string s ="f";

cin>>ss;
s+=ss;
int ans = -INF;
if(n==1)
{
    cout<<1<<endl;
    return 0;
}
if(k==0)
{
   int l=1,r=1;
   int cons=1;
   int ans=-1;
   while(r<=n)
   {
       r++;
       if(s[r] != s[l])
       {
           cons=1;
           l=r;
       }
       else
        cons++;
ans=max(cons,ans);
   }
   cout<<ans<<endl;
   return 0;
}

for (int i='a';i<='b';i++)
{
    int l=0,r = 0;
    int cc=0;
    while(r< n)
    {
        r++;
        if(s[r] == i)
        {
            cc++;
        }
        if(cc>k)
        {
            while(cc>k)
            {

                l++;
                if(s[l]==i)
                    cc--;
            }
        }
        ans= max(r-l,ans);
    }
}


cout<<ans<<endl;
    return 0;


}
