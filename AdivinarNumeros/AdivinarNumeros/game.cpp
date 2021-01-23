#include "game.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "juego.h"
#include "numrandom.h"

game::game() {

}

void game::iniciandogame() {
	juego juego;
	numrandom numrandom;
	int numerorandom = numrandom.crearnumrandom();

	juego.menu();

	int eleccion;
	cin >> eleccion;
	system("cls");

	switch (eleccion)
	{
	case 1:			juego.sologame(numerorandom);					break;
	case 2:			juego.duogame(numerorandom);					break;
	case 3: {
		juego.numeroIntentos();
		system("cls");
		juego.menu();

		int eleccion;
		cin >> eleccion;
		system("cls");
		switch (eleccion)
		{
		case 1:			juego.sologame(numerorandom);					break;
		case 2:			juego.duogame(numerorandom);					break;
		case 3: {
			juego.numeroIntentos();
			system("cls");
			juego.menu();
			cout << juego.getIntentos() << "\n";

			int eleccion;
			cin >> eleccion;
			system("cls");



		}							break;
		case 4:			juego.salir();									break;
		default: {
			cout << "Elija un numero del 1 al 4" << "\n";
			system("pause");
			system("cls");
			iniciandogame();
		}		break;
		}
	
	
	}							break;
	case 4:			juego.salir();									break;
	default: {
		cout << "Elija un numero del 1 al 4" << "\n";
		system("pause");
		system("cls");
		iniciandogame();
	}		break;
	}
}