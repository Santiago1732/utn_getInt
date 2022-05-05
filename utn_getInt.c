/*
 * utn.c
 *
 *  Created on: Apr 28, 2022
 *      Author: santiago.oliveira
 */

#include <stdio.h>
#include <stdlib.h>

//		(&edad, "		Ingrese edad:\n", "Error\n",	   1,			99,		     2);
int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError,
		int minimo, int maximo, int reintentos) {

int retorno = -1;
int bufferInt;

if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0) {
	do {
		printf("%s", mensaje);
		scanf("%d", &bufferInt);
		if(bufferInt >= minimo && bufferInt <= maximo) {
			*pResultado = bufferInt;
			retorno = 0;
			break;
		} else {
			printf("%s", mensajeError);
			reintentos--;
		}
	}while(reintentos >= 0);

}

return retorno;

}
