// Ejercicio 19.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned long int seconds;
	cout << "Ingrese una cantidad de segundos\n>>>";
	cin >> seconds;
	cout << seconds << " segundos equivalen a " << seconds / 3600 << " horas, " << (seconds % 3600) / 60 << " minutos y " << seconds % 60 << " segundos.\n";
	system("pause");
    return 0;
}

