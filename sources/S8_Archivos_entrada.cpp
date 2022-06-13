#include<iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
	ifstream archivoClientesEntrada("./clientes.txt", ios::in);
	if (!archivoClientesEntrada) {
		cerr << "No se pudo abrir el archivo\n";
		exit(EXIT_FAILURE);
	}
	int cuenta;
	string nombre;
	double saldo;
	cout << left << setw(10) << "Cuenta" << setw(13) 
		<< "Nombre" << "Saldo" << '\n' << fixed << showpoint;
	while (archivoClientesEntrada >> cuenta >> nombre >> saldo) {
		cout << left << setw(10) << cuenta << setw(13) 
			<< nombre << setw(7) << setprecision(2) << right << saldo << '\n';
	}
}