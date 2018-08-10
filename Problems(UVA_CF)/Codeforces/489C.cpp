#include <bits/stdc++.h>
#define INF 1000000
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
int n,s;

string table1[101][901];
string table2[101][901];
string maxStr(string a,string b)
{
    return a > b ? a : b;
}
string minStr(string a,string b)
{
    return a > b ? b : a;
}
string dp(string st, int sum)
{
   if(st.size() == n)
   {
        if(sum==s)
            return st;
         return "-";
   }
   string  &x= table1[st.size()][sum];
   if(x!="")
        return x;
   x= "-";
   for(int i=9;i>=0;i--)
   {
      if(st.size()==0  && i==0)
        continue;
        x = maxStr(x,dp(st +(char)(i+'0'),sum+i));
   }
   return x;
}
string dp2(string st, int sum)
{
   if(st.size() == n)
   {
        if(sum==s)
            return st;
        return ":";
   }
   string  &x= table2[st.size()][sum];
   if(x!="")
        return x;
   x= ":";
   for(int i=0;i<10;i++)
   {
          if(st.size()==0  && i==0)
            continue;
        x = minStr(x,dp2(st +(char)(i+'0'),sum+i));
   }
   return x;
}


int main() {
    fast;
memset(table1,0,sizeof(table1));
memset(table2,0,sizeof(table2));
cin>>n>>s;
string mn = dp2("",0);
string mx = dp("",0);

if(mn!= ":" && mx != "-" && s!=0)
    cout<<mn <<" "<<mx<<endl;
else if(s==0 && n==1)
        cout<<0<<" "<<0<<endl;
else cout<<-1<<" "<<-1<<endl;

    return 0;
}
