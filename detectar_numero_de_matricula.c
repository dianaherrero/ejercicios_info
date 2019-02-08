//no funciona

//isdigit: lee un caracter y te devuelve un valor true si es un dígito decimal
//strtol: convierte string to long

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int leer_num_matr(char* cadena);
long int imprimir_numero(char* cadena);

int main(){
	long int num=0;
	char str[]="manuel_87550";
	leer_num_matr(str);
	puts(str);
	num= imprimir_numero(str);
	printf("El numero es: %ld\n", num);
}

int leer_num_matr(char* cadena){
	puts("Introduzca cadena\n");
	fflush(stdin);
	gets(cadena);
}

long int imprimir_numero(char* cadena){
	int i;
	long int num=0;
	char* p= cadena;
	for(;i<50;i++){
		if(isdigit(*p)){
			num=strtol(p,NULL, 10);
		}
	}
}
