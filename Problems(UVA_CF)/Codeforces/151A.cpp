#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;
map <char,int> mapone;
map<char,int> maptwo;
vector <ll> vec;
int main()
{
fast;
int n, bottles ,maxl ,eachl, eachlime , dslices , maxslices, maxsalt;
int neededl, neededsalt;
cin >>n >>bottles>>eachl>>eachlime>>dslices >>maxsalt;
maxl = bottles*eachl;
maxslices = eachlime*dslices;
cin>>neededl>>neededsalt;
int toasts =0;
while (maxl >= neededl && maxslices >=1 && maxsalt >=neededsalt)
{
	toasts++;
	maxl-= neededl;
	maxslices--;
	maxsalt -= neededsalt;
}
cout<<toasts/n<<endl;
return 0;
}
