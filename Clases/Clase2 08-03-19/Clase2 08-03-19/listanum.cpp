//listanum.cpp definiciones del interfaz

#include"listanum.h"
#include<sstream>
using namespace std;

//al final hace el constructor inline
//ListaNum::ListaNum() { nElem = 0; } //Este constructor cada vez que se crea un objeto ListaNum pone a 0 nElem

//void ListaNum::print() { std::cout << "Soy una lista numerada" << std::endl; } esta la hizo de ejemplo, luego usa otra


void ListaNum::push_back(int dato) { //Sino ponemos de listanum:: se crea una variable global :(

	lista[nElem++] = dato;

	//comprobar capacidad....añadir luego

}

ListaNum::npos ListaNum::find(int elem) //n pos tipo que nos dice la posicion del elemento en la coleccion, el tipo es de dentro de la clase
//para usarlo no se puede poner npos ListaNum::find(int elem)
{
	for (int i = 0; i< nElem; i++)
	{
		if (lista[i] == elem) return i;
	}
	return static_cast<ListaNum::npos> (EMPTY_POS);//MODELA QUE NO HA ENCONTRADO NADA, es un numero muy grande que sirve para eso.
}

int ListaNum::at(int pos)
{ //comprobar que pos es legal
	return lista[pos];
}


std::string ListaNum::to_string() {
	string res;
	stringstream sstr;

	for(int i=0; i<nElem;i++)
		sstr<<lista[i]<<" ";

		sstr<<endl;
		return sstr.str();



}

std::ostream& ListaNum::print(std::ostream& o) {

	o << to_string();

	return o;
}
