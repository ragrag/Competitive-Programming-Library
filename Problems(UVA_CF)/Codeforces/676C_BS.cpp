#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

string s;
int k;
int n;
int a[100100];

bool ok(int d){

for(int i=d;i<=n;i++)
    if( a[i]-a[i-d] <=k || a[i]-a[i-d]>=d-k  )
    return 1;

return 0;
}

int main()
{

cin>>n>>k>>s;

for(int i=0;i<s.length();i++)
    a[i+1]=a[i]+(s[i]-'a');

int low=0 , high=n , md;
while( low<high ){
   md=(low+high+1)>>1;

   if( ok(md) )low=md;
   else high=md-1;

}
cout<<low<<endl;

    return 0;
}