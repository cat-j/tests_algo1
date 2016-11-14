vector<int> reconstruye(vector<int> a) {
	vector<int> res;
	unsigned int n = a.size();
	unsigned int i = 0;

	while (i<n) {
		int h = a[i];
		while(h>0) {
			res.push_back(i);
			h--;
		}
		i++;
	}

	return res;
}