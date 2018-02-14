
    #include <bits/stdc++.h>
    #define INF 1000000000
    #define fast ios_base::sync_with_stdio(false)
    #define pb push_back
    #define nl cout<<endl
    #define rep(i, n)	for(int i=0;i<n;i++)
    #define rep2(i,n) for(int i=1;i<=n;i++)
    #define vprint(x)  copy(x.begin(), x.end(), ostream_iterator<int>(cout, " "))
    #define vrprint(x)  copy(x.rbegin(), x.rend(), ostream_iterator<int>(cout, " "))
    using namespace std;
    typedef long long ll;
    typedef vector <int> vi;


    vector <int> dist;
    vector <vector<int>> adj;
    int colorCount[2] = {0};
    int ans;
    //BFS Barpitite Graph Check
    bool isBipartite = true;

    void checkBPD(int s) {

    queue<int> q;
    dist[s]=0;
    colorCount[dist[s]]++;
    q.push(s);

    while (!q.empty()) {

        int u = q.front();
        q.pop();

        for (int j = 0; j < (int)adj[u].size(); j++){
            int v = adj[u][j];
        if (dist[v] == INF){
            dist[v] = 1- dist[u] ;
            colorCount[dist[v]]++;
            q.push(v);
        }
        else if (dist[v]  == dist[u] )
              {
            isBipartite = false;
            return;
        }
    }
    }

    }




    int main()
    {
            int t;
            cin>>t;

        while(t--)
        {


    int n,e;
    cin>>n>>e;


    adj = vector < vector<int> > (n);
    dist = vi(n, INF);
    ans =0;

    memset (colorCount,0,2);
    rep(i,e)
        {
            int from, to;
            cin >> from >> to;

            adj[from].push_back(to);
            adj[to].push_back(from);
        }
ans=0;
    rep (i,n)
    {
        if (dist[i] == INF)
        {
            isBipartite = true;
             colorCount[0] =0;
             colorCount[1]=0;
            checkBPD(i);
            if (isBipartite) {

                    if (colorCount[0] > 0 && colorCount[1] > 0)
                         ans+=   min(colorCount[0], colorCount[1]) ;
                         else
                           ans+= max(colorCount[0], colorCount[1]);
                } else {
                    ans = -1;
                    break;
                }
        }
    }
    cout<<ans<<endl;
    }

            return 0;
    }
