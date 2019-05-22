#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
using namespace std;
struct alumno {
	string nombre;
	string asignatura;
	int id_mat;
	int id_grupo;
};

namespace a309 {
	string to_string(const alumno& a);
	//otros elementos del interfaz
	int read_alumno(alumno& a);
	void clear_alumno(alumno& a);
	int to_file(string filename, const alumno& str);
	int from_file(string filename, alumno& str);
}
