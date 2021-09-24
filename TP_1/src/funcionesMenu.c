/*
 * funcionesMenu.c
 */
#include "funcionesMenu.h"

/**
 * @fn void ejecutarMenu()
 * @brief Se encarga de ejecutar el menu de opciones y las funciones de calculo que vienen con este.
 *
 */
void ejecutarMenu()
{
	int opcion;
	float operadorUno = 0;
	float operadorDos = 0;
	float totalSuma = 0;
	float totalResta = 0;
	float totalDiv = 0;
	float totalMult = 0;
	unsigned long int factorialUno = 0;
	unsigned long int factorialDos = 0;

	do{
		separador();
		opcion = pedirOpcion("1) Ingresar primer operador.\n2)Ingresar segundo operador\n3)Calcular todas las operaciones\n4)Informar reultados\n5)Salir\nElija una opcion: ", "ERROR Ingrese una opcion valida: ", 1, 5);
		separador();

		switch(opcion){
		case 1:
			operadorUno = pedirNumero("Ingrese el primer operador: ", "ERROR Ingrese un numero entre -20 y 20", MIN, MAX);
			break;
		case 2:
			operadorDos = pedirNumero("Ingrese el segundo operador: ", "ERROR Ingrese un numero entre -20 y 20", MIN, MAX);
			break;
		case 3:
				totalSuma = suma(operadorUno, operadorDos);
				totalResta = resta(operadorUno, operadorDos);
				totalDiv = division(operadorUno, operadorDos);
				totalMult = multiplicacion(operadorUno, operadorDos);
				factorialUno = factorizacion(operadorUno);
				factorialDos = factorizacion(operadorDos);

			break;
		case 4:
			mostrarResultados(operadorUno, operadorDos, totalSuma, totalResta, totalDiv, totalMult, factorialUno, factorialDos);
			break;
		}
	}while(opcion != 5);

	if(opcion == 5)
	{
		printf("=========FIN DEL PROGRAMA=========");
		limpiarConsola();
	}
}

/**
 * @fn int pedirOpcion
 * @briefPide un numero entero para manejar las opciones del menu.
 *
 *
 * @param mensaje
 * @param mensajeError
 * @param minimo
 * @param maximo
 * @return
 */
int pedirOpcion(char* mensaje, char* mensajeError, int minimo, int maximo)
{
	int numeroIngresado;

	printf("%s", mensaje);
	fflush(stdin);
	scanf("%d", &numeroIngresado);

	while(numeroIngresado < minimo || numeroIngresado > maximo)
	{
		printf("%s", mensajeError);
		fflush(stdin);
		scanf("%d", &numeroIngresado);
	}

	return numeroIngresado;
}


/**
 * @fn void mostrarResultados(int, int, int, int, float, int, unsigned long int, unsigned long int)
 * @brief Muestra los resultados obtenidos de los operadores mediante los datos del menu. En el caso de la division primero
 valida que se haya realizado la operacion
 *
 * @param operadorUno
 * @param operadorDos
 * @param suma
 * @param resta
 * @param division
 * @param multiplicacion
 * @param factorialUno
 * @param factorialDos
 */
void mostrarResultados(float operadorUno, float operadorDos, float suma, float resta, float division, float multiplicacion, unsigned long int factorialUno,unsigned long int factorialDos)
{
	printf("Operador uno: %.2f   Operador dos: %.2f\n", operadorUno, operadorDos);
	printf("Total suma: %.2f\n", suma);
	printf("Total Resta: %.2f\n", resta);
	if(division != 0)
	{
		printf("Total division: %.2f\n", division);
	}
	else
	{
		printf("No se pudo realizar la division\n");
	}
	printf("Total multiplicacion: %.2f\n", multiplicacion);
	printf("Factorial uno: %lu\n", factorialUno);
	printf("Factorial dos: %lu\n", factorialDos);
}


/**
 * @fn void separador()
 * @brief Funcion solamente grafica para hacer la interfaz mas comoda, organizada y entendible para el usuario, aplica un separador entre cada accion.
 *
 */

void separador()
{
	printf("\n==================================\n");
}

/**
 * @fn void limpiarConsola()
 * @brief Funcion grafica que se aplica luego de que finaliza el programa para dejar la consola mas organizada.
 *
 */
void limpiarConsola()
{
	printf("\n\n\n\n\n");
}

