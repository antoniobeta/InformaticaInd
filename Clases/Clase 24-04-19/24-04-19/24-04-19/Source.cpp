#include "HerenciaPuntos.h"


void imprimir(_PuntoBase* pb) {pb->print();} //UPCAST

int main() {
#ifdef UNIT_TEST_PUNTOBASE //ya no puedo crear puntos base desde el main ya que hemos puesto el constructor como protected
	_PuntoBase pb(120);
	pb.print(); cout << endl;
	cout<< _PuntoBase::to_string(_PuntoBase::AZUL); //funciona la sobrecarga del operador << porque incluimos libreria string
#endif UNIT_TEST_PUNTOBASE

#ifdef UNIT_TEST_PUNTO
	Punto p(3.15, 7.45, 100);
	p.print(); cout << endl;
	p.print<int>();
#endif
#ifdef UNIT_TEST_PUNTOCOL
	PuntoCol pc(_PuntoBase::CIRCULO, _PuntoBase::AZUL, Punto(10.0, 11.0, 100));
	pc.print();
	pc.Punto::print(); cout << endl;
	pc._PuntoBase::print(); cout<<endl;
#endif
#ifdef UNIT_TEST_UPCAST
	PuntoCol pc(_PuntoBase::CIRCULO, _PuntoBase::AZUL, Punto(10.0, 11.0, 100));
	imprimir(&pc); //UPCAST: le metemos el puntero a puntocol, se convierte a PuntoBase y se imprime su metodo print
#endif		   	//es decir para clase heredada usamos el upcast para convertir y usar un metodo de una clase superior
	   
	system("pause");
}