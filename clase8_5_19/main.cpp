#include<iostream>

using namespace std;


/*
------------------------------------
-----------------------------------
PRIMERA PARTE
------------------------------------
-----------------------------------*/

class Objeto {
public:
	virtual ostream& print(ostream& o = cout)const  = 0; //al poner el virtual los objetos que hereden al hacer UPCAST usaran su propio metodo
													//el igual a cero lo hace una clase exacta
};

class Taza :public Objeto {
public:
	virtual ostream& print(ostream &o = cout)const { o << "soy una taza" << endl; return o; } //virtual no es necesario pero se pone por estilo
};
class TazaGrande :public Taza {
private:
	
public:
	virtual ostream& print(ostream &o = cout)const { o << "soy una taza goooorda" << endl; return o; } //no es necesario pero se pone por estilo
};
class Teteramini:public Taza {
private:

public:
	virtual ostream& print(ostream &o = cout)const { o << "soy una tetera chiquinina" << endl; return o; } //no es necesario pero se pone por estilo
};

void visualizar_objetos(const Objeto& ob) {
	ob.print();
}

//sobrecarga operador texto(<<)
ostream& operator<<(ostream& o, const Objeto& obj) {
	obj.print(o);
	return o;
}



/*
------------------------------------
-----------------------------------
SEGUNDA PARTE
------------------------------------
-----------------------------------*/


class Task {
public:
	virtual int run() = 0;

};

class PathFinding: public Task {

};

class Dijstra :public PathFinding {
	int run() { cout << "PATH FINDING DIJSTRA" << endl; return 0; }
};
class Bellman :public PathFinding {
	int run() { cout << "PATH FINDING BELLMAN" << endl;  return 0;
	}
};
class SanSegundo :public PathFinding {
	int run() { cout << "PATH FINDING SANSEGUNDO" << endl;  return 0;}
};

class Clique : public Task {
	int run() { cout << "CLIQUE JAPONES" << endl; return 0;}

};




//GESTOR

class TaskManager {
	Task* pt;

public:
	TaskManager(Task* pt_out) : pt(pt_out) { }
	int run() { return pt->run();}
};





















void main() {
	//Taza t;
	////Objeto o; //No se permite crear una instancia de una clase abstracta
	//TazaGrande tg;
	//Teteramini tetmin;

	//cout << t << tetmin << tg;

	////GESTOR
	//Objeto * l[3];
	//l[0] = new Taza;
	//l[1] = new Teteramini;
	//l[2] = new TazaGrande;

	////allocate memory
	//for (int i = 0; i < 3; i++) {
	//	l[i]->print();
	//}

	////deallocate memory
	//for (int i = 0; i < 3; i++) {
	//	delete l[i];				//problema solo llama al destructor base  //solucion poner virtual al destructor
	//}



	Dijstra d;
	   	  
	TaskManager tm(&d);

	tm.run();




	

	system("PAUSE");
	return;
}