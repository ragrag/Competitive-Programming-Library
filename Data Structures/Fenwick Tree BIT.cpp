class FenwickTree {
private:
  vi ft;

public:
	FenwickTree(int n){
	   ft.assign(n + 1, 0);
	   //ft.assign(n + 1, INF);
	}

    void update(int k, int v) {                    // note: n = ft.size() - 1
		for (; k <= (int)ft.size(); k += (k & (-k))) 
			ft[k] += v; 
			//ft[k] = min(ft[k],v);
	}
  
	int read(int b) {                                     // returns RSQ(1, b) or RMQ(1,b)
		int res = 0; 
		//int res = INF;
		for (; b; b -= (b & (-b))) 
			res += ft[b];
			//res = min (res, ft[b]);
		return res; 
	}

	int read(int a,int b) {                                // returns RSQ(a, b) or RMQ(a,b)
		return read(b) - (a == 1 ? 0 : read(a - 1)); 
	}
	

};