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

#define LSOne(S) (S & (-S))

class FenwickTree {
private:
  vector <long long> ft;

public:
  FenwickTree() {}
  // initialization: n + 1 zeroes, ignore index 0
  FenwickTree(long long n) { ft.assign(n + 1, 0); }

  long long rsq(long long b) {                                     // returns RSQ(1, b)
    long long sum = 0; for (; b; b -= LSOne(b)) sum += ft[b];
    return sum; }

  long long rsq(long long a, long long b) {                              // returns RSQ(a, b)
    return rsq(b) - (a == 1 ? 0 : rsq(a - 1)); }

  // adjusts value of the k-th element by v (v can be +ve/inc or -ve/dec)
  void adjust(long long k, long long v) {                    // note: n = ft.size() - 1
    for (; k < (long long)ft.size(); k += LSOne(k)) ft[k] += v; }
};
int main()
{
int n,q;

cin>>n>>q;
FenwickTree tree = FenwickTree(n);
vector <long long> data;
vector <long long> indexes(n+1);
rep(i,n)
{
    int x;
    cin>>x;
    data.pb(x);
}
sort(data.rbegin(),data.rend());
rep(i,q)
{
int l,r;
cin>>l>>r;
tree.adjust(l,1);
tree.adjust(r+1,-1);
}

rep(i,n)
{
indexes[i] =tree.rsq(i+1);
}
sort(indexes.rbegin(),indexes.rend());
long  long tot=0;
rep(i,n)
{
    tot+= indexes[i]*data[i];
}
cout<<tot<<endl;
        return 0;
}