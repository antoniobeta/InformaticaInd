#include <iostream>
using namespace std;

struct coord_t {

	double x;
	double y;
	double z;

	coord_t(double x, double y, double z) :x(x), y(y), z(z) {}

};


class Esfera {
	double radio;
	coord_t c;
public:
	Esfera(double r, coord_t c) : c(c), radio(r) {}

};




class Mundo {
	Esfera e;
public:
	Mundo(Esfera e_out) : e(e_out) {}

	////
	//IO
	ostream& print(ostream& o);

};


ostream& Mundo::print(ostream& o) {
	o << "Soy un mundo crueo" << endl;
	return o;
}









void main() {
	Esfera e(3, coord_t(1.0, 2.0, 3.0)); //coord_t es un objeto temporal, nace para morir, no tiene ni nombre ni apellidos. Se copia al dato miembro de esfera y luego muere. 
	Mundo m1(e);
	Mundo m2(m1);
	m1.print(cout);

	system("PAUSE");
}