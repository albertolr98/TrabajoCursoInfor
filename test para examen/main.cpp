#include<iostream>

using namespace std;
struct coord_t {
	double x;
	double y;
	double z;

	coord_t(double xo=0, double yo=0, double zo=0) :x(xo), y(yo), z(zo) { ; }
};
class Esfera {
	double r;
	coord_t c;

public:
	Esfera(int radio,coord_t co) :r(radio),c(co) { ; }
	std::ostream& print(std::ostream& o) const;
};

ostream& Esfera::print(ostream& o) const{
	o << "E:[" << c.x << "," << c.y << "," << c.z << "]" << endl;
	return o;
}
void main(){
	Esfera mi(5,coord_t(1.0,2.0,3.0));
	mi.print(cout);
	system("pause");
	return;
}