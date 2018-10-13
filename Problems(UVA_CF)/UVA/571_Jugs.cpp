#include <bits/stdc++.h>
#define INF 10e15
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;

int ca,cb,tar;
bool mpp[1001][1001];

vector <string> bfs()
{
memset(mpp,0,sizeof(mpp));
queue < pair<  pair<int,int> ,vector<string>  >> q;
q.push(mp(mp(0,0) , vector<string>()));

while(!q.empty())
{

pair<  pair<int,int> ,vector<string>  > u = q.front();
q.pop();
int a = u.first.first;
int b= u.first.second;

vector<string> vec = u.second;


mpp[a][b]=true;

if(a== tar || b== tar)

   {
     return u.second;
   }

if(!mpp[ca][b] && a!=ca)
{

vec.pb("fill A");
q.push(mp(mp(ca,b),vec));
vec.pop_back();
}
if(!mpp[a][cb] && b!=cb)
{

vec.pb("fill B");
q.push(mp(mp(a,cb),vec));
vec.pop_back();
}

if(!mpp[0][b])
{

vec.pb("empty A");
q.push(mp(mp(0,b),vec));
vec.pop_back();
}

if(!mpp[a][0])
{

vec.pb("empty B");
q.push(mp(mp(a,0),vec));
vec.pop_back();
}

int aa =(a+b)>ca? ca:a+b;
int bb = (a+b>ca)? (a+b)-ca:0;


if(!mpp[aa][bb])
{

vec.pb("pour B A");
q.push(mp(mp(aa,bb),vec));
vec.pop_back();
}

aa= (a+b)>cb? (a+b)-cb:0;
bb= (a+b)>cb? cb:a+b;
if(!mpp[aa][bb] && a>0 )
{

vec.pb("pour A B");
q.push(mp(mp(aa,bb),vec));
vec.pop_back();
}




}

}

int main()
{
fast;

//freopen("in.h","r",stdin);
//freopen("out.h","w",stdout);

while(cin>>ca>>cb>>tar)
{



    vector <string> ans = bfs();

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    cout<<"success"<<endl;

}
return 0;
}
