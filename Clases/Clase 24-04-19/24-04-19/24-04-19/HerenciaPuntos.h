#pragma once
#include <iostream>
#include <string>
using namespace std;

//#define UNIT_TEST_PUNTOBASE
//#define UNIT_TEST_PUNTO
//#define UNIT_TEST_PUNTOCOL
#define UNIT_TEST_UPCAST

class _PuntoBase {
public:
	enum rep_t { CRUZ = 0, ESTRELLA, CIRCULO };
	enum col_t {AZUL=0, BLANCO, NEGRO};
	static string to_string(rep_t);
	static string to_string(col_t);
protected: //para todos aquellos estados que se van a heredar y 
	int id;	//que luego la clase heredada tendra que usarlos pero sigue siendo privado para el usuario
	_PuntoBase(int id_out) :id(id_out) {};
/////////
//Interfaz
public:
	ostream& print(ostream& o= cout)const { o << "id: " << id<< " "; return o; };
};

string _PuntoBase:: to_string(rep_t r) {
	string res;
	switch (r) {
	case CRUZ:
		res = "CRUZ";
		break;
	case CIRCULO:
		res = "CIRCULO";
		break;
	case ESTRELLA:
		res = "ESTRELLA";
		break;	
	}
	return res;
}

string _PuntoBase::to_string(col_t c) {
	string res;
	switch (c) {
	case AZUL:
		res = "AZUL";
		break;
	case NEGRO:
		res = "NEGRO";
		break;
	case BLANCO:
		res = "BLANCO";
		break;
	}
	return res;
}


class Punto: public _PuntoBase {
	double x;
	double y;
//////////
//Interfaz
public:
	Punto(double x = 0.0, double y = 0.0, int id = 1) :x(x), y(y), _PuntoBase(id) {}
	Punto(const Punto& p, int id_out) : x(p.x), y(p.y), _PuntoBase(id_out) {} //esto no es el constructor copia
	void set_id(int id_new) { id=id_new; }

////I/O
	ostream& print(ostream& o = cout) const;

	template<class U>
	ostream& print(ostream& o = cout) const;
};

template<class U>
ostream& Punto::print(ostream& o) const {
	_PuntoBase::print(o);
	o << "[" <<static_cast<U> (x) << "," << static_cast<U>(y) << "]" << endl;
	return o;

}

ostream& Punto::print(ostream& o) const {
	_PuntoBase::print(o);
	o << "[" << x << "," << y << "] ";
	return o;
}


class PuntoCol :public Punto {
	rep_t r;
	col_t c;
///////////
//Interfaz
public:
	PuntoCol(rep_t r, col_t c, const Punto& p) :r(r), c(c), Punto(p) {}
	ostream& print(ostream& o = cout) const;
};

ostream& PuntoCol::print(ostream& o) const {
	Punto::print(o);
	o << to_string(r) << " " << to_string(c) << endl;
	return o;
}