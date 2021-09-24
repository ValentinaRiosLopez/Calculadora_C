/*
 * funcionesCalculo.h
 *
 */

#ifndef FUNCIONESCALCULO_H_
#define FUNCIONESCALCULO_H_
#include <stdio.h>
#include <stdlib.h>
#define MIN -20
#define MAX 20

float pedirNumeroFlotante(char* mensaje, char* mensajeError, int min, int max);
float sumar(float numeroUno, float numeroDos);
float restar(float numeroUno, float numeroDos);
float dividir(float numeroUno, float numeroDos);
float multiplicar(float numeroUno, float numeroDos);
unsigned long long factorizar(float numeroIngresado);

#endif /* FUNCIONESCALCULO_H_ */
