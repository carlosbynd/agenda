#include <stdio.h>
#include <stdlib.h>
#include <string.h> /*No se si es esta libreria o es strings.h*/
#include "funciones.h"

int mostrarDiaActual(){

}

int manejarRegistroEntrada(){

	int dia = 0;
	char * cadena;

	printf("\nRegistro de una nueva entrada:\n");

	printf("\nIntroduzca el dia:");
	scanf("%d", dia);

	printf("\nIntroduzca la informacion que quiera guardar:");
	gets(cadena);
}

int manejarConsulta(){

}