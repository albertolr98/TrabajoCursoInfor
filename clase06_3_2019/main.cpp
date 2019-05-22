#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
#include"alumnos.h"
using namespace std;
/*int tokenizer(std::string& str, std::string* tokens) {
	int i = 0, old_pos = 0;
	size_t pos = str.find_first_of(" ");
	while (pos != std::string::npos) {
		tokens[i++];//falta programa
	}
	return 0;
}
void print_state(const std::ios& stream) {
	std::cout << "good()= " << stream.good()<<std::endl;
	std::cout << "eof()= " << stream.eof()<<std::endl;
	std::cout << "fail()= " << stream.fail()<<std::endl;
	std::cout << "bad()= " << stream.bad()<<std::endl;
	
}
struct dim_t {
	int n;
	int m;
};
dim_t get_dim(){
	dim_t key_dim;
	do {
		cin.clear();
		cout << "Introduzca dos numeros por teclado" << endl;
		cin >> key_dim.n >> key_dim.m;
		fflush(stdin);
	} while (!cin);
	return key_dim; 
}*/

using namespace a309;

int main(int argc, char**argv) {
	alumno a;
	a.nombre = "diego";
	a.asignatura = "inf_ind";
	a.id_mat = 56556;
	a.id_grupo = 1;
	//check parametros
	if (argc != 2) {
		cout << "Introduzca el nombre del archivo" << endl;
		return -1;
	}

	string file = "pene.txt";
	a.nombre = argv[2];
	to_file(file, a);
	/*a.nombre = "Juan";
	a.asignatura = "Matematicas";
	a.id_grupo = 53316;
	a.id_mat=53315;*/
	/*from_file("penedemono.txt", a);
	cout << to_string(a) << endl;*/
	


	/*//int l[100];
	int hola;
	std::vector<int>l;
	l.push_back(10);//añade un elemento al vector creado en la linea anterior
	l.push_back(12);
	l.push_back(27);
	l.pop_back();//elimina el ultimo elemento del vector
	cin >> hola;
	l.push_back(hola);

	for (int i = 0; i < l.size(); i++) {
		cout << l[i] << " ";
	}*/



	/*int x, y;
	std::cin >> x >> y;
	print_state(std::cin);*/


	/*cout << "introduzca tres numeros" << endl;
	int a, b, c;
	if (cin >> a >> b >> c) {
		cout << "la suma es:" << a+b+c <<endl;
	}*/
	
	/*stringstream sstr;
	string cadena="juan";
	sstr << "soy " << cadena;
	cout << sstr.str();*/

	system("pause");
	return 0;
}