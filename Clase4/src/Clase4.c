/*
 ============================================================================
 Name        : Clase3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
    setbuf(stdout, NULL);
    int resultado;
    int respuesta;
    float resultadoFloat;
    char resultadoChar;
/*
    respuesta = utn_getNumero (&resultado, "Ingrese su peso: \n", "Ingrese su pesos entre los maximos y minimos pedidos \n", 1, 500, 2);

    if (respuesta == 0){

    	printf ("El numero que genero la funcion fue: %d\n",resultado);
    }

    respuesta = utn_getNumeroFlotante (&resultadoFloat, "Ingrese su Edad: \n", "Ingrese su Edad entre los maximos y minimos pedidos \n", 1, 99, 0);

    if (respuesta == 0){

    	printf ("El numero que genero la funcion fue: %f\n",resultadoFloat);
    }
*/
    respuesta = utn_getCaracter (&resultadoChar, "Ingrese Un Caracter: \n", "Ingrese un caracter valido \n", 'A', 'J', 6);

    if (respuesta == 0){

    	printf ("El numero que genero la funcion fue: %c\n",resultadoChar);
    } else {

    	printf ("Error");
    }

    /*
    // PRIMERA PARTE

	float resultado;
	int numero1;
	int numero2;
	int respuesta;

	printf("Numero 1?: \n");
	fflush (stdin);
	scanf("%d",&numero1);
	printf("Numero 2?: \n");
	fflush (stdin);
	scanf("%d",&numero2);

	respuesta = dividir(&resultado,numero1,numero2);
	if(respuesta == 0)
	{
		printf("El resultado es: %f\n",resultado);
	}
	else
	{
		printf("No es posible dividir por cero\n");
	}

	*/


	return EXIT_SUCCESS;
}
