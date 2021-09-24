/*
 * funcionesCalculo.h
 */

#ifndef FUNCIONESCALCULO_H_
#define FUNCIONESCALCULO_H_
#include <stdio.h>
#include <stdlib.h>
#define MIN -20
#define MAX 20


float pedirNumero(char* mensaje, char* mensajeError, int minimo, int maximo);
float suma(float numeroUno, float numeroDos);
float resta(float numeroUno, float numeroDos);
float division(float numeroUno, float numeroDos);
float multiplicacion(float numeroUno, float numeroDos);
unsigned long int factorizacion(float numeroACalcular);


#endif /* FUNCIONESCALCULO_H_ */
