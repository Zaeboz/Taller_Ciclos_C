/*
 * Juan Enmanuel Gutiérrez Sánchez. 
 * Fecha: 25/04/2019.
 * Programa para pedir un número y compararlo dentro de un rango, si no
 * está se le veulve a pedir el número al usuario.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declaración de varaibles.
	int numero, rango1, rango2;
	
	//Pedir datos
	printf("Ingrese el rango 1: ");
	scanf(" %d", &rango1);
	
	printf("Ingrese el rango 2: ");
	scanf(" %d", &rango2);
	
	//Proceso	
	do
	{
		//Imprimir.
		printf("ingrese el número: ");
		
		scanf(" %d", &numero);
		
	}while(numero >= rango2 || numero <= rango1);
		
		
	
	return 0;
}

