#pragma once
#include<iostream>

class _PuntoBase
{
public:
	enum rep_t { CRUZ = 0, ESTRELLA, CIRCULO };
	enum col_t{AZUL=0,BLANCO,NEGRO};
	static std::string to_string(rep_t);
	static std::string to_string(col_t);
protected:
	int id;
	_PuntoBase(int id_out) :id(id_out) {}
public:
	//interfaz 
	
	
	std::ostream& print(std::ostream& o = std::cout)const;


	
};

