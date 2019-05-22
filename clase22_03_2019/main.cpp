#include<iostream>


using namespace std;

struct coord_t {
	float x;
	float y;
	float z;

	coord_t(float x, float y, float z) :x(x), y(y), z(z) {}
};
class Esfera {
	int radio;
	coord_t c;
	
public:
	Esfera();
	Esfera(int r, coord_t c_out) :radio(r), c(c_out) {}
};

class Mundo {
	Esfera e;

public:
	Mundo(const Esfera& e_out) : e(e_out) {}
	ostream& print(ostream& o);
};
ostream& Mundo::print(ostream& o) {
	o << "soy un mundo cruel..." << endl;
	return o;
}
void main() {

	Esfera e(3, coord_t(1.0, 2.0, 3.0));
	Mundo m1(e);
	Mundo m2(m1);
	Esfera* pE = new Esfera[2];
	delete pE;
	m1.print(cout);
	m2.print(cout);

	system("pause");
	return;
}

Esfera::Esfera()
{
}
