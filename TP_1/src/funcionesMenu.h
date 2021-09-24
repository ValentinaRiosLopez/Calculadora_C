/*
 * funcionesMenu.h
 *
 */

#ifndef FUNCIONESMENU_H_
#define FUNCIONESMENU_H_
#include <stdio.h>
#include <stdlib.h>
#include "funcionesCalculo.h"

void mostrarSeparador();
void ejecutarMenu();
int pedirNumeroEntero(char* mensaje, char* mensajeError, int min, int max);
void mostrar(float operadorUno, float operadorDos, float suma, float resta, float division, float multiplicacion, unsigned long long factorialUno, unsigned long long factorialDos);


#endif /* FUNCIONESMENU_H_ */
