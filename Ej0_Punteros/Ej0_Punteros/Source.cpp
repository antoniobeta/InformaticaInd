#include <stdio.h>
#include <stdlib.h>


int main()
{

	int cadena[5] = { 3, 4, 5, 6, 7 };
	int *p_cadena;

	p_cadena = cadena;


	for (int i = 0; i < 5; i++)
	{
		printf("%d", *p_cadena);
		p_cadena++;
	}

	printf("\n");
	system("PAUSE");
	return 0;
}

