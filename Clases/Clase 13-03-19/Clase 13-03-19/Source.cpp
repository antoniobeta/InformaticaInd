



//class Oveja {
//	 int patas;
//	int lana;
//public:
//	//Oveja(int patas_out = 4) { patas = patas_out; };
//
//	Oveja(int patas_out = 4) : patas(patas_out), lana(40) {}; //esto es equivalente al de arriba.le añademas cosa, como lo de la lana
//	//de la forma de arriba a la vez que reserva memoria da los valores, de la forma tipica le asigna valores despues de crearlo, asi que
//	//suele ser mejor la segunda opcion
//
//
//};


//class Oveja {
//	const int patas; //esto solo se puede hacer con el constructor 2 ya que sino al ser const int no te deja cambiarlo 
//	//dspues de crearlo, con la segunda forma le pone el valor cuando lo cre asi que si que funciona
//public:
//
//	//1
//	//Oveja(int patas_out = 4) { patas = patas_out; }
//
//	/*2*/
//	Oveja(int patas_out = 4) : patas(patas_out), {} //esto es equivalente al de arriba.le añademas cosa, como lo de la lana
//	//de la forma de arriba a la vez que reserva memoria da los valores, de la forma tipica le asigna valores despues de crearlo, asi que
//	//suele ser mejor la segunda opcion
//
//
//	//RESUMEN DE LOS CONSTRUCTORES, lo que se pone como el 1 es asignacion.
//
//
//
//};

struct coord {
	double x;
	double y;
	double z;
	coord() :x(0.0), y(0.0), z(0.0) {} //asi le pone valores iniciales
};


class Esfera {
	double r;
	int color;
	coord c;
public:
	Esfera(): r(0.0), color(0){} //asi le pone valores iniciales
};



int main() {
	//Oveja o; //no funciona si puenes el constructor privado porque no tiene sentido

	Esfera mi_esfera;

}