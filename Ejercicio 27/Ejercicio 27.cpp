// Ejercicio 27.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float N;
	const float OG = 5;
	float people;
	cout << "En cuantos dias " << OG << " programadores desarrollan una aplicacion?\n>>>";
	cin >> N;
	cout << "Cuantos programadores preferiria tener?\n>>>";
	cin >> people;
	cout << people << " programadores desarrollarian una aplicacion en " << OG / people * N << " dias\n";

	system("pause");
    return 0;
}

