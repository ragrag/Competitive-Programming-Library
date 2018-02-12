#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

int n;
int curmin;
int tcount=0;
int tempcount=0;
int ar[1000];

cin>>n;
for (int i=0;i<n;i++)
{
    cin>>ar[i];

}
for (int i=0;i<n;i++)
{
tempcount=0;
for(int j=i;j<n;j++)
{
    curmin = ar[j];
    tempcount++;
    if(curmin < ar[j+1] && (j+1<=n-1))
        break;
}

for(int j=i;j>=0;j--)
{
    curmin = ar[j];
    tempcount++;
    if(curmin < ar[j-1] && (j-1>=0))
        break;
}
tempcount-=1;
tcount = max(tcount,tempcount);

}

cout<<tcount<<endl;
    return 0;
    }
