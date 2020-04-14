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

#define CANTIDADEDADES 5

int main(void)
{
    setbuf(stdout, NULL);
    int edades[CANTIDADEDADES];
    float resultado;
    int i;

    for (i=0; i<CANTIDADEDADES; i++)
    {

    	if(utn_getNumero(&edades[i], "Ingrese el numero ", "eso no es un numero\n ", 0, 100, 0)==0)
    	{
    		printf ("Se cargo un dato\n");
    	}
    	else
    	{
    		printf ("Huston, tenemos un problema\n");
    	}

    }

    for (i=0; i<CANTIDADEDADES; i++)
    {
    	printf ("La posicion %d se cargo con %d\n",i,edades[i]);
    }

    if(promediarArray(&resultado, edades, 0)==0)
    {
    	printf ("el promedio es %f", resultado);
    }

    if(ordenarArrayInt (edades, CANTIDADEDADES, 'A')>0)
	{
		printArrayInt(edades, CANTIDADEDADES);
	}
	else
	{
		printf ("Huston, tenemos un problema\n");
	}

	return EXIT_SUCCESS;
}
