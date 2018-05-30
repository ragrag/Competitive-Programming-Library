#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
using namespace std;
typedef long long ll;
typedef vector <int> vi;
ll MAX_SIZE = 10000001;
vector<long long >isprime(MAX_SIZE , true);
vector<long long >prime;
vector<long long >SPF(MAX_SIZE);
vector <ll> ar;
void SoE(int N)
{
    isprime[0] = isprime[1] = false ;
    for (long long int i=2; i<N ; i++)
    {
        if (isprime[i])
        {
            ar.push_back(i*i);
            prime.push_back(i);
            SPF[i] = i;
        }
        for (long long int j=0;
             j < (int)prime.size() &&
             i*prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i*prime[j]]=false;
            SPF[i*prime[j]] = prime[j] ;
        }
    }
}
int main()
{
    fast;
SoE(10e6+1);
int n;
cin>>n;
for(int i=0;i<n;i++)
{
ll h;
cin>>h;
if (binary_search(ar.begin(), ar.end(), h))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
	return 0;
}
