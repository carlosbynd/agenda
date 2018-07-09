#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main (){

	int opcion = 0, i = 0;

	if (mostrarDiaActual()!=0){
		printf("Se ha producido un error al mostrar la informacion del dia actual.");
		return 1;
	}

	while(true){

		printf("\nSeleccione una opcion:");
		printf("\n\t1. Registrar una nueva entrada.");
		printf("\n\t2. Consultar informacion.");
		printf("\n\t3. Salir.");

		scanf("%d", opcion);

		if (opcion == 1){
			manejarRegistroEntrada();
		} else if (opcion == 2){
			manejarConsulta();
		} else if (opcion == 3){
			break;
		} else {
			printf("\nOpcion no valida.");
		}
	} 

	
	return 0;
}