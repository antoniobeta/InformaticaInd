#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>


//realizar de forma que le pases tu el puntero donde te va apuntar el espacio de memoria 
/*
	int* allocate_list_of_int(*pInt, int num_elem)
*/

int** allocate_matrix(int N, int M);



int* allocate_list_of_int(int num_elem) 
{
	int* pInt = (int*)malloc(sizeof(int) * num_elem);
	for (int j = 0; j < num_elem; j++)
	{
		pInt[j] = 0;
	}
	return pInt;
}

int** allocate_matrix(int N, int M)
{
	int **pMat = NULL;
	pMat = (int**)malloc(sizeof(int*)*N); //guardamos espacio para un array de punteros y como malloc crea un puntero
	//pues tenemos doble puntero

	for (int i = 0; i < N; i++)
	{
		pMat[i] = (int*)malloc(sizeof(int)*M); //crea los elementos de las filas que son int, asi que nos devuelve puntero a int
	}

	if(pMat == NULL) //gestion de errores
	{
		perror("error: ");
		return NULL;
	}

	//Inicializar la matriz a 0s
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			pMat[i][j] = 0;
		}
	}

	return pMat;

}

void clear_matrix(int** pMat, int N)//libera la memoria de la matriz
{
	if (pMat != NULL)
	{
		for (int i = 0; i < N; i++)
		{
			free(pMat[i]);
		}

		free(pMat);
		pMat = NULL; //Buena practica //si hago un free cuando pMat es Null me va a dar un error porque no hay nada que liberar

	}
}



int main()
{
	/*
	int j = 10;

	//coleccion de j enteros

	int* coleccion_enteros = (int*) malloc(sizeof(int) * j); //con el (int*) hacemos un cast porque malloc devuelve void
	//coleccion_enteros[4]; //esto funciona

	for (j = 0; j < 10; j++)
	{
		coleccion_enteros[j] = j;
	}

	//libero
	free(coleccion_enteros);
	*/


	
	/*
	//TEST UNITARIO

	int* pInt= allocate_list_of_int(10);

	//uso
	printf("El numero es: %d", pInt[5]);
	//libero
	free(pInt);

	*/

	int N = 2, M = 3;

	int **pMat = allocate_matrix(N, M);

	//uso
	printf("el numero es %d", pMat[1][1]);
	//libero
	clear_matrix(pMat, N);

	printf("\n");
	system("PAUSE");
	return 0;
}