#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


//ejercicio, pido por teclado una frase al usuario y se recoje en un string
//ese string lo paso a numero para cojerlo

// ejs, "los alumnos son <numero>" y hay que pillar el numero y meterlo en una variable 

char* leer_frase(char* dest);
int extraer_numero(const char* dest);
int leer_numero_matricula(char*dest);


char* leer_frase(char *dest)
{
	printf("introduzca una frase: \n");
	scanf("%[^\n]", dest); //lee como lo haria el gets, hasta el \n (lee todo hasta el \n)

	//scanf("%[^\012]", dest); //lee despe el principio, exceptuando 0 1 y 2 

	//prueba
	//puts(dest);

	return dest;
}

int extraer_numero(const char* dest)
{
	
	//char token[50];
	int num = 0;
	//primera forma, solo coje 3 palabras
	//sscanf(dest, "%s%s%s%d", token, token, token, &num);

	sscanf(dest, "%*[^0123456789]%d", &num); //pasa de todo lo que no sea un numero y cuando llega a uno lo guarda en el %d
	//por ejemplo en el de arriba si pones los alumnos del a309 son 45, te va a pillar el 309 y no va a llegar al numero que de verdad queremos 
	return num;
	


}

int leer_numero_matricula(char*dest)
{
	int i = 0;
	int num = 0;
	char *pChr = dest;

	for (; pChr != '\0'; pChr++) {

		if (isdigit(*dest))
		{
			//extraigo num
			num = strtol(pChr, NULL, 10);
			break;

		}
		
	}

	return num;
}

int main()
{

	/*
	char str[] = "Hola mundo creeeeeel";
	char* pChr = str;

	//find 'c'
	pChr = strchr(str, 'c');



	//escribir "cruel" empezando por la posicion donde estaba 'c'
	strcpy(pChr, "cruel");
	*(pChr + strlen("cruel")) = '\0';

	puts(str);

	*/

	/*

	//cadena: "Los alumnos del A309 son 50"

	int num = 50;
	char str[100];

	sprintf(str, "Los alumnos del A309 son %d", num); //copia num en la str y con puts lo pone
	puts(str);
	*/


	/*
	//ejercicio, pido por teclado una frase al usuario y se recoje en un string
	//ese string lo paso a numero para cojerlo

	// ejs, "los alumnos son <numero>" y hay que pillar el numero y meterlo en una variable 

	char str[250];
	int num = 0;

	leer_frase(str);

	num = extraer_numero(str);
	printf("%d", num);

	system("pause");
	return 0;

	*/


	//ejercicio anterior con isdigit
	int num = 0;
	char str[250] = "manuel_878743";
	num = leer_numero_matricula(str);
	printf("%d", num);

}


//ejercicio CENTROIDE

