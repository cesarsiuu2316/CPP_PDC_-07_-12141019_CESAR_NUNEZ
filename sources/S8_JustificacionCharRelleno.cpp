#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int x = 10000;
	cout << x << " impreso como int justificado a la derecha y a la "
		<< "izquierda\n y como hex con justificacion interna.\n"
		<< "Uso del caracter de relleno predeterminado(espacio):\n";
	cout << showbase << setw(10) << x << '\n';
	cout << left << setw(10) << x << "X" << endl;
	cout << internal << setw(10) << hex << x << "\n\n";
	cout << "Uso de varios caracteres de relleno:\n";
	cout << right;
	cout.fill('*');
	cout << setw(10) << dec << x << '\n';
	cout << left << setw(10) << setfill('%') << x << '\n';
	cout << internal << setw(10) << setfill('^') << hex << x << '\n';
}