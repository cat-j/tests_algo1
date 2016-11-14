int cantMenores(int a[], int e, int n) {
	int contador = 0;
	int i = 0;

	while (i<n) {
		if (a[i]<e) {
			contador++;
		}
		i++;
	}
	return contador;
}

int tieneKmenores(int a[], int n, int k) {
	bool encontreUno = false;
	int res;
	int i = 0;

	while (i<n && !encontreUno) {
		int actual = a[i];
		if (cantMenores(a,actual,n) == k) {
			res = actual;
			encontreUno = true;
		}
		i++;
	}

	return res;
}

String maximoPuntaje(vector<pair<String,int>> a, int init, int fin) {
	String res = a[init].first;
	int maxActual = a[init].second;
	int i = init;

	while(i<fin-1) {
		i++;
		pair<String,int> actual = a[i];
		int puntajeActual = actual.second;

		if (puntajeActual>maxActual) {
			maxActual = puntajeActual;
			res = actual.first;
		}
	}

	return res;
}

vector<String> kPrimeros(vector<pair<String,int>> a, int k) {
	vector<String> res;
	int i = 0;

	while(i<k) {
		res.push_back(maximoPuntaje(a,i,n));
		i++;
	}

	return res;
}

bool sonAnagramas (int a[], int n, int b[], int m) {
	int cantidades_a[256];
	int cantidades_b[256];

	while (i<n) {
		int actual_a = a[i];
		int actual_b = b[i];

		cantidades_a[actual_a]++;
		cantidades_b[actual_b]++;

		i++;
	}

	int j = 0;

	while(j<256) {
		if (cantidades_a[j] != cantidades_b[j]) {
			return false;
		}
		j++;
	}

	return true;
}