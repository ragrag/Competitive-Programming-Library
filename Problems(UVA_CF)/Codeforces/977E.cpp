#include <math.h>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <map>
#include <vector>
#include <set>
#include <limits>
using namespace std;
#define SET(a) memset(a , 0 , sizeof(a))
#define Fast ios_base::sync_with_stdio(false)
typedef long long ll;
ll N, E, u, v;
vector <vector <ll>> adj;
vector <ll> DFS, vis;
map <ll, bool> cyclee;
void gc(ll u) {
	vis[u] = 2;
	for (auto v : adj[u]) {
		if (vis[v] == 0) {
			DFS[v] = u;
			gc(v);
		}
		else if (vis[v] == 2) {
			if (v != DFS[u]) {
				cyclee[u] = cyclee[v] = true;
			}
		}
	}
	vis[u] = 1;
}
bool check = true, vis2[200000], check2 = false;
void dfs(ll node) {
	if (vis2[node])
		return;
	vis2[node] = true;
	if (adj[node].size() != 2)
		check = false;
	if (cyclee[node])
		check2 = true;
	for (auto i : adj[node]) {
		dfs(i);
	}
}
int main() {
	Fast;
	cin >> N >> E;
	adj = vector <vector <ll>>(N + 1);
	vis = vector <ll>(N + 1);
	DFS = vector <ll>(N + 1);
	for (ll i = 0; i < E; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (ll i = 1; i <= N; i++) {
		if (vis[i] == 0)
			gc(i);
	}
	ll result = 0;
	for (ll i = 1; i <= N; i++) {
		if (!vis2[i]) {
			dfs(i);
			if (check && check2) {
				result = result + 1;
			}
			check = true;
			check2 = false;
		}
	}
	cout << result;
	return 0;
}
