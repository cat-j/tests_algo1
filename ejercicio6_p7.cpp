#include <math.h>

int maximo(int a[], int n) {
	int res = a[0];
	int i = 0;

	while (i<n-1) {
		i++;
		if (a[i]>res) {
			res = a[i];
		}
	}
	return res;
}

int posMin(int a[], int n) {
	int res = 0;
	int i = 0;

	while(i<n-1) {
		i++;
		if (a[i]<a[res]) {
			res = i;
		}
	}

	return res;
}

void kMax(int a[], int n, int res[], int k) {
	int i = 0;

	//almacena los primeros k elementos del arreglo
	while (i<k) {
		res[i] = a[i];
		i++;
	}

	//reemplaza el menor de los k elementos por el primer elemento mayor que encuentre
	while (i<n) {
		int actual = a[i];
		int posMinActual = posMin(res,k);
		int minActual = res[posMinActual];
		if (actual > minActual) {
			res[posMinActual] = actual;
			cout << actual << " es mayor que " << minActual << endl;
		}
		mostrarArreglo(res,k);
		i++;
	}

}

void kMaxHasta100(int a[], int n, int res[], int k) {
	int valores[100];
	int i = 0;

	for (int j = 0; j<100; j++) {
		valores[j] = 0;
	}

	while (i<n) {
		int actual = a[i];
		valores[actual-1]++;
		i++;
	}

	int j = 99;
	i = 0;

	while (j>=0 && i<k) {
		int cantActual = valores[j];
		if (cantActual > 0) {
			int h = 0;
			while (h < cantActual) {
				res[i] = j+1;
				h++;
				i++;
			}
		}
		j--;
	}
}

bool esPrimo(int n) {
	if (n <= 1) {
		return false;
	}

	bool res = true;
	int i = 2;

	while (pow(i,2) <= n) {
		if (n%i == 0) {
			res = false;
		}
		i++;
	}
	return res;
}

vector<int> baseBinaria(int n) {
	vector<int> res;

	while (n > 0) {
		res.push_back(n%2);
		n = n/2;
	}

	return res;
}

int baseDecimal(vector<int> b) {
	int res = 0;
	unsigned int n = b.size();
	unsigned int i = 0;

	while (i<n) {
		res += pow(2,i) * b[i];
		i++;
	}

	return res;
}

vector<int> subarrMayorSuma(vector<int> a) {
	int start = 0, end = 0;
	int mayorSuma = a[0];
	unsigned int n = a.size();
	unsigned int i = 0;

	while (i<n) {
		int j = i;
		int sumaActual = a[i];

		while (j<n) {
			if (j > i) {
				sumaActual += a[j];
			}

			if (sumaActual >= mayorSuma) {
				mayorSuma = sumaActual;
				start = i;
				end = j;
			}
			j++;
		}
		i++;
	}

	vector<int> res;
	int k = start;

	while (k<=end) {
		res.push_back(a[k]);
		k++;
	}

	return res;
}