#include <cstdlib>
#include "mostrar_arreglo.h"
#include "ejercicio6_p7.cpp"
#include "parciales.cpp"

int main() {
	// int myArr[30];
	// for (int i = 0; i<30; i++) {
	// 	myArr[i] = rand()%100 + 1;
	// }

	// mostrarArreglo(myArr,30);

	// for (int i=0; i<30; i++) {
	// 	cout << "esPrimo(" << myArr[i] << "): " << esPrimo(myArr[i]) << endl;
	// }

	// vector<int> myVec;
	// for (int i = 0; i<10; i++) {
	// 	myVec.push_back( rand()%100 - 50 );
	// }

	// mostrarVector(myVec);
	// mostrarVector(subarrMayorSuma(myVec));

	int myArr[8] = {3, 4, 6, 1, 5, 0, 2, 8};

	cout << tieneKmenores(myArr, 8, 7) << endl;

	return 0;
}