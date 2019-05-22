#include "PuntoCol.h"
#include<string>
std::ostream & PuntoCol::print(std::ostream & o) const
{
	Punto::print(o);
	o <<" "<< to_string(r) <<" " <<to_string(c)<< std::endl;
	return o;
}
