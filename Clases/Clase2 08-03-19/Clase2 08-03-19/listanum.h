#pragma once
//interfaz declaraciones

#include <fstream>
#include <stdio.h>
#include<stdlib.h>
#include <iostream>

#define MAX_ELEM 100


//a lo bruto pero lo suyo es cpp y punto h de toda la vida
class ListaNum {
public:
	enum{EMPTY_POS= 0xFFFFFF}; //numero muy grande que modela una posicion no existente. 
	typedef size_t npos;

private:
	int nElem; //privado por defecto
	int lista[MAX_ELEM];


public:
			ListaNum		()				{ nElem = 0; } //Constructor inline

	void		push_back	(int dato);
	int			at			(int pos);
	npos		find		(int elem);
	size_t		size		()				{ return nElem; } //tambien la hace inline
	void		clear()						{ nElem = 0; }

	//void print(); usa otra luego

	//IO
	std::string to_string();
	std::ostream& print(std::ostream&);

};


