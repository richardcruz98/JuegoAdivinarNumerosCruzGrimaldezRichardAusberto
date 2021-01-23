#include "jugador.h"

jugador::jugador(){
	nombre = "";
}

void jugador::setNombre() {
	string name;
	cout << "Cual es su nombre?" << "\n";
	cin >> name;
	nombre = name;
	system("cls");
}