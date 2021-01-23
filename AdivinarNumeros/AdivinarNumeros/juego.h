#pragma once
#include <iostream>
#include <string>
#include "jugador.h"

using namespace std;

class juego
{
private:
	bool juegoActivo;
	jugador* jugador1;
	jugador* jugador2;
	int intentos;

public:
	juego();
	void menu();
	void sologame(int);
	void duogame(int);
	int numeroIntentos();
	int getIntentos() { return intentos; };
	void salir();
};