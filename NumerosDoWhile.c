/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para imprimir los número del 0 hasta el 9 con el ciclo do
 * while 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de variables
	int numero = 0;
	
	//Proceso
	
	do
	{
		//Imprimir
		printf(" %d", numero);
		
		numero++;
		
	}while(numero < 10);
	
	return 0;
}

