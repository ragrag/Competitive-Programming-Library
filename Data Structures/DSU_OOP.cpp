
class SegmentTree {         // the segment tree is stored like a heap array
private: vector <int> st, data;            
  int n;

  void build(int v, int start, int end) {                           
    if (start == end)                          
      st[v] = data[start];                                        
    else {                                
      int mid = (start + end) / 2;
      build(v*2 , start , mid);
      build((v*2)+1, mid+1, end );
		st[v] = st[v*2] + st[v*2+1];			//RSQ
		//st[v] = max(st[v*2] , st[v*2+1]); //RMQ
  } }
  
int query (int v, int start, int end, int l, int r) {
	if (l > r)
		return 0;
	if (l == start && r == end)
		return st[v];
	int mid = (start + end) / 2;
	return query (v*2, start, mid, l, min(r,mid))		//RSQ
		+ query (v*2+1, mid+1, end, max(l,mid+1), r);
	
	//return  max(query (v*2, start, mid, l, min(r,mid))	//RMQ
	//	, query (v*2+1, mid+1, end, max(l,mid+1), r));
}
  void update (int v, int start, int end, int pos, int new_val) {
	if (start == end)
		st[v] = new_val;
	else {
		int mid = (start + end) / 2;
		if (pos <= mid)
			update (v*2, start, mid, pos, new_val);
		else
			update (v*2+1, mid+1, end, pos, new_val);
		st[v] = st[v*2] + st[v*2+1];
	}
}

public:
  SegmentTree(const vector <int> &_data) {
    data = _data; n = (int)data.size();              // copy content for local usage
    st.assign(4 * n, 0);            // create large enough vector of zeroes
    build(1, 0, n - 1);                                  // recursive build
  }

  int query(int i, int j) { return query(1, 0, n - 1, i, j); }   // overloading

  void update(int idx, int new_value) {
    return update(1, 0, n - 1, idx, new_value); }
};