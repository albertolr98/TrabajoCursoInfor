#include"alumnos.h"




namespace a309 {
	

	string to_string(const alumno& a) {
		string res;
		//formato nombre
		string nombre = "nombre: ";
		nombre += a.nombre;
		nombre += '\n';
		//formato apellido
		string asignatura = "asignatura: ";
		asignatura += a.asignatura;
		asignatura += '\n';
		//formato matricula
		string matricula="matricula: ";
		stringstream sstr;
		sstr << a.id_mat;
		matricula += sstr.str();
		matricula += '\n';
		//id grupo
		string grupo = "grupo: ";
		stringstream sstr_grupo;
		sstr_grupo << a.id_grupo;
		grupo += sstr_grupo.str();
		grupo += '\n';
		//final
		res += nombre;
		res += asignatura;
		res += matricula;
		res += grupo;
		return res;
	}
	//otros elementos del interfaz
	void clear_alumno(alumno& a) {
		a.nombre = "";
		a.asignatura = "";
		a.id_mat = 0;
		a.id_grupo = 0;
	}
	int read_alumno(alumno& a) {
		cout << "Introduzca:<Nombre><Asignatura><ID_grupo><ID_mat>" << endl;
		do {
			clear_alumno(a);
			cin.clear();
			cin >> a.nombre >> a.asignatura >> a.id_grupo >> a.id_mat;

			
			if (!cin) {
				cout << "introduzca bien los datos" << endl;
				fflush(stdin);
			}
			
		} while (!cin);
		return 0;
	}
	int to_file(string filename, const alumno& str) {
		ofstream myfile;
		myfile.open(filename);
		if (!myfile) { return -1; }
		myfile << to_string(str);
		myfile.close();
		return 0;
	}
	int from_file(string filename, alumno& str) {
		string token;
		ifstream myfile;
		myfile.open(filename);
		if (!myfile.good()) {
			cout << "Error al abrir el fichero" << endl;
			return 1;
		}
		do {
			myfile >> token >> str.nombre>> token;
			myfile >> token >> str.asignatura;
			myfile >> token >> str.id_mat;
			myfile >> token >> str.id_grupo;
		} while (!myfile.eof());
		myfile.close();
		return 0;
	}
}
