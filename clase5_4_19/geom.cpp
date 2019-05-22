#include"geom.h"
#include<iostream>
using namespace std;
double Triangulo::area() const {
	return (base*altura) / 2;
}
double Circulo::area() const {
	return PI * radio*radio;
}
double Cuadrado::area() const {
	return lado * lado;
}
double Geom::area() {
	if (pcu != NULL) {
		return pcu->area();
	}
	if (pt != NULL) {
		return pt->area();
	}
	if (pcir != NULL) {
		return pcir->area();
	}
}