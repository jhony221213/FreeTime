#include <stdio.h>
#include <windows.h>
#include <math.h>

int contador, x; 
int suma = 0;

int main () {
	printf("Programa 27: Imprimir la suma de los numeros del 1 hasta X numero.");
	printf("\nElaborado por: Santiago Bonora Kevin Fabian\t Matricula: 1889085\n");
	printf("\nDame el valor X hasta el que se va a sumar: ");
	scanf("%d",&x);
	printf("\n");
	for(contador = 1; contador <= x; contador ++)
	{
		suma = suma + contador;	
	}
	printf("\tEl resultado de la suma es: %d\n",suma);
	return 0;
}
