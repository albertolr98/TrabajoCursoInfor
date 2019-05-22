#include<iostream>
#include<fstream>


using namespace std;

#define FILE_LOG(file,type) File( (file),File::type ).getFileStream()

class Punto {
	double x;
	double y;
public:
	Punto(double x = 0, double y = 0) :x(x), y(y) { ; }
	ostream& print(ostream& = cout);
	friend Punto operator +(const Punto &, const Punto &);
	bool operator !() { return (x == 0.00&&y == 0.00); }
	Punto operator +(double k);
	Punto& operator +=(const Punto& p);
};

class File {
public:
	enum mode_t { READ = 0, WRITE, READ_WRITE, APPEND };
//private:
	mode_t type;
	fstream fs;
public:
	File(const char* filename, mode_t mode = APPEND);
	~File(void);
	fstream& getFileStream() { return fs; }
};


void main() {
	File f("hola", File::READ);
	FILE_LOG("HEY", WRITE) << "HOLA" << endl;
	f.getFileStream() << "hola mundo" << endl;
	cout << "hola mundo" << endl;
	Punto p(2,3),p1(1,2),p3;
	p.print();
	(p + p1).print();
	//llamada explicita
	operator+(p, p1).print();
	if (!p3) { cout << "estoy en el origen" << endl; }
	p3= p3 + 5;
	p3.print();

	system("pause");
	return;
}

ostream & Punto::print(ostream & o )
{
	o << "[" << x << "," << y << "]" << endl;
	return o;
}

Punto Punto::operator+(double k)
{
	Punto res(*this);
	x += k;
	y += k;
	return *this;
}



//declaracion independiente
Punto operator+(const Punto & lhs, const Punto &rhs)
{
	Punto res(lhs);
	res.x += rhs.x;
	res.y += rhs.y;
	return res;
}

File::File(const char * filename, mode_t mode)
{
	switch (mode) {
	case WRITE:
		fs.open(filename, ios::in);
		break;
	case READ:
		fs.open(filename, ios::out);
		break;
	case APPEND:
		fs.open(filename, ios::app);
		break;
	}

	fs.open(filename,ios::in);
}

File::~File(void)
{
	fs.close();
}
