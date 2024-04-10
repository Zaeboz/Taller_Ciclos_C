/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para hacer que el usuario ingrese un número par con el ciclo
 * do while.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de varaibles.
	int numeroPar, division;
	
	do
	{
		//Imprimir.
		printf("Ingrese un número par:");
		
		//Pedir datos al usuario.
		scanf(" %d", &numeroPar);
		
		division = numeroPar % 2;
		
	}while(division != 0); 
	
	return 0;
}

