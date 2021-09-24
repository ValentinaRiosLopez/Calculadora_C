/*
 * funcionesCalculo.c
 */

#include "funcionesCalculo.h"

/**
 * @fn int pedirNumero(char*, char*, int, int)
 * @brief Funcion para pedirle un numero al usuario y validarlo, usada para pedir los operadores.
 *
 * @param mensaje
 * @param mensajeError
 * @param minimo
 * @param maximo
 * @return
 */


float pedirNumero(char* mensaje, char* mensajeError, int minimo, int maximo)
{
	float numeroIngresado;

	printf("%s", mensaje);
	fflush(stdin);
	scanf("%f", &numeroIngresado);

	while(numeroIngresado < minimo || numeroIngresado > maximo)
	{
		printf("%s", mensajeError);
		fflush(stdin);
		scanf("%f", &numeroIngresado);
	}

	return numeroIngresado;
}

/**
 * @fn int suma(int, int)
 * @brief Funcion para sumar los operadores ingresados por el usuario en el menu.
 *
 * @param numeroUno
 * @param numeroDos
 * @return
 */
float suma(float numeroUno, float numeroDos)
{
	float resultado;

	resultado = numeroUno + numeroDos;

	return resultado;
}

/**
 * @fn int resta(int, int)
 * @brief Funcion para restar los operadores ingresados por el usuario en el menu.
 *
 * @param numeroUno
 * @param numeroDos
 * @return
 */
float resta(float numeroUno, float numeroDos)
{
	float resultado;

	resultado = numeroUno - numeroDos;

	return resultado;
}

/**
 * @fn float division(int, int)
 * @brief Divide los operadores ingresados por el usuario, en caso de uno de los operadores sea 0 la funcion retornara 0
 para despues poder informar al usuario que no se pudo realizar la operacion en la funcion mostrar.
 *
 * @param numeroUno
 * @param numeroDos
 * @return
 */
float division(float numeroUno, float numeroDos)
{
	float resultado;

	if(numeroDos == 0 || numeroUno == 0)
	{
		resultado = 0;
	}
	else
	{
		resultado = numeroUno / numeroDos;
	}
	return resultado;
}

/**
 * @fn int multiplicacion(int, int)
 * @brief Multiplica los operadores que el usuario ingrese en el menu.
 *
 * @param numeroUno
 * @param numeroDos
 * @return
 */
float multiplicacion(float numeroUno, float numeroDos)
{
	float resultado;

	resultado = numeroUno * numeroDos;

	return resultado;
}

/**
 * @fn unsigned long int factorizacion(int)
 * @brief Realiza el factorial del numero ingresado en el menu si es diistinto de 0 o 1, en caso de que el numero sea 1 se
 retornara 1, y en caso de ser 0 se retornara 0,
 *
 * @param numeroACalcular
 * @return
 */
unsigned long int factorizacion(float numeroACalcular)
{
	unsigned long int factorial = 1;

	if(numeroACalcular != 1 && numeroACalcular != 0)
	{
		factorial = (int)numeroACalcular * factorizacion((int)numeroACalcular - 1);
	}
	else
	{
		if(numeroACalcular == 0)
		{
			factorial = 0;
		}
	}

	return factorial;
}
