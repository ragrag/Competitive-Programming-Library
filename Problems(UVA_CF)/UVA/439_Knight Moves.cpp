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


int dy[] = {2,-2,2,-2,1,-1,1,-1 };
int dx[] = {1,1,-1,-1,2,2,-2,-2 };
bool valid(char c,int n)
{
    return (c>='a' && c<='h' && n>=1 && n<=8 );
}



int bfs(char fromc,int fromn,string to,int c)
{
queue <pair<pair<char,int>,int> >  q;
q.push (mp(mp(fromc,fromn),c));
map <pair<char,int>,int> mapp;
while(!q.empty())
{
pair <pair<char,int>,int >   u = q.front();
q.pop();

    if(u.first.first == to[0] && u.first.second == to[1] -'0')
    {
        return u.second;
    }

  if(++mapp[u.first] > 1)
    continue;


    u.second++;
   rep(i,8)
   {
       char c2 = u.first.first + dx[i];
       int n2 = u.first.second + dy[i];
       if(valid(c2,n2))
        q.push(mp(mp(c2,n2),u.second));
   }

}

}

int main()
{
fast;
string from,to;
while (cin>>from>>to )
{



cout<<"To get from "<<from<<" to "<<to<<" takes "<<bfs(from[0],from[1]-'0',to,0)<<" knight moves.\n";
}
	return 0;
}
