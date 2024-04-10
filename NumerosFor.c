/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para imprimir los número del 0 al 9 con el ciclo for.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de variables.
	int numero;
	
	//Proceso.
	for(numero = 0; numero <10; numero++)
	{
		//Imprimir resultados.
		printf(" %d", numero);
	}
	
	return 0;
}

