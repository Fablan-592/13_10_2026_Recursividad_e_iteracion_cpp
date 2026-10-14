#include <iostream>
using namespace std; 

int sumarecursiva(int n) {
	if (n <= 9)
		return n;
	else
		return sumarecursiva(n / 10) + n % 10;
}

int sumaiterativa(int n) {
	int suma = 0;
	while (n > 9) {
		suma += n % 10;
		n /= 10; 
	}
	return (suma + n);
}

int main() {
	int n = 0;
	int i = 0;
	int j = 0;
	cout << "Ingrese la cantidad de numeros a iterar: ";
	cin >> j;
	for (i = 0; i < j; i++) {
		cout << "Ingrese el numero " << i + 1 << ": ";
		cin >> n;
		cout << endl;
		cout << endl << "Suma iterativa: ";
		sumaiterativa(n);
		cout << sumaiterativa(n);
		cout << endl << "Suma recursiva: ";
		sumarecursiva(n);
		cout << sumarecursiva(n);
		cout << endl;
	}

	return 0; 
}