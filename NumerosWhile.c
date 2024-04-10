/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para mostras los números del 0 al 9 con el ciclo while. 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de variables.
	int numero = 0;
	
	while (numero <= 9)
	{
		printf(" %d", numero);
		
		numero++;
	}
	
	
	return 0;
}

