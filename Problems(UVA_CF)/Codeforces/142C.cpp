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
   int n,c;
   cin>>n>>c;
    map <int,vector<int> > _map;

   rep(i,n)
   {

           string s;
           cin>>s;
          for(int j=0;j<c;j++)
          {

          if(s[j]=='1')
            _map[i].pb(j);

          }
          if(_map[i].size()==0)
          {
              cout<<-1<<endl;
              return 0;
          }

   }
   vector<int> ans;
   int tot,l,r;
for(int i=0;i<c;i++)
{
tot=0;
    for(int j=0;j<n;j++)
    {
        auto it = lower_bound(_map[j].begin(),_map[j].end(),i);
        int idx = it-_map[j].begin();
        if(it != _map[j].end())
        {
            l = *it;
            if(idx-1 <0)
            {
                tot+= min(l-i,(i-_map[j][_map[j].size()-1])+c) ;
            }

            else {
                tot += min(l-i,abs(_map[j][idx-1]-i));
            }
        }
        else {
            l = i - _map[j][_map[j].size()-1];
            r = (_map[j][0]-i)+c;
            tot+=min(l,r);
        }
    }
    ans.pb(tot);

}
;
cout<<*min_element(ans.begin(),ans.end())<<endl;
    return 0;


}
