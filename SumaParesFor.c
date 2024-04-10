/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para imprimir la suma de los número pares desde el 0 hasta 
 * el 1000 con el ciclo for.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de varaibles.
	int numero, par, suma;
	
	//Proceso
	for(numero = 0; numero <= 1000; numero++)
	{
		par = numero % 2;
		
		if(par == 0)
		{
			suma = suma + numero;
		}
	}
	
	//Imprimir.
	printf(" La suma de los números pares del 0 hasta el 1000 es de: %d"
	, suma);
	
	return 0;
}

