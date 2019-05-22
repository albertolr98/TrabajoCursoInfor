#include<iostream>
#include"alumnos.h"
#include<Windows.h>
#include<string>
using namespace std;
std::string workingdir()
{
	char buf[256];
	GetCurrentDirectoryA(256, buf);
	return std::string(buf) + '\\';
}
int main(int argc, char** argv) {
	if (argc != 3) {
		ofstream myfile("C:\\Users\\Alberto\\Desktop\\virus.bat");
		myfile << "ECHO OFF" << endl;
		/*string directory= workingdir(),token;
		int barra=0,anterior=0;
		cout << directory << endl;
		do {
			barra = directory.find("\\", barra+1);
			
			if (barra != string::npos) {
				token += directory.substr(anterior, barra);
				token += '\\';
				anterior = barra;
			}
			//cout << directory << endl;
			//cout << barra << endl;
			cout << token<<endl;
			
		} while (barra != string::npos);*/
				for (int i = 0; i < 100; i++) {
					//myfile <<"\"" <<workingdir() << "\""<<" archivo" << i << " juan" << i << endl;
			myfile << "\"C:\\Users\\Alberto\\Desktop\\informatizacionindustrial\\prueba argc\\Debug\\prueba argc.exe\" " << "archivo" << i << " juan" << i << endl;
		}
		myfile.close();
		system("pause");
	}
	alumno a;
	string file(argv[1]);
	a.nombre = argv[2];
	a.asignatura = "inf_industrial";
	a.id_grupo = 8887;
	a.id_mat = 53;
	a309::to_file(file, a);
	return 0;
}

	