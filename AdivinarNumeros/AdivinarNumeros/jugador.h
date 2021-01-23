#pragma once
#include <iostream>
#include <string>

using namespace std;

class jugador
{
private:
	string nombre;
public:
	jugador();
	void setNombre();
	string getNombre() { return nombre;  };
};

