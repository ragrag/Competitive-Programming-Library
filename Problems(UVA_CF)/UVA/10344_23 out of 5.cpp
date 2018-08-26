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

bool can;
vector <int> numbers;
vector <bool> vis;
void backtrack(int idx,int tot,bool first)
{
    if(can)
        return;
    if (idx==5)
    {
        can = tot==23;
        return;
    }
    rep(i,5)
    {
        if(vis[i])
            continue;
        vis[i] = 1;
        if(!first){
            backtrack(idx+1,numbers[i],1);
        }
        else
        {
            backtrack(idx+1,tot+numbers[i],1);
            backtrack(idx+1,tot-numbers[i],1);
            backtrack(idx+1,tot*numbers[i],1);
        }
        vis[i] = 0;
    }
}

int main() {
    fast;
   //freopen ("out.txt","w",stdout);
while(true)
{
numbers = vector<int>(5);
vis = vector<bool>(5);
can = false;
rep(i,5)
{
    cin>>numbers[i];
}
if(numbers[0]==0)
    break;

    backtrack(0,0,0);
    can? cout<<"Possible"<<endl : cout<<"Impossible"<<endl;
}
    return 0;
}
