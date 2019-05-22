#pragma once
#include<iostream>

class Matrix {
private:
	int N;
	int M;
	int** pm;
public:
	Matrix(int,int);
	~Matrix();
	std::ostream& print(std::ostream&);
	void rellenar(int);
	Matrix operator +(Matrix);
};



