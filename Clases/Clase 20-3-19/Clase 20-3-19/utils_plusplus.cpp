//utils_plusplus.cpp: definiocn clase graph


#include "utils_plusplus.h"


using namespace std;



namespace a309
{

	mat allocate_matrix(int N, int M) {
		int i, j;
		mat m = new unsigned char* [N];
		for (i = 0; i < N; i++) {
			m[i] = new unsigned char [M]; 
		}
		//checking: if(m==NULL){return NULL;}

		//initialization to empty matrix
		for (i = 0; i < N; i++)
			for (j = 0; j < M; j++) {
				m[i][j] = 0;
			}

		return m;
	}


	void free_matrix(mat m, int N) {
		int i;
		for (i = 0; i < N; i++) {
			delete[] m [i];
		}
		delete[] m;
		m = NULL;
	}


	ostream& print_matrix(mat m, int N, int M, ostream& o)
	{

		int i, j;
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++) {
				o << m[i][j] << " ";
			}
			o<<endl;
		}

		return o;
	}



	int Graph::init_graph(int NV) {

		clear_graph(); //libero espacio de memoria;

		this->NV = NV;

		pg = a309::allocate_matrix(this->NV, this->NV);


		return 0; //ok
	}

	void Graph::clear_graph() {
		if (pg) {
			a309::free_matrix(this->pg, this->NV);
		}
		this->NV = 0;
	}


	std::ostream& Graph::print_header(std::ostream& o) {

		o << "grafo con" << this->NV << "vertices" << endl;
		return o;
	}


	std::ostream& Graph::print_edges(std::ostream& o) {

		int i, j;
		for (i = 0; i < this->NV - 1; i++) {
			for (j = i + 1; j < this->NV; j++) {
				if (pg[i][j] == 1) {
					o<<"["<<"--"<<j<<"]"
				}
			}
		}

	}

	int Graph::addEdge(int v, int w) {

		//check values of v w:return -1 if error

		pg[v][w] = 1;
		pg[w][v] = 1;

		return 0;
	}

	bool Graph::isEdge(int v, int w) {

		return pg[v][w];//funciona por el cast a bool
	}




}