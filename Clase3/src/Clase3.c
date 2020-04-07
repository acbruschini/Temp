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

int sumar(int operador1, int operador2);
int restar(int operador1, int operador2);
int multiplicar(int operador1, int operador2);
float dividir(int operador1, int operador2);

int main(void) {

    setbuf(stdout, NULL);

	int num1;
	int num2;
	char operacion;
	int resultado;
	float resultadoFloat;

	printf ("Ingrese el primer numero\n");
	fflush (stdin);
	scanf("%d", &num1);
	printf ("Ingrese la operacion\n");
	fflush (stdin);
	scanf("%c",&operacion);
	printf ("Ingrese el segundo numero\n");
	fflush (stdin);
	scanf("%d", &num2);

	switch (operacion) {

	case '+':
		resultado = sumar(num1,num2);
		break;

	case '-':
		resultado = restar(num1,num2);
		break;

	case '*':
		resultado = multiplicar(num1,num2);
		break;

	case '/':
		resultadoFloat = dividir(num1,num2);
		break;

	}

	if (operacion == '/') {
		if(num2==0){
			printf ("No se puede dividir por cero gil! \n");

		} else {

			printf("El resultado es: %f", resultadoFloat);
		}

	} else {

		printf("El resultado es: %d", resultado);

	}


return EXIT_SUCCESS;

}

int sumar(int operador1, int operador2) {

	int resultado;
	resultado = operador1 + operador2;

	return resultado;
	}

int restar(int operador1, int operador2) {

	int resultado;
	resultado = operador1 - operador2;

	return resultado;
	}

int multiplicar(int operador1, int operador2) {

	int resultado;
	resultado = operador1 * operador2;

	return resultado;
	}

float dividir(int operador1, int operador2) {

	float resultado;
	if (operador2 != 0) {
		resultado = (float)operador1 / operador2;
	} else {

	}

	return resultado;
}
