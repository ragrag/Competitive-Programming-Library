
#include <bits/stdc++.h>
using namespace std;

int ar[100001] = {0};

int main() {

string str;
cin>>str;
for(int i=1;str[i];i++)
{
if(str[i] == str[i-1])
	ar[i]+=ar[i-1]+1;
else
	ar[i]+=ar[i-1];
}

int n,l,r;
cin>>n;
for(int i=0;i<n;i++)
{

cin>>l>>r;
cout<<ar[r-1]-ar[l-1]<<endl;
}

   return 0;
}
