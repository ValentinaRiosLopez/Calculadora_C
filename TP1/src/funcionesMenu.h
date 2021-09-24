/*
 * funcionesMenu.h
 */

#ifndef FUNCIONESMENU_H_
#define FUNCIONESMENU_H_
#include <stdio.h>
#include <stdlib.h>
#include "funcionesCalculo.h"

#define MIN -20
#define MAX 20


void ejecutarMenu();
int pedirOpcion(char* mensaje, char* mensajeError, int minimo, int maximo);
void separador();
void limpiarConsola();
void mostrarResultados(float operadorUno, float operadorDos, float suma, float resta, float division, float multiplicacion, unsigned long int factorialUno,unsigned long int factorialDos);


#endif /* FUNCIONESMENU_H_ */
