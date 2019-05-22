#pragma once
#define PI       3.14159265358979323846
#include<iostream>
class Triangulo {
private:
	double base;
	double altura;
public:
	Triangulo(double b, double a) :base(b), altura(a) { ; }
	double area() const;
};

class Circulo {
private:
	double radio;
public:
	Circulo(double r) : radio(r) { ; }
	double area() const;
};
class Cuadrado {
private:
	double lado;

public:
	Cuadrado(double l) :lado(l) { ; }
	double area() const;
};


class Geom {
private:
	const Triangulo* pt;
	const Cuadrado* pcu;
	const Circulo* pcir;
public:
	Geom(Cuadrado* c) :pcu(c), pt(NULL), pcir(NULL) { ; }
	Geom(Triangulo* t) :pcu(NULL), pt(t), pcir(NULL) { ; }
	Geom(Circulo* ci) :pcu(NULL), pt(NULL), pcir(ci) { ; }
	double area();
};

