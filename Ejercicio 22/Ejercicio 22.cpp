// Ejercicio 22.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Bienvenido al banco Supervilla. Por favor indique la suma que quiere solicitar.\n>>>";
	long float C;
	const float i = .2823;
	cin >> C;
	cout << "El interes es de un 28.23% anual. En cuantas cuotas mensuales quiere solicitar su prestamo?\n>>>";
	float n;
	cin >> n;
	float equivalent = i / 12;
	cout << "Puede pagar su prestamo de " << C << " en " << n << " cuotas de " << C / n * (1 + equivalent) << ", igualando un total de " << C * (1 + (equivalent * n)) << ".\n";
	system("pause");
    return 0;
}

