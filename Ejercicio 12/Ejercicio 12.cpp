// Ejercicio 12.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const unsigned short int numbers[14] = { 100, 101, 103, 107, 130, 131, 132, 134, 135, 138, 139, 142, 144, 911 };
	char descriptions[14][54] = { "Bomberos", "Policia", "Defensa Civil", "Emergencia Medica", "ANSES", "Centro de informacion de la Policia Federal Argentina", "Lucha contra la drogadependencia", "Denuncias contra el trafico de drogas", "Asistencia al suicida", "PAMI escucha", "Emergencias PAMI", "Personas menores extraviadas", "Consejo nacional de la mujer", "Sistema de emergencias coordinadas" };
	cout << "Nro     Descripcion\n--------------------\n";
	for (int i = 0; i < 14; i++) {
		cout << numbers[i] << " ___ " << descriptions[i] << "\n";
	}
	system("pause");
    return 0;
}

