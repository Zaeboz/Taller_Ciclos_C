/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para imprimir los número pares del 0 al 100 con el ciclo
 * for.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de variables.
	int numero, par;
	
	//Proceso.
	for(numero = 0; numero <= 100; numero++)
	{
		par = numero % 2;
		
		if(par == 0)
		{
			printf(" %d", numero);
		}
	}
	
	return 0;
}

