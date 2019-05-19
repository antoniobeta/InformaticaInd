#include <iostream>
#include <fstream>

//amadir mas igulal  y eso de las diapos ejercicio

using namespace std;

class Punto {
	double x;
	double y;
public:
	Punto():x(0.0), y(0.0){}
	Punto(double x, double y):x(x), y(y){}

//operators 
	friend Punto operator + (const Punto& lhs, const Punto& rhs);
	Punto operator + (const Punto& rhs);
	bool operator !() { return x == 0.0 && y == 0.0; };
	Punto& operator += (const Punto& p); //miembro porque tiene que ser miembro, porque modifica a un punto //devuelve la referencia para que acontinuacion se puede hacer otra operancio, por ejemplo sumar y restar
	friend Punto operator + (Punto lhs, const punto& p); 

	//ejercicio
	Punto operator+ (double k);
	friend Punto operator+ (double, const Punto&); //Complemento del de arriba. conmutatividad del operador mas

	////
	Punto& operator = (const Punto&);

//I/O
	ostream& print(ostream&);
	friend ostream& operator << (ostream&, const Punto&); //Esta es independiente

};

class ManagerPunto {
	Punto l [10];
	////////
public:
	Punto& operator[](int index);

};


//Si es miembro su primer oerador es el objeto SIEMPRE

Punto& Punto::operator = (const Punto& p) //forma canonica
{
	if (this != &p) {
		this->x = p.x;
		this->y = p.y;
	}

	return *this;
}



ostream& Punto::print(ostream& o)
{
	o << "[" << this->x << "," << this->y << "]";
	return o;
}

Punto operator + (const Punto& lhs, const Punto& rhs) {
	Punto res(lhs);
	res.x += rhs.x;
	res.y += rhs.y;

	return res;
}

Punto Punto::operator + (const Punto& rhs) {
	Punto res(*this);
	res.x = rhs.x;
	res.y = rhs.y;

	return res;
}

Punto Punto::operator + (double k) {

	Punto res(*this);
	res.x += k;
	res.y += k;

	return res;
}

Punto operator+ (double k, const Punto& rhs)//Complemento del de arriba. conmutatividad del operador mas
{
	Punto res(rhs);
	res.x += k;
	res.y += k;

	return res;

}


ostream& operator << (ostream& o, const Punto& p) //Esta es independiente
{
	o << "[" << p.x << "," << p.y << "]";
	//otra opcion return p.print(o);
	return o;


}

Punto operator + (Punto lhs, const punto& p)
{
	lhs += rhs;
	return lhs;
}




void main() {
	cout << "hola mundo" << endl;
	Punto p1;

	Punto p(1, 1);

	//modo natura
	(p + p1).print(cout);

	//modo explicito
	operator+(p, p1).print(cout);
	p.operator+(p1).print(cout);

	if (!p) { cout << "estpu en el origen" << endl; }

	system("PAUSE");


	//ej, podriamos sobrecargar un operador + con dos float como entrada porque ese ya exisite


	//ejercicio.
	//declare e implemente operadadores de traslacion positiva y negatica de un valor constante K unidades
	//para la clase Punto de los ejemplos anteriores


	//traslacion
	(p + 17.5).print(cout);
	(17.5 + p).print(cout);

	//asignanacion
	p1 = p;
	if (!p1) { cout << "BIEN" << endl; };

	//scar a fichero.txt
	ofstream f_out("punto.txt");
	f_out << (17.5 + p);
	f_out.close();

}