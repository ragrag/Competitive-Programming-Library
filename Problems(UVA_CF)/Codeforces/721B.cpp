#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n,t;
	string pass;
	cin>>n>>t;
	int secs = 0;
	int tt=t;
	int tleq =0; 
	int tless = 0;
	vector <pair<int,string>> ar;
	for (int i=0;i<n;i++)
	{
int x;string s;
cin>>s;
x = s.length();
ar.push_back(make_pair(x,s));
	}
	cin>>pass;
	sort(ar.begin(),ar.end());
	
	for (int i=0;i<n;i++)
	{
		if(ar[i].second.length() < pass.length())
			tless++;
		if(ar[i].second.length() == pass.length())
			tleq++;
	}
	
	int best=0;
		
	best = tless + ((tless/t)*5) +1;
	
	int worst=0;
			ar[(tless+tleq )-1]  = make_pair(pass.size(),"#"); 
	for (int i=0;i<n;i++)
	{
	worst++;
	t--;
	if(t==0 && ar[i].second != "#")
	{
		worst+=5;
		t=tt;
	}
	if(ar[i].second=="#")
		break;
	}
	if(tless==0)
					best=1;
	cout<<best <<" "<<worst<<endl;
	return 0;
}
