#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double raiz2 = sqrt(2.0);
	int posiciones;
	cout << "Raiz cuadrada de 2 con precisiones de 0 a 9." << endl 
		<< "Precision establecida mediante la funcion miembro precision "
		<< "de ios_base:" << endl;
	cout << fixed;
	for (posiciones = 0; posiciones <= 9; ++posiciones) {
		cout.precision(posiciones); // la cantidad de decimales que muestra
		cout << raiz2 << endl;
	}
	cout << "\nPrecision establecida por el manipulador de flujo setpresicion: " << endl;
	for (posiciones = 0; posiciones <= 9; ++posiciones)
		cout << setprecision(posiciones) << raiz2 << endl; // la cantidad de decimales que muestra
}