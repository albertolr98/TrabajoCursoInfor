#include<iostream>
#include"Punto.h"
#include"_PuntoBase.h"
#include"PuntoCol.h"
//#define UNIT_TEST_PUNTO
void imprimir(_PuntoBase* pb) { pb->print(); }

class Base {
public:
	int x;
	
	Base(int x = 0) :x(x) { ; }
	Base(const Base& b) { x = b.x; }
	Base& operator =(const Base& rhs) { this->x = rhs.x; return *this; }
};


class Derivada : public Base {
public:
	int y;
	Derivada() { y = 0; x = 10; }
	Derivada(const Derivada& d):Base(d) { y = d.y; }//upcast //si defino constructor copia en la derivada debo definirlo en la clase base
	Derivada& operator =(const Derivada& rhs);
};

Derivada & Derivada::operator=(const Derivada & rhs)
{
	//me copio
	if(this!= &rhs){
		//copio la parte derivada
		this->y = rhs.y;
		//copio la parte base
		Base::operator =(rhs);
	}

	return *this;
}


class Espada {
protected:
	void movimiento() { std::cout << "BLANDIR LA ESPADA" << std::endl; }
};

class Guerrero: private Espada {
public:
	void movimiento() { std::cout << "MUEVO EL GUERRERO" << std::endl; Espada::movimiento(); }
};
void main() {
//
//#ifdef UNIT_TEST_PUNTO
//	Punto p(3.15, 7.15, 100);
//	p.print();
//	p._PuntoBase::print();
//	//p.print<int>();
//#endif
//	PuntoCol p(_PuntoBase::CRUZ, _PuntoBase::AZUL, Punto(2, 4, 100));
//	p.print();
//	p.Punto::print();
//	p._PuntoBase::print();
//	imprimir(&p);

	Derivada d,d1;
	Derivada d2(d);
	d2 = d;

	Guerrero g;

	g.movimiento();

	std::cout << d1.x << std::endl;
	system("PAUSE");
}

