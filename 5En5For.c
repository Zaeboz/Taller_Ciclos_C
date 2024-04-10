/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para imprimir los números del 0 hasta el 1000 en 5 en 5, con
 * el ciclo for.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de variables.
	int numero;
	
	for(numero = 0; numero <= 1000; numero = numero + 5)
	{
		//Imprimir.
		printf(" %d", numero);
	}
	
	
	return 0;
}

