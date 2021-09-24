/*
 * funcionesMenu.c
 *
 */

#include "funcionesMenu.h"

/**
 * EJECUTA LA INTERFAZ DEL MENU PARA EL USUARIO.
 */
void ejecutarMenu()
{
	int opcion;
		float operadorUno;
		float operadorDos;
		float totalSuma;
		float totalResta;
		float totalDiv;
		float totalMult;
		unsigned long long factorialUno;
		unsigned long long factorialDos;

		do{
			opcion = pedirNumeroEntero("\n==========MENU==========\n1)Ingresar primer operador.\n2)Ingresar segundo Operador.\n3)Calcular todas las operaciones.\n4)Mostrar los resultados.\n5)Salir.\nELIJA UNA OPCION: \n", "ERROR, REINGRESE UNA OPCION ENTRE 1 Y 5: \n", 1, 5);
			mostrarSeparador();

			switch(opcion)
			{
			case 1:
				operadorUno= pedirNumeroFlotante("Ingrese el primer operador (entre 20 y -20): ","ERROR reingrese un numero entre 20 y -20: ", -20, 20);
				break;
			case 2:
				operadorDos= pedirNumeroFlotante("Ingrese el segundo operador (entre 20 y -20): ","ERROR reingrese un numero entre 20 y -20: ", -20, 20);
				break;
			case 3:
				totalSuma = sumar(operadorUno, operadorDos);
				totalResta = restar(operadorUno, operadorDos);
				totalDiv = dividir(operadorUno, operadorDos);
				totalMult = multiplicar(operadorUno, operadorDos);
				factorialUno = factorizar(operadorUno);
				factorialDos = factorizar(operadorDos);
				break;
			case 4:
				mostrar(operadorUno, operadorDos, totalSuma, totalResta, totalDiv, totalMult, factorialUno, factorialDos);
				break;
			}

		}while(opcion != 5);


		if(opcion == 5)
		{
			printf("\n====FIN DEL PROGRAMA====");
		}
}

/**^
 * FUNCION GRAFICA PARA HACER LA INTERFAZ DEL MENU MAS ORGANIZADA PARA EL USUARIO PONIENDO UN SEPARADOR ENTRE ITERACIONES DEL MENU
 */

void mostrarSeparador()
{
	printf("========================\n");
}

int pedirNumeroEntero(char* mensaje, char* mensajeError, int min, int max)
{
	int numeroIngresado;

	printf("%s", mensaje);
	fflush(stdin);
	scanf("%d", &numeroIngresado);

	while(numeroIngresado < min || numeroIngresado > max)
	{
		printf("%s", mensajeError);
		fflush(stdin);
		scanf("%d", &numeroIngresado);
	}

	return numeroIngresado;
}

/**
 * MUESTRA LOS RESULTADOS DE LAS OPERACIONES Y EN CASO DE QUE LA DIVISION RETORNE 0 AVISA QUE NO SE PUDO REALIZAR LA OPERACION
 */
void mostrar(float operadorUno, float operadorDos, float suma, float resta, float division, float multiplicacion, unsigned long long factorialUno, unsigned long long factorialDos)
{
	printf("Operador uno: %.2f   Operador Dos: %.2f\n", operadorUno, operadorDos);
	printf("Suma: %.2f\n", suma);
	printf("Resta: %.2f\n", resta);

	if(division == 0)
	{
		printf("No se pudo realizar la division.\n");
	}
	else
	{
		printf("Division: %.2f\n", division);
	}

	printf("Multiplicacion: %.2f\n", multiplicacion);
	printf("Factorial de %.2f: %I64u\n", operadorUno, factorialUno);
	printf("Factorial de %.2f: %I64u\n", operadorDos, factorialDos);
}
