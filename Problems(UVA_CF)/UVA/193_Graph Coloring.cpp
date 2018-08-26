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

const bool white = 0;
const bool black = 1;
vector <bool> curColor;
vector <int> curBlack;
vector <int> bestBlack;
vector <vi> adj;
int n;

bool valid(int u)
{
    for (auto v :adj[u])
    {
        if(curColor[v] == black)
            return false;
    }
    return true;
}
void backtrack (int u)
{

    if(u==n+1)
    {
        if(curBlack.size()>bestBlack.size())
        {
            bestBlack = curBlack;
        }
        return;
    }

    if(  bestBlack.size() >= ((n-u)+curBlack.size())+1  )
        return;

    if(valid(u))
    {
        curColor[u] = black;
        curBlack.pb(u);
        backtrack(u+1);
        curColor[u] = white;
        curBlack.pop_back();
    }


  backtrack(u+1);

}


int main() {
    fast;
    //freopen ("out.h","w",stdout);
int t;
cin>>t;

while(t--)
{
    int e;
    cin>>n>>e;
    adj = vector <vi>(n+1);
    curColor = vector<bool>(n+1);
    adj.clear();
    curColor.clear();
    curBlack.clear();
    bestBlack.clear();

    rep(i,e)
    {
        int from,to;
        cin>>from>>to;
        adj[from].pb(to);
        adj[to].pb(from);
    }

    backtrack(1);
    cout<<bestBlack.size()<<endl;

    for(int i=0;i<bestBlack.size();i++)
    {
        cout<<bestBlack[i];
        i<bestBlack.size()-1? cout<<" ":cout<<endl;
    }


}


    return 0;
}
