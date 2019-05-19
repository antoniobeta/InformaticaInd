#include <stdio.h>
#include <stdlib.h>


struct nodo_t {
	int dato;
	struct nodo_t * siguiente;
};

typedef struct nodo_t nodo;

nodo_t head; //cabeza dato global.
//DONE
nodo_t* nuevo_elemento();
//DONE
nodo* init(int dato); //Crear primer elemento //nodo cabecera
//DONE
//void push_front(nodo* head, int dato); //empujar al principio por delante, meter un dato por delante del 12 (ej diapositivas de clase)
//DONE
void push_back(nodo* head, int dato); //meter un dato por el final
//DONE
int pop_back(nodo* head); //sacar el ultimo dato de la pila, devuelve el dato de la pila y libera la memoria
//DONE
void erase(nodo* head, int dato); //escanea la lista y borra el dato cuando lo encuentra y libera la memoria
//DONE
void imprime_lista(nodo* head);

//Nuevo clase
nodo* push_front(nodo_t ** head, int dato);
void clear(nodo* head);


//Sin terminar

void clear(nodo* head)
{
	nodo*actual = head;
	nodo* anterior = NULL;
	while (actual->siguiente != NULL)
	{
		anterior = actual;
		actual = actual->siguiente;
	}
}



//Nuevo Clase

nodo* push_front(nodo_t ** head, int dato)
{
	nodo* actual = *head;

	//nuevo
	nodo* pElem = nuevo_elemento();
	pElem->dato = dato;
	pElem->siguiente = actual;
	*head = pElem;
	return p_Elem;

}

//funcion auxiliar
nodo* nuevo_elemento()
{
	return (nodo*)malloc(sizeof(nodo));
}

nodo* init(int dato)
{
	//para no hacer cabecera global se podria hacer qe init devolviera un puntero a la cabecera directamente
	//diferente al enunciado de la presentacion

	nodo* head = nuevo_elemento();
	head->dato = dato; //como nodo es un puntero pues hay que usar las flechas
	head->siguiente = NULL;//porque es el primer elemento y no hay nuevos elementos despues.

	return head;
}

/*

void push_front(nodo* head, int dato)
{
	nodo* auxiliar;
	auxiliar = nuevo_elemento();

	auxiliar->dato = head->dato;
	auxiliar->siguiente = head->siguiente;

	head->dato = dato;
	head->siguiente = auxiliar;
}

*/

void push_back(nodo* head, int dato) //Cambiado en lcase
{
	nodo*actual = head;
	nodo* pElem;

	while (actual->siguiente != NULL)
	{
		actual = actual->siguiente;
	}
	//acutal -> tail
	
	pElem = nuevo_elemento();
	pElem->dato = dato;
	pElem->siguiente = NULL;
	actual->siguiente = pElem;

}



void imprime_lista(nodo* head)
{
	nodo*actual = head;
	do {
		printf("%d", actual->dato);
		actual = actual->siguiente;

	} while (actual!= NULL);
}

int pop_back(nodo* head) //sacar el ultimo dato de la pila, devuelve el dato de la pila
{
	nodo* actual = head;
	int dato, i = 0;

	while(1)
	{
		if (actual->siguiente != NULL)
		{
			actual = actual->siguiente;
			i++;
		}
		else
			break;
	}

	dato = actual->dato;
	free(actual);

	actual = head;

	for (int j = 0; j < (i-1); j++)
	{
		actual = actual->siguiente;
	}

	actual->siguiente = NULL;

	return dato;
}

void erase(nodo* head, int dato)//escanea la lista y borra el dato cuando lo encuentra
{
	nodo* actual = head;
	nodo* auxiliar = head;
	int i = 0, flag=0;

	do {
		if (actual->dato == dato)
		{
			flag = 1;
			break;
		}
		i++;
		actual = actual->siguiente; //actual apunta al dato que queremos borrar

	} while (actual != NULL);

	printf("\n%d", i);
	printf("\n%d", flag);

	if (flag && (i !=0))//Si existe flag es que se ha encontrado y el dato que queremos borrar es al que apunta actual
	{
		for (int j = 0; j < (i - 1); j++)
		{
			auxiliar = auxiliar->siguiente;//Este puntero apuntara al dato justo antes de auxiliar
		}

		auxiliar->siguiente = actual->siguiente;
		free(actual);
	}
	else if (flag && (i == 0)) //Esto significa que queremos borrar el head
	{
		auxiliar = head->siguiente;

		head->dato = auxiliar->dato;
		head->siguiente = auxiliar->siguiente;
		free(auxiliar);
	}
}


int main()
{

	nodo* head = init(10);

	push_back(head, 49);
	push_front(head, 27);
	push_back(head, 30);
	push_front(head, 69);
	
	imprime_lista(head);
	erase(head, 30);
	pop_back(head);
	erase(head, 69);
	printf("\n");

	imprime_lista(head);

	printf("\n");
	system("PAUSE");
	return 0;
}
