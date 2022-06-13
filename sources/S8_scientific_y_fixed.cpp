#include <iostream>
using namespace std;
int main() {
	double x = 0.001234567;
	double y = 1.946e9;
	cout << "Mostrados en el formato predeterminado:\n" << x << '\t' << y << '\n';
	cout << "\nMostrados en el formato cientifico:\n" << scientific << x << '\t' << y << '\n';
	cout << "\nMostrados en formato fijo:\n" << fixed << x << '\t' << y << '\n';
}