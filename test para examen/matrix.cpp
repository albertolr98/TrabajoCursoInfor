#include"matrix.h"

Matrix::Matrix(int Nfil,int Mcol):N(Nfil),M(Mcol) {
	this->pm = new int*[this->N];
	for (int i = 0; i < this->N; i++) {
		this->pm[i] = new int[this->M];
	}

	for (int i = 0; i < this->N; i++) {
		for (int j = 0; j < this->M; j++) {
			this->pm[i][j] = 0;
		}
	}

}

Matrix::~Matrix() {
	for (int i = 0; i < this->N; i++) {
		delete[] this->pm[i];
	}
	delete[] this->pm;
}
std::ostream& Matrix::print(std::ostream& o) {
	for (int i = 0; i < this->N; i++) {
		for (int j = 0; j < this->M; j++) {
			o <<pm[i][j]<<" ";
		}
		o << std::endl;
	}
	return o;
}
void Matrix::rellenar(int n) {
	for (int i = 0; i < this->N; i++) {
		for (int j = 0; j < this->M; j++) {
			this->pm[i][j] = n;
			
		}
		n++;
	}
}
