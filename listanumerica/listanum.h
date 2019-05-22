#pragma once
#include<sstream>

#define MAX_ELEM 100
using namespace std;
template<typename T,int N>
class ListaNum {
public:
	enum { EMPTY_POS = 0xFFFFFF };
	typedef size_t npos; //tipo para índices
private:
	int nElem;
	T lista[N];
public:
	//constructor apropiado…
		ListaNum() { clear(); }
	void push_back(T dato);
	T at(int pos);
	npos find(T elem);
	size_t size(); //nomenclatura típica
	void clear();
	//I/O
	string to_string();
	ostream& print(ostream&);
};