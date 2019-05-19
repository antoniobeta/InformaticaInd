#include <fstream>
#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include "listanum.h"
#include <string>
#include <sstream>

using namespace std;

int main() {
	ListaNum l;

	//TEST unit
	l.push_back(10);
	l.push_back(25);
	l.push_back(13);

	//std::cout << l.to_string();

	//escribir objeto a la pantalla

	l.print(cout);

	//escribir objeto a fichero
	ofstream fout("log.txt");
	l.print(fout);
	fout.close();


}