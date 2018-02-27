
#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;

vector <int> dist;
vector <vector<int>> adj;

//BFS Shortest Path
vi p;

void printPath(int u, int s) {
if (u == s) { cout<<s; return; }
printPath(p[u],s);
cout<<" "<<u; }

void bfs(int s) {
queue<int> q;
dist[s]=0;
q.push(s);
while (!q.empty()) {
	int u = q.front();
	q.pop();
	for (int j = 0; j < (int)adj[u].size(); j++){
		int v = adj[u][j];
	if (dist[v] == INF){
		dist[v] = dist[u] + 1;
		p[v] = u;
		q.push(v);

	}
	}
}
}

int main()
{

    int t;
    cin>>t;
int tt=t;
    while(t--)
    {
  if(!tt==t)
    nl;
map <string,int> wordInt;
map <int,string> intWord;
vector <string> words;

while(true)
{
    string temp;
    cin>>temp;
    if(temp == "*")
        break;
    words.pb(temp);

}



adj = vector < vector<int> > (words.size());
p = vector <int> (words.size());
dist = vi(words.size(), INF);

 for (int i = 0;i < words.size();i++)
	{
        wordInt[words[i]] =i;
        intWord[i] = words[i];
	}
    for (int i = 0;i < words.size();i++)
	{



        for(int j=0;j<words.size();j++)
        {
             if(words[i].size()!=words[j].size())
                    continue;

           int c=0;
            for(int k=0;k<words[i].size();k++)
            {
                    if (words[i][k] != words[j][k])
                        c++;
            }
            if(c==1)
            {

		adj[wordInt[words[i]]].push_back(wordInt[words[j]]);
		adj[wordInt[words[j]]].push_back(wordInt[words[i]]);
            }


        }

	}

	 string start,to,line;
    int pos;
    getline(cin,line);
    getline(cin,line);
    while(line != ""){
      dist = vi(words.size(), INF);
      pos = line.find(" ");
      start = line.substr(0,pos);
      to = line.substr(pos+1,line.size());

      bfs(wordInt[start]);
      cout<<start<<" "<<to<<" "<<dist[wordInt[to]]<<endl;
      if(!getline(cin,line))
        break;
    }

  }



		return 0;
}
