#include "Lista.h"


void Lista::pushback(int num) {
	this->nelem += 1;
	this->siguiente = new Lista(num);
}