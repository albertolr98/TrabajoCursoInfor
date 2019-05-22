#include<iostream>
#include<stdlib.h>
#include<string>

#include"mat.h"//dependencia mia de la libreria matematicas

using namespace std;
using namespace apple;
using namespace apple::matematicas;
using namespace apple::matrices;

string* tokenizer(string& str, string* tokens);
//extraer nombre de un archivo dado como "/gfgkljgls/jvkhdfkghks/broq.cql"->broq.cql
//funcion para cambiar los / por \
int main() {
	
	string str("mi abuela");
	cout<<str.find("abuelia", 0, 6)<<endl;
	cout << string::npos<<endl;
	
	system("pause");
	return 0;
}
