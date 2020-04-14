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

    int arrayNumeros[CANTIDADEDADES] = {54,32,1,0,9};

    utn_printArrayInt(arrayNumeros, CANTIDADEDADES);

    if(utn_sortArrayInt (arrayNumeros, CANTIDADEDADES, 'A')>0)
	{
    	utn_printArrayInt(arrayNumeros, CANTIDADEDADES);
	}
	else
	{
		printf ("Huston, tenemos un problema\n");
	}

	return EXIT_SUCCESS;
}
