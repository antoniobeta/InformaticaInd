#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h> 

using namespace std;

//ejemplo rapido de platilla de funcion
template<class T> 
int sumar(const T& lhs, const T& rhs) {
	return lhs + rhs;
}

template<class _Arg1, class _Arg2, class _Ret>
_Ret func(const _Arg1& lhs, const _Arg2& rhs) {
	return lhs + rhs;

}

class Objeto {
};


int main() {
//	vector<Objeto*> v;
//	v.size();

//vector<int>v;
//ej sumar
	int a = 0, b = 10;
//	cout << "la suma es : " << sumar<int>(a, b) << endl;;

	cout<<"la suma es:" << func <int, int, int>(a, b)<<endl; //<>esto se pone solo si el entorno no es capaz de distingir los tipos por si mismo

	system("pause");
	return 0;

}
