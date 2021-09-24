/*
 * funcionesCalculo.c
 *
 *
 */
#include "funcionesCalculo.h"

float pedirNumeroFlotante(char* mensaje, char* mensajeError, int min, int max)
{
	float numeroIngresado;

	printf("%s", mensaje);
	fflush(stdin);
	scanf("%f", &numeroIngresado);

	while(numeroIngresado < min || numeroIngresado > max)
	{
		printf("%s", mensajeError);
		fflush(stdin);
		scanf("%f", &numeroIngresado);
	}

	return numeroIngresado;
}

float sumar(float numeroUno, float numeroDos)
{
	float total;

	total = numeroUno + numeroDos;

	return total;
}

float restar(float numeroUno, float numeroDos)
{
	float total;

	total = numeroUno - numeroDos;

	return total;
}

float dividir(float numeroUno, float numeroDos)
{
	float resultado = 0;

	if(numeroUno != 0 && numeroDos != 0)
	{
		resultado = numeroUno / numeroDos;
	}

	return resultado;
}

float multiplicar(float numeroUno, float numeroDos)
{
	float resultado;

	resultado = numeroUno * numeroDos;

	return resultado;
}

unsigned long long factorizar(float numeroIngresado)
{
	unsigned long long factorial = 1;

	if(numeroIngresado != 1 && numeroIngresado != 0)
	{
		factorial = (int)numeroIngresado * factorizar((int)numeroIngresado-1);
	}
	else if(numeroIngresado == 0)
	{
		factorial = 0;
	}

	return factorial;
}


