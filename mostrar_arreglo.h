#ifndef __MOSTRAR__
#define __MOSTRAR__

#include <iostream>
#include <vector>
using namespace std;

template<class T>
void mostrarArreglo(T a[], int n) {
	int i = 0;

	cout << "[";

	while (i<n) {
		cout << a[i] << " ";
		i++;
	}

	cout << "]" << endl;
}

template<class T>
void mostrarVector(vector<T> v) {
	unsigned int n = v.size();
	unsigned int i = 0;

	cout << "[";

	while (i<n) {
		cout << v[i] << " ";
		i++;
	}

	cout << "]" << endl;
}

#endif