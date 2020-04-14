/*
 * utn.c
 *
 *  Created on: 7 abr. 2020
 *      Author: Ariel
 */

#include <stdio.h>
#include <stdlib.h>
/*// ESTO ES COMO LO RESOLVI YO
 *
int utn_getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int bufferInt;
	int retorno = -1;
	int i;


	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0 ){

		for (i = 0; i <= reintentos; i++)
		{
			printf ("%s",mensaje);
			fflush (stdin);
			scanf ("%d", &bufferInt);

			if (bufferInt >= minimo && bufferInt =< maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf ("%s",mensajeError);
			}
		}
	}

	return retorno;
}*/
// ESTA LA HIZO MAURICIO Y ME GUSTA MAS
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%d",&bufferInt);
			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}

int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	int retorno = -1;
	float bufferFloat;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%f",&bufferFloat);
			if(bufferFloat >= minimo && bufferFloat <= maximo)
			{
				*pResultado = bufferFloat;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
	int retorno = -1;
	char bufferChar;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			fflush (stdin);
			scanf("%c",&bufferChar);
			if(bufferChar >= minimo && bufferChar <= maximo )
			{
				*pResultado = bufferChar;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}

void imprimirArray(int array[],int len)
{
	int i;
	for(i=0; i<len; i++)
	{
		printf("%d ",array[i]);
	}
}

int promediarArray(float* pPromedioResultado, int array[], int len)
{

	int i;
	int suma = 0;
	int retorno = -1;

	if(pPromedioResultado != NULL && array != NULL && len > 0){
		for (i=0; i<len; i++)
		{
			suma += array[i];
		}

		//printf ("%d", suma);

		*pPromedioResultado = (float)suma/len;
	}

	return retorno;

}

int ordenarArrayInt (int pArray[], int len, char tipoOrdenamiento)
{

	int retorno = -1;
	int i;
	int flagSwap;
	int bufferTemp;
	int contador =0;
	int condicionOrden;

	if (pArray != NULL && len >= 0 )
	{
		do
		{
			flagSwap = 0;
			len--;

			for (i = 0; i<len; i++)
			{
				switch (tipoOrdenamiento)
				{

					case 'D':
						condicionOrden = (pArray[i] < pArray [i+1]);
						break;

					case 'A':
						condicionOrden = (pArray[i] > pArray [i+1]);
						break;

				}

				if (condicionOrden)
				{
					bufferTemp = pArray[i];
					pArray[i] = pArray [i+1];
					pArray[i+1] = bufferTemp;
					flagSwap = 1;
				}
				contador++;
			}

		} while (flagSwap == 1);

		retorno = contador;
	}

	return retorno;

}

int printArrayInt (int pArray[], int len)
{

	int retorno = -1;
	int i;

	if (pArray != NULL && len >=0)
	{
		for (i=0; i<len ; i++)
		{

			printf ("\n[DEBUG]    Posicion [%d] con valor: %d",i,pArray[i]);

		}
		retorno = 0;
	}


	return retorno;

}

