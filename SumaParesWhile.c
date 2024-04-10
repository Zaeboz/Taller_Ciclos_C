/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para imprimir la suma de los número pares desde el 0 hasta 
 * el 1000 con el ciclo while
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de varaibles.
	int numero = 0, par, suma;
	
	//Proceso.
	while(numero <= 1000)
	{
		par = numero % 2 ;

		if(par == 0)
		{
			suma = suma + numero;
		}
		
		numero++;
	}
	
	//Imprimir.
	printf("La suma de los número pares del 0 hasta el 1000 es de: %d.", suma);
	
	return 0;
}

