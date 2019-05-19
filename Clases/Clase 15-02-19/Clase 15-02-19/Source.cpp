#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 45

int main()
{
	//ficheros cuestiones

	/*
	FILE* fout = fopen("log.txt", "r");
	if (fout == NULL)
	{
		perror("error ");
		system("PAUSE");
		return 0;
	}
	*/

	/*
	FILE* fout = fopen("log.txt", "w");
	if (fout == NULL)
	{
		perror("error ");
		system("PAUSE");
		return 0;
	}
	fputs("Hola, somos el a309",fout);
	*/
	/*
	FILE* fout = fopen("num.txt", "w");
	if (fout == NULL)
	{
		perror("error ");
		system("PAUSE");
		return 0;
	}
	
	for (int i = 0; i < 5; i++)
	{
		fprintf(fout, "%d", i);
	}
	
	fclose(fout);
	*/

	/*	FILE* fin = fopen("num.txt", "r");
	if (fin == NULL)
	{
		perror("error ");
		system("PAUSE");
		return 0;
	}

	
	while (1)
	{
		fgets(line, MAX_LENGTH, fin);
		//con fscanf
		//fscanf(fin, "%[^\n]%c", line); //lee todo hasta que llega al fin de linea y luego se salta un char, lo lee pero no lo guarda asi no se queda atascado en el fin de linea


		if (ferror(fin))
		{
			perror("error: ");
			break;
		}

		if (feof(fin))
		{
			break;
		}
		//procesar
		puts(line);


	}

	*/

	//Ejercicio lectura desde fichero 1/2


	while (1)
	{
		fscanf
	}



	printf("\n");
	system("PAUSE");
	return 1;

}