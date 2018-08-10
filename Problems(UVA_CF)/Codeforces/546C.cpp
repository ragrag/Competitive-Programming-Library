
#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define mp make_pair
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
map <pair <vi,pair<int,int>>,int> mapp;

int main()
{
    fast;
    int n;
    cin>>n;
    vi s;
    int p1,p2;
    int c;
    cin>>p1;
    rep(i,p1)
    {
        cin>>c;
        s.pb(c);
    }
    cin>>p2;
    rep(i,p2)
    {
        cin>>c;
        s.pb(c);
    }
p1=0;
p2=n-p2;
int turn = 0;
queue <pair <vi,pair<int,int>> > q;
q.push (mp(s,mp(p1,p2)));

while(!q.empty())
{
    pair <vi,pair<int,int> > u = q.front();
    q.pop();
    p1 = u.second.first;
    p2 = u.second.second;
    vi ss = u.first;
    if (p2==0 || p2 >=n)
    {

        break;
    }
    if(++mapp[u] >1)
    {

        cout<<-1<<endl;return 0;
    }
    //cout <<"a "<<p1<<" "<<u.first[p1] << " "<<p2<<" "<<u.first[p2]<<endl;

    if(u.first[p1] > u.first[p2])
    {

        for(int i=p1;i<p2;i++)
        {
            iter_swap(ss.begin()+i,ss.begin()+(i+1));
        }
        u.first = ss;
        u.second.second++;
        turn++;
        q.push(u);
    }
    else {

         for(int i=p1;i<n-1;i++)
        {

            iter_swap(ss.begin()+i,ss.begin()+(i+1));
        }

        for(int i=p2-1;i<n-1;i++)
        {

            iter_swap(ss.begin()+i,ss.begin()+(i+1));
        }
         u.first = ss;
        u.second.second--;
        turn++;
        q.push(u);
    }



}

cout<<turn<<" ";
if(p2==0)
    cout<<2;
else cout<<1;
nl;


		return 0;
}
