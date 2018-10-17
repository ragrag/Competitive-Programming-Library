#include <bits/stdc++.h>
#define INF 1000000000
#define fast ios_base::sync_with_stdio(false)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define nl cout<<endl
#define rep(i, n)	for(int i=0;i<n;i++)
#define rep2(i,n) for(int i=1;i<=n;i++)
#define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
#define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
using namespace std;
typedef long long ll;
typedef vector <int> vi;


long long tree[4*100001],
 lazy[4*100001],
 arr[100001];


void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = arr[start]; //Set
    }
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}
void updateRange(int node, int start, int end, int l, int r,long long val)
{
    if(lazy[node] != 0)
    {

        tree[node] += (end - start + 1) * lazy[node];    // Update this 
        if(start != end)
        {
            lazy[node*2] += lazy[node];                  
            lazy[node*2+1] += lazy[node];                
        }
        lazy[node] = 0;                                  
    }
    if(start > end or start > r or end < l)              
        return;
    if(start >= l and end <= r)
    {
        
        tree[node] += (end - start + 1) * val; //Update this
        if(start != end)
        {
           
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);        
    updateRange(node*2 + 1, mid + 1, end, l, r, val);   
    tree[node] = tree[node*2] + tree[node*2+1];        
}

long long queryRange(int node, int start, int end, int l, int r)
{
    if(start > end or start > r or end < l)
        return 0;         
    if(lazy[node] != 0)
    {
        
        tree[node] += (end - start + 1) * lazy[node];            
        if(start != end)
        {
            lazy[node*2] += lazy[node];        
            lazy[node*2+1] += lazy[node];    
        }
        lazy[node] = 0;                 
    }
    if(start >= l and end <= r)             
        return tree[node];
    int mid = (start + end) / 2;
    long long p1 = queryRange(node*2, start, mid, l, r);         
    long long p2 = queryRange(node*2 + 1, mid + 1, end, l, r); 
    return (p1 + p2);
}
int main() {
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	fast;
	int t;
	cin>>t;
	long long type,l,r,val;
while(t--)
{

    memset(lazy,0,sizeof(lazy));
    memset(tree,0,sizeof(tree));
    memset(arr,0,sizeof(arr));


    int n,q;
    cin>>n>>q;
    build(1,0,n-1);
    for(int i=0;i<q;i++)
    {
    cin>>type;
    if(type==1)
    {
        cin>>l>>r;
        cout<<queryRange(1,0,n-1,l-1,r-1)<<endl;
    }
    else {
    cin>>l>>r>>val;
    updateRange(1,0,n-1,l-1,r-1,val);
    }


    }

}
	return 0;
}
