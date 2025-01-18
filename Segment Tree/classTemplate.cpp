class SGTree {
private:
	vector<int> seg;
public:
	SGTree(int n) {
		// vector<int> seg(4*n, INT_MAX);
		seg.resize(4*n);
	}
	void build(int ind, int low, int high, vi &arr) {
		if(low == high) {
			seg[ind] = arr[low];
			return;
		}

		int mid = (low + high) / 2;
		build(2*ind+1, low, mid, arr);
		build(2*ind+2, mid+1, high, arr);
		seg[ind] = min(seg[2*ind+1], seg[2*ind+2]);
	}

	int query(int ind, int low, int high, int l, int r) {
		// completely lie
		if(low >= l && high <= r) return seg[ind];

		// no overlap
		if(high < l || low > r) return INT_MAX;

		// partially overlap
		int mid = (low + high) / 2;
		int left = query(2*ind+1, low, mid, l, r);
		int right = query(2*ind+2, mid+1, high, l, r);
		return min(left, right);
	}

	// set seg[p] = u 
	void pointUpdate(int ind, int low, int high, int p, int u) {

		if(p < low || p > high) return;
		if(low == high) {
			seg[ind] = u;
			return;
		}

		int mid = (low + high) / 2;
		if(p <= mid)
			pointUpdate(2*ind+1, low, mid, p, u);
		else 
			pointUpdate(2*ind+2, mid+1, high, p, u);
		seg[ind] = min(seg[2*ind+1], seg[2*ind+2]);
	}
};

// usage
void jayant() {
 
	int i, j, k, n, m, sum = 0;
	string s;

	cin >> n >> k;
	vi arr(n); cin >> arr;

	SGTree sg(n);

	sg.build(0, 0, n-1, arr);

	while(k--) {
		int q, l, r; cin >> q >> l >> r;

		if(q == 1)
			sg.pointUpdate(0, 0, n-1, l-1, r);
		else
			cout << sg.query(0, 0, n-1, l-1, r-1) << endl;
	}
}