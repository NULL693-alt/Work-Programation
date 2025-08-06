#include <iostream>
#include "Operaciones.h"
using namespace std;

int main(){

	int x = 10;
	int y = 4;

	cout << "El resultado de la suma es: " << sumar(x, y) << endl;

	cout << "El resultado de la resta es: " << resta(x, y) << endl;

	cout << "El resultado de la multiplicacion es: " << multiplicacion(x, y) << endl;

	cout << "El resultado de la divison es: " << division(x, y) << endl;

	return 0;
}