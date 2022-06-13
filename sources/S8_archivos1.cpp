#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main() {
	ofstream archivoClientesSalida("clientes.txt", ios::out); // out abre el archivo en modo salida
	if (!archivoClientesSalida) {
		cerr << "No se pudo abrir el archivo\n";
		exit(EXIT_FAILURE);
	}
	cout << "Escriba la cuenta, nombre y saldo.\n" 
		<< "Escriba fin de archivo para terminar la entrada.\n? ";
	int cuenta;
	string nombre;
	double saldo;
	while (cin >> cuenta >> nombre >> saldo) {
		archivoClientesSalida << cuenta << ' ' << nombre << ' ' << saldo << '\n';
		cout << "? ";
	}
}