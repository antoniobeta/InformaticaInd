//utils_plusplus.cpp: definiciones de la clase graph
//#pragma once

#include <iostream>

#ifndef _UTILS_PLUSPLUS_H_ //Lo mismo que el pragma Once.
#define _UTILS_PLUSPLUS_H_
#endif

//using namespace std; esto no ponerlo aqui porque se propaga

namespace a309 {

	typedef unsigned char **mat; //un byte que es un bool, porque bool no existe en c++
	mat allocate_matrix(int N, int M);




	/****************
	* allocation utilities
	*
	****************/


	mat allocate_matrix(int N, int M);
	void free_matrix(mat m, int N);
	std::ostream& print_matrix(mat m, int N, int M, std::ostream&);


	/****************
	* Class Graph
	*
	****************/

	class Graph {

		int NV;				//numero de vertices
		mat pg;				//matriz de adyacencia. pg--> puntero a grafo
		//...


	public:
		//Graph
		Graph(int NV_out) :NV(NV_out), pg(NULL) { init_graph(NV); }
		void clear_graph();

		//Destructor y constructor siempre publico, no tiene sentido privado
		int init_graph(int NV);
		~Graph() { clear_graph(); }

	//////////////
	///utilidades
		int addEdge(int v, int w);
		bool isEdge(int v, int w);






	//IO
	
		std::ostream& print_header(std::ostream& o);
		std::ostream& print_edges(std::ostream& o);








	};



}