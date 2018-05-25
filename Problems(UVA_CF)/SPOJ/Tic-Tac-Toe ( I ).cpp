
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
using namespace std;
typedef long long ll;
typedef vector < int > vi;

string ar;
string ans;
//BFS BASE

bool is_win(string config) {

  bool rows =
    (config[0] != '.' && config[0] == config[1] && config[1] == config[2]) ||
    (config[3] != '.' && config[3] == config[4] && config[4] == config[5]) ||
    (config[6] != '.' && config[6] == config[7] && config[7] == config[8]);

  bool columns =
    (config[0] != '.' && config[0] == config[3] && config[3] == config[6]) ||
    (config[1] != '.' && config[1] == config[4] && config[4] == config[7]) ||
    (config[2] != '.' && config[2] == config[5] && config[5] == config[8]);

  bool diagonals =
    (config[0] != '.' && config[0] == config[4] && config[4] == config[8]) ||
    (config[2] != '.' && config[2] == config[4] && config[4] == config[6]);

  return rows || columns || diagonals;
}

void bfs(string ar2, bool turn) {

  queue < pair < string, bool >> q;

  q.push(mp(ar2, turn));

  while (!q.empty()) {

    pair < string, bool > u = q.front();
    q.pop();

    if (u.first == ar) {
      ans = "yes";
      break;
    }

    if (is_win(u.first))
      continue;

    rep(i, 9) {
      if (u.first[i] == '.') {
        u.first[i] = (u.second ? 'O' : 'X');
        if (u.first[i] == ar[i])
          q.push(mp(u.first, !u.second));

        u.first[i] = '.';
      }
    }

  }
}

int main() {

  int t;
  cin >> t;
  while (t--) {
    ar = "";
    string ar2 = ".........";
    ans = "no";
    rep(i, 3) {
      string row;
      cin >> row;
      ar += row;

    }

    bfs(ar2, false);

    cout << ans << endl;
  }
  return 0;
}
