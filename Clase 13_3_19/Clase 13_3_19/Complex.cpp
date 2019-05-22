#include"complex.h"


using namespace std;
void Complex::foo(Complex& outer){
	cout << "mi parte real es " << outer.i<<endl;
	cout << "mi parte imaginaria es " <<outer.j << endl;
}