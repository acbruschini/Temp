/*
 * utn.h
 *
 *  Created on: 7 abr. 2020
 *      Author: Ariel
 */

#ifndef UTN_H_
#define UTN_H_

//int dividir (float* pResultado,int operador1, int operador2);
int utn_getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);
void imprimirArray(int array[],int len);
int promediarArray(float* promedioResultado, int array[], int len);
int ordenarArrayInt (int pArray[], int len, char tipoOrdenamiento);
int printArrayInt (int pArray[], int len);

#endif /* UTN_H_ */
