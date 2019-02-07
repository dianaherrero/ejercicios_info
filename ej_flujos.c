#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//isdigit: lee un caracter y te devuelve un valor true si es un dígito decimal

int main (){
	char cadena [50];
	char* c;
	long int numero=0;
	int i;
	int j=0;
	char cad[3];
	puts("Introduzca cadena\n");
	gets(cadena);
	puts("El numero es: ");
	for(i=0;i<50;i++){
		if(isdigit(cadena[i])){
			printf ("%c", cadena[i]);
		}
	}

	return 0;
}
