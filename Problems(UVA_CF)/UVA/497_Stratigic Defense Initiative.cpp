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


vector <int> ar;
map<pair<int,int> , vi> mpp;
vector <int> dp(int prev,int idx)
{
    if(idx==ar.size())
    {
        return vector<int>();
    }

    if(mpp.find(mp(prev,idx)) != mpp.end() )
        return mpp[mp(prev,idx)];

    vi c1 = dp(prev,idx+1); //leave

    vi c2;

    if(prev==-1 || ar[idx]>ar[prev])
        {
        c2 = dp(idx,idx+1);//take
        c2.pb(ar[idx]);
        }
        if(c2.size()>c1.size())
            return mpp[mp(prev,idx)] = c2;
        else return mpp[mp(prev,idx)] = c1;
}



int main() {
    fast;
    //freopen ("out.h","w",stdout);
    //freopen ("in.h","rw",stdin);
int t;
cin>>t;


while(t--)
{


    mpp.clear();
    ar.clear();

        int num;
        cin >> num;
        ar.push_back(num);
        cin.ignore();

        while (cin.peek() >= '0' && cin.peek() <= '9')
        {
            cin >> num;
            ar.push_back(num);
            cin.ignore();
        }


vi ans =dp(-1,0);
reverse(ans.begin(),ans.end());
cout<<"Max hits: " <<ans.size()<<endl;
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}

if(t!=0)
    nl;

}
    return 0;
}
