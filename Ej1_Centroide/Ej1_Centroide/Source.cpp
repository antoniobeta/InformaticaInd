
#include <stdio.h>
#include <stdlib.h>

#define NUM_PUNTOS 4

struct punto_t{
	float x;
	float y;
};

struct punto_t centroide(struct punto_t*, int size);
void imprime(struct punto_t);
void rellena_lista(struct punto_t*, int size);

struct punto_t centroide(struct punto_t* vector, int size)
{
	struct punto_t solucion;
	float mediax = 0;
	float mediay = 0;


	for (int i = 0; i < size; i++)
	{
		mediax += vector[i].x;
		mediay += vector[i].y;

	}


	solucion.x = mediax/size;
	solucion.y = mediay/size;

	return solucion;
}

void imprime(struct punto_t entrada)
{
	printf("El centroide es: \n");
	printf("Coordenada X = %f, Coordenada Y =%f\n", entrada.x, entrada.y);
}

void rellena_lista(struct punto_t* vector, int size)
{
	printf("Introduce las coordenadas X e Y de tus puntos:\n");

	for (int i = 0; i < size; i++)
	{
		printf("Punto %d\n", (i+1));
		printf("X:");
		scanf("%f", &vector[i].x);
		printf("Y:");
		scanf("%f", &vector[i].y);
	}


}


int main()
{
	
	struct punto_t solucion;
	struct punto_t vector_p[NUM_PUNTOS];

	rellena_lista(vector_p, NUM_PUNTOS);
	solucion = centroide(vector_p, NUM_PUNTOS);
	imprime(solucion);

/*
	for (int i = 0; i < NUM_PUNTOS; i++)
	{
		imprime(vector_p[i]);
	}
*/
	printf("\n");
	system("PAUSE");
	return 0;
}