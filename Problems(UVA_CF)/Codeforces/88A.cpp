#include <iostream>
#include <climits>
#include <algorithm>
#include<string>
using namespace std;
string arr[12]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
int pos (string s )
{
    return find(arr,arr+12,s)-arr;
}
int main()
{
    string a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    string res ="strange";
    do
    {
        int dist=((pos(a[1])-pos(a[0]))+12)%12;
        int dist1 =((pos(a[2])-pos(a[1]))+12)%12;
        if(dist==4&&dist1==3)
            res="major";
        else if (dist==3&&dist1==4)
            res="minor";
    }while(next_permutation(a,a+3));
    cout<<res;
        return 0;
}
