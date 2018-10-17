    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define S(x) scanf("%d",&x)
    #define fl(i , a, b) for(i = a; i<b; i++)
    #define MAX 100010


    const int N = 1000001;
    int lp[N+1];
    vector<int> pr;


int seg[100001];
int lazy[100001];
int arr[100001];
static int check[1000001];

void build_tree(int node,int beg,int end)
{
    if(beg>end) return;
    if(beg==end)
    {
        if(check[arr[beg]]==1)
            seg[node]=1;
        else seg[node]=0;
        return;
    }
    build_tree(node*2,beg,(beg+end)/2);
    build_tree(1+2*node,(beg+end)/2 + 1,end);
    seg[node]=seg[node*2]+seg[1+2*node];
}

void update_tree(int node,int a,int b,int start,int end,int val)
{
    if(lazy[node]!=0)
    {
        if(check[lazy[node]]==1)
        {
            seg[node]=(b-a+1);
            if(a!=b)
            {
                lazy[node*2]=lazy[node];
                lazy[1+2*node]=lazy[node];
            }
        }
        else
        {
            seg[node]=0;
            if(a!=b)
            {
                lazy[node*2]=lazy[node];
                lazy[1+2*node]=lazy[node];
            }
        }
        lazy[node]=0;
    }
    if(a>b||a>end||b<start) return;

    if(a>=start&&b<=end)
    {
        if(check[val]==1)
        {
           seg[node]=(b-a+1);
           if(a!=b)
           {
               lazy[node*2]=val;
               lazy[1+2*node]=val;
           }
        }
        else
        {
            seg[node]=0;
            if(a!=b)
            {
               lazy[node*2]=val;
               lazy[1+2*node]=val;
            }
        }
     return;
    }
    update_tree(node*2,a,(a+b)/2,start,end,val);
    update_tree(1+2*node,1+(a+b)/2,b,start,end,val);
    seg[node]=seg[2*node]+seg[1+2*node];
}

int query_tree(int node,int a,int b,int begin,int end)
{
    if(lazy[node]!=0)
    {
        if(check[lazy[node]]==1)
        {
            seg[node]=(b-a+1);
            if(a!=b)
            {
                lazy[node*2]=lazy[node];
                lazy[1+2*node]=lazy[node];
            }
        }
        else
        {
            seg[node]=0;
            if(a!=b)
            {
                lazy[node*2]=lazy[node];
                lazy[1+2*node]=lazy[node];
            }
        }
        lazy[node]=0;
    }

    if(a>b||a>end||b<begin) return 0;
    if(a>=begin&&b<=end) return seg[node];
    int x=query_tree(node*2,a,(a+b)/2,begin,end);
    int y=query_tree(1+2*node,1+(a+b)/2,b,begin,end);
    return (x+y);
}

int main() {
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t,n,q,i,x,y,z,w;
	scanf("%d",&t);


        for (int i=2; i<=N; ++i) {
            if (lp[i] == 0) {
                lp[i] = i;
                pr.push_back (i);
                check[i]=1;
            }
            for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
                lp[i * pr[j]] = pr[j];
        }

	for(int count1=1;count1<=t;count1++)
	{
	    memset(lazy,0,sizeof(lazy));
	    memset(seg,0,sizeof(seg));
        scanf("%d%d",&n,&q);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        build_tree(1,0,n-1);
        printf("Case %d:\n",count1);
        for(i=0;i<q;i++)
        {
            scanf("%d",&x);
            if(x==0)
            {
                scanf("%d%d%d",&y,&z,&w);
                y--;
                z--;
                update_tree(1,0,n-1,y,z,w);
            }
            else
            {
                scanf("%d%d",&y,&z);
                y--;
                z--;
                int ans=query_tree(1,0,n-1,y,z);
                printf("%d\n",ans);
            }
        }
    }
	return 0;
}
