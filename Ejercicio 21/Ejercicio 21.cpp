// Ejercicio 21.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double a, b;
	cout << "Ingrese un numero real\n>>>";
	cin >> a;
	cout << "\nIngrese otro\n>>>";
	cin >> b;
	cout << a << " + " << b << " = " << a + b << "\n" << a << " - " << b << " = " << a - b << "\n" << a << " * " << b << " = " << a * b << "\n";
	system("pause");
    return 0;
}

