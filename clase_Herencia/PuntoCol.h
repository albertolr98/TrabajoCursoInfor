#pragma once
#include "Punto.h"
class PuntoCol :
	public Punto
{
	rep_t r;
	col_t c;
public:
	PuntoCol(rep_t r, col_t c, const Punto& p) :r(r), c(c), Punto(p){}
	std::ostream& print(std::ostream& o = std::cout)const;
};

