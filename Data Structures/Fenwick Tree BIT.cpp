class FenwickTree {
private:
  vi ft;

public:
  FenwickTree(int n) { ft.assign(n + 1, 0); }

    void adjust(int k, int v) {                    // note: n = ft.size() - 1
    for (; k <= (int)ft.size(); k += (k & (-k))) 
		ft[k] += v; 
		}
  
  int rsq(int b) {                                     // returns RSQ(1, b)
    int sum = 0; 
	for (; b; b -= (b & (-b)) 
		sum += ft[b];
    return sum; 
	}

  int rsq(int a,int b) {                                // returns RSQ(a, b)
    return rsq(b) - (a == 1 ? 0 : rsq(a - 1)); 
	}
	

};