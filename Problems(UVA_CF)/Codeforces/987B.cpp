#include <bits/stdc++.h>
    #define INF 1000000000
    #define fast ios_base::sync_with_stdio(false)
    #define pb push_back
    #define nl cout<<endl
    #define mp make_pair
    #define rep(i,n) for(int i=0;i<n;i++)
    #define rep2(i,n) for(int i=1;i<=n;i++)
    #define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
    #define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
    using namespace std;
    typedef long long ll;
    typedef vector <int> vi;
    typedef pair<int,int> ii;
    typedef pair<int,ii> iii;
int calc(int x, int Y[], int n, int ny[])
{
    if (x == 0) return 0;
    if (x == 1) return ny[0];
    int* idx = upper_bound(Y, Y + n, x);
    int ans = (Y + n) - idx;
    ans += (ny[0] + ny[1]);
    if (x == 2)  ans -= (ny[3] + ny[4]);
    if (x == 3)  ans += ny[2];
    return ans;
}
int calcPairs(int X[], int Y[], int m, int n)
{
    int ny[5] = {0};
    for (int i = 0; i < n; i++)
        if (Y[i] < 5)
            ny[Y[i]]++;
    sort(Y, Y + n);
    int tp = 0;
    for (int i=0; i<m; i++)
        tp += calc(X[i], Y, n, ny);
    return tp;
}
int main()
{
    int X[1];
    int Y[1];
    cin>>X[0];
    cin>>Y[0];
   int m=1;
   int n=1;
   int h=
   calcPairs(X, Y, m, n);
   if((X[0]==2&&Y[0]==4)||(X[0]==4&&Y[0]==2))
   cout<<"=";
   else{ if(h>0)
    cout<<">";
    else if(X[0]==Y[0])
     cout<<"=";
     else
    cout<<"<";
   }
	return 0;
    }
