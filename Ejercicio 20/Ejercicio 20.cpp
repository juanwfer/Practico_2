// Ejercicio 20.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double ARS;
	cout << "Ingrese una suma en ARS\n>>>";
	cin >> ARS;
	const double USD = 20.2265372, EUR = 25.0111246, GBP = 28.2445388;
	cout << ARS << " pesos equivalen a " << ARS / USD << " dolares, " << ARS / EUR << " euros o " << ARS / GBP << " libras\n";
	system("pause");
    return 0;
}

