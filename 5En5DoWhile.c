/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para imprimir los números del 0 hasta el 1000 en 5 en 5, con
 * el ciclo do while.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de variables.
	int numero = 0;
	
	//Proceso
	do
	{
		//Imprimir
		printf(" %d", numero);
		
		numero = numero + 5;
		
	}while(numero <= 1000);
	
	return 0;
}

