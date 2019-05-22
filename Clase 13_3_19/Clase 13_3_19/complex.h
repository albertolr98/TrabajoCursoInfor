#pragma once
#include<iostream>


class Complex {
private:
	double i;
	double j;
public:
	//Constructor
	Complex(double i=0,double j=0):i(i),j(j){}
	void foo(Complex& outer);
};
