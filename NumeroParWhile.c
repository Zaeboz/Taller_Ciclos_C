/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para imprimir los número pares del 0 al 100 con el ciclo
 * while
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de varaibles.
	int numero = 0, par;
	
	//Proceso.
	while(numero <= 100)
	{
		par = numero % 2;
		
		if(par == 0)
		{
			//Imprimir.
			printf(" %d", numero);
		}
		
		numero++;
	}
			
	
	return 0;
}

