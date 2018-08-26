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
bool visr[100];
bool visc[100];
bool visd[150];
int row,col;
int numbers[8];
vector <string> sol;
void backtrack(int r)
{
    if(r==8)
    {
string res ="";
    rep(i,8)
    {
        res += to_string(numbers[i]+1);
    }
    sol.pb(res);
        return;
    }
    if(visr[r])
        backtrack(r+1);

    for(int i=0;i<8;i++)
    {
        if(visc[i] || visd[r+i] || visd[r-i+30])
            continue;
        else{
            visc[i] = visd[r+i] = visd[r-i+30] = true;
            numbers[i]=r;
            backtrack(r+1);
            visc[i] = visd[r+i] = visd[r-i+30] = false;
        }
    }
}


int main() {
    fast;
    //freopen ("out.h","w",stdout);

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {


    memset(visd,0,sizeof(visd));
    memset(visr,0,sizeof(visr));
    memset(visc,0,sizeof(visc));
    sol.clear();
if(i)
    cout<<endl;
    cin>>row>>col;
    row--;
    col--;
    numbers[col] = row;
    visr[row] = visc[col]=true;
    visd[row+col] = visd[row-col+30] = true;
    backtrack(0);
    sort(sol.begin(),sol.end());
    cout<<"SOLN       COLUMN"<<endl;
    cout<<" #      1 2 3 4 5 6 7 8"<<endl<<endl;
    for(int i=0;i<sol.size();i++)
    {

cout<<setw(2) <<i+1;
cout<<"      ";
        for(int j=0;j<sol[i].size();j++)
        {
            j<(sol[i].size()-1) ? cout<<sol[i][j]<<" ":cout<<sol[i][j];
        }
        cout<<endl;
    }

    }
    return 0;
}
