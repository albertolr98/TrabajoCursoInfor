#pragma once
#include "_PuntoBase.h"
class Punto :	public _PuntoBase
{
	double x;
	double y;
public:
	Punto(double x = 0.0, double y = 0.0, int id = 1) :x(x), y(y), _PuntoBase(id) {}
	Punto(const Punto& p, int id_out):x(p.x),y(p.y),_PuntoBase(id_out){}
	void set_id(int id_new) { id = id_new; }

	std::ostream& print(std::ostream& o = std::cout)const;
	template <class U>
	std::ostream& print(std::ostream& o = std::cout)const;
};

