#include<iostream>
#include"globals.h"

using namespace std;
class PRUEBA {
	friend class juanito_valderrama;
	int estado;

public:
	PRUEBA(int e) :estado(e) { ; }
};

class juanito_valderrama {
	friend int fooo();
public:
	int triturar_PRUEBA(PRUEBA& P) { P.estado = 0; return 0; }
};

//patron singleton


void main() {
	cout<<Triangulo_global.area()<<endl;

	PRUEBA P(10);
	juanito_valderrama juanito;

	juanito.triturar_PRUEBA(P);

	system("pause");
	return ;
}     