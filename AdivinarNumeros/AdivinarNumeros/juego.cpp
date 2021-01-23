#include "juego.h"
#include "jugador.h"
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <stdlib.h>


juego::juego()
{
	juegoActivo = true;

	jugador1 = 0;
	jugador2 = 0;
	intentos = 3;
}
void juego::menu() {
	cout << "Bienvenido a Adivina el numero" << "\n";
	cout << "1. Un Jugador" << "\n";
	cout << "2. Dos Jugadores" << "\n";
	cout << "3. Cambiar numero de intentos" << "\n";
	cout << "4. Salir" << "\n";
}


void juego::salir()
{
	exit(0);
}

int juego::numeroIntentos() {
	cout << "Elija el numero de intentos del 1 al 10" << "\n";
	int inten;
	cin >> inten;
	intentos = inten;
	return intentos;
}

void juego::sologame(int numerorandom) {
	jugador jugador1;
	jugador1.setNombre();
	string nombre = jugador1.getNombre();
	int respuesta;
	int i = intentos;
	while ( i!= 0)
	{
		cout << "Muy bien " << nombre << " tienes " << i << " intentos." << "\n" << "Adivina el numero!" << "\n";
		cin >> respuesta;
		if (respuesta > numerorandom)
		{
			cout << "Menos" << "\n";
		}
		else if (respuesta < numerorandom) {
			cout << "Mas" << "\n";
		}
		else {
			cout << "Ganaste" << "\n";
			system("pause");
			exit(0);
		}
		i--;
	}
	cout << "Perdiste" << "\n";
}

void juego::duogame(int numerorandom) {
	jugador jugador1;
	jugador1.setNombre();
	string nombre1 = jugador1.getNombre();
	jugador jugador2;
	jugador2.setNombre();
	string nombre2 = jugador2.getNombre();
	int respuesta;
	int i = intentos;
	while (i != 0)
	{
		cout << "Muy bien " << nombre1 << " es tu turno, tienes " << i << " intentos." << "\n" << "Adivina el numero!" << "\n";
		cin >> respuesta;
		if (respuesta > numerorandom)
		{
			cout << "Menos" << "\n";
		}
		else if (respuesta < numerorandom) {
			cout << "Mas" << "\n";
		}
		else {
			cout << "Ganaste" << "\n";
			system("pause");
			exit(0);
		}
		cout << "Muy bien " << nombre2 << " es tu turno, tienes " << i << " intentos." << "\n" << "Adivina el numero!" << "\n";
		cin >> respuesta;
		if (respuesta > numerorandom)
		{
			cout << "Menos" << "\n";
		}
		else if (respuesta < numerorandom) {
			cout << "Mas" << "\n";
		}
		else {
			cout << "Ganaste" << "\n";
			system("pause");
			exit(0);
		}
		i--;
	}
	cout << "Perdiste" << "\n";
}
