#include "Punto.h"

std::ostream & Punto::print(std::ostream & o) const
{
	_PuntoBase::print(o);
	o << "[" << x << "," << y << "]";
	return o;
}

template<class U>
std::ostream & Punto::print(std::ostream & o) const
{
	_PuntoBase::print(o);
	o << "[" << static_cast<U>(x) << "," << static_cast<U>(y) << "]";
	return o;
}
