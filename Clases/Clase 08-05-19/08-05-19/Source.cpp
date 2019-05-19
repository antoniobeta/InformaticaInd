#include <stdio.h>
#include <stdlib.h>

#include <iostream>

using namespace std;

class Objeto {
public:
	virtual ostream& print(ostream& o = cout) const{ o << "soy un objeto" << endl; }
	//virtual significa que esta sometido mas abajo en otra clase, eso 
};

class Taza {
public:
	ostream& print(ostream& o = cout) const{ o << "soy un taza" << endl; }

};

class TazaGrande {
public:
	ostream& print(ostream& o = cout)const { o << "soy un tazaGrande" << endl; }

};

//gestor de objetos

void visualizar_objetos(const Objeto& ob) {
	ob.print();
}

//sobrecarga operador texto
//algo asi...
//ostream& operator <<


int main() {

	Taza t;
	Objeto o;
	TazaGrande tg;
	Tetera tet;
	TeteraMini, tetmin;


	visualizar_objetos(t);
	viualizar_objetos(o);

	cout << tetmin << tet;


	//gestor
	Objeto* l[3];
	l[0] = new Taza;
	l[1] = new Tetera;
	l[2] = new TeteraMini;

	for (int i = 0; i < 3; i++)
	{
		l[i]->print();
	}

	for (int i = 0; i < 3; i++)
	{
		delete l[i]; //esto llama al destructor de objeto si queremos que se llame al destructor de cada funcion hay que poner Virtual destructor para liberar la memoria adecuadamente

	}
	return 0;
}