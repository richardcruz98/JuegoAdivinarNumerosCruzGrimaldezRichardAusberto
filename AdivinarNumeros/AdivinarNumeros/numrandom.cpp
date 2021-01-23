#include "numrandom.h"
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <time.h>

numrandom::numrandom() {
	numeroaleatorio = 0;
}

int numrandom::crearnumrandom() {
	srand(time(NULL));
	numeroaleatorio = 1 + rand() % (101-1);
	return numeroaleatorio;
}
