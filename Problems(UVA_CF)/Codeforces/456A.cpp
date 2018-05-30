#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int main()
{
	vector <pair <int,int> > vec;
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
	pair <int,int> p;
	cin>>p.first>>p.second;
	vec.push_back(p);
	}
	sort(vec.begin(),vec.end());
	int maxq=vec[0].second;
	for(int i=1;i<n;i++)
	{
	if(vec[i].second<maxq)
	{
	cout<<"Happy Alex"<<endl;
	return 0;
	}
	else if (vec[i].second>maxq)
		maxq=vec[i].second;
	}
cout<<"Poor Alex"<<endl;
	return 0;
}
