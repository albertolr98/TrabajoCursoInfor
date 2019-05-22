#pragma once
#include<iostream>
class Lista
{
private:
	Lista* siguiente;
	int numero;
	int nelem;
public:
	Lista() :siguiente(NULL), numero(0){}
	Lista(int num) :siguiente(NULL), numero(num) {}
	~Lista();
	void pushback(int);
};

