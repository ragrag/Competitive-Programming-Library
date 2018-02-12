#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

int n,m;
cin>>n>>m;
pair<char,bool> ar[100][100];
for (int i=0;i<n;i++)
{
    for (int j=0;j<m;j++)
    {

        cin>>ar[i][j].first;
        ar[i][j].second=false;
    }

}

for(int i=0;i<n;i++)
{
    for (int j=0;j<m;j++)
    {
        for(int k=0;k<m;k++)
        {
         if(k==j)
            continue;

             if(ar[i][j].first == ar[i][k].first)
            {

            ar[i][j].second=true;
            ar[i][k].second=true;
            }
        }

        for(int k=0;k<n;k++)
        {
            if(k==i)
                continue;
            if(ar[i][j].first == ar[k][j].first)
            {

                ar[i][j].second=true;
                ar[k][j].second=true;
            }
        }
    }

}

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(ar[i][j].second == false)
            cout<<ar[i][j].first;
    }
}
cout<<endl;
    return 0;
    }