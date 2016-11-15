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

unsigned int pivote(vector<int> a) {
	int i = 0;
	unsigned int n = a.size();

	while (i<n-1 && a[i] <= a[i+1]) {
		i++;
	}

	return i;
}

vector<int> dosMitades(vector<int> a) {
	vector<int> res;
	unsigned int n = a.size();
	unsigned int m = pivote(a);
	unsigned int i = 0;
	unsigned int j = m+1;

	while (i<=m && j<n) {
		if (a[i]<a[j]) {
			res.push_back(a[i]);
			i++;
		} else {
			res.push_back(a[j]);
			j++;
		}
	}

	if (j<n) {
		unsigned int h = j;
		while (h<n) {
			res.push_back(a[h]);
			h++;
		}
	} else if (i<=m) {
		unsigned int h = i;
		while (h<=m) {
			res.push_back(a[h]);
			h++;
		}
	}

	return res;
}
