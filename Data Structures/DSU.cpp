

vector <int> st;

void build (vector <int> ar, int v, int start, int end) {
	if (start == end)
		st[v] = ar[start];
	else {
		int mid = (start + end) / 2;
		build (ar, v*2, start, mid);
		build (ar, v*2+1, mid+1, end);
		st[v] = st[v*2] + st[v*2+1];			//RSQ
		//st[v] = max(st[v*2] , st[v*2+1]); //RMQ
	}
}

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
		st[v] = st[v*2] + st[v*2+1];		//RSQ
		//t[v] = max(t[v*2] , t[v*2+1]); //RMQ
	}
}


void init(vector <int> data)
{
st.assign(4*data.size(),0);
build(data , 1 , 0 , data.size()-1);
}