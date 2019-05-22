#include<iostream>


class moto {
public:
	int nR;
	int* ruedas;
public:
	moto(int nRuedas) :nR(nRuedas) {
	std::cout << "hola" << std::endl;
		ruedas = new int[nR]; 
		for (int i = 0; i < nR; i++) {
			ruedas[i] = 1;
		}
	}
	~moto() { delete[] ruedas; }
	moto(const moto& moto) { std::cout << "copia" << std::endl; };
};

//moto::moto(const moto& moto) {
//	//deep copy of ruedas
//	this->nR = moto.nR;
//	
//	this->ruedas = new int[this->nR];
//	for (int i = 0; i < this->nR; i++) {
//		this->ruedas[i] = moto.ruedas[i];
//	}
//}
int main() {
	moto mi_kawasaki(3);
	moto mi_yamaha=mi_kawasaki;
	
	std::cout << mi_yamaha.nR << std::endl;
	system("Pause");
	return 0;
}

