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


int dy[] = {1,-1,1,1,-1,-1,0,0 };
int dx[] = {0,0,1,-1,1,-1,1,-1 };

map <int,vector <pair<int,int> > > allowed;
bool valid(int r,int c)
{
    if ( r<= 10e9  && c<=10e9  && r>=0  && c>=0 )
        for( auto v : allowed[r] )
        {
            if (c>= v.first && c<=v.second )
                return true;
        }
    return false;
}



int bfs(int x1,int y1,int x2,int y2,int c)
{
queue <pair<pair<int,int>,int> >  q;
q.push (mp(mp(x1,y1),c));
map <pair<int,int>,int> vis;
while(!q.empty())
{
pair <pair<int,int>,int >   u = q.front();
q.pop();

    if(u.first.first == x2 && u.first.second == y2)
    {
        return u.second;
    }

  if(++vis[u.first] > 1)
    continue;


    u.second++;
   rep(i,8)
   {
       int r2 = u.first.first + dy[i];
        int c2 = u.first.second + dx[i];

       if(valid(r2,c2))
       {
        q.push(mp(mp(r2,c2),u.second));
        }
   }

}
return -1;
}

int main()
{
fast;
cin.tie(0);
cout.tie(0);
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
int n;
cin>>n;
rep(i,n){
    int t1,t2,t3;
    cin>>t1>>t2>>t3;

     allowed[t1].pb( mp (t2,t3) );
}

cout<<bfs(x1,y1,x2,y2,0)<<endl;
	return 0;
}
