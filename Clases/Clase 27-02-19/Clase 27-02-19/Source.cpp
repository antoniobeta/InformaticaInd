#include "mat.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "mat.h" //dependencia de la libreria matematicas


using namespace std;
using namespace apple;
using namespace apple::matematicas;
 

int main() {

	//printf("la suma es: %d", apple::matematicas::sumar(3, 5));

	printf("la suma es: %d", sumar(3, 5));

	//Con el inline hay que poner la funcion completa definida y creada en el .h


	system("PAUSE");


}