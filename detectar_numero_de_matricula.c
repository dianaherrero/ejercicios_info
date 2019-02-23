//no funciona

//isdigit: lee un caracter y te devuelve un valor true si es un dígito decimal
//strtol: convierte string to long

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int leer_num_matr(char* cadena);
long int imprimir_numero(char* cadena[]);

int main(){
	long int num=0;
	char str[20];
	leer_num_matr(str);
	num= imprimir_numero(str);
	printf("El numero es: %ld\n", num);
}

int leer_num_matr(char* cadena){
	puts("Introduzca cadena\n");
	fflush(stdin);
	gets(cadena);
	fflush(stdin);
}

long int imprimir_numero(char* cadena[]){
	int i=0;
	long int num=0;
	char* p= cadena;
//	printf("Ha llegado %s\n", cadena);
//	printf("He cogido %s\n", p);
	for(i=0;i<50;i++){
		if(isdigit(p[i])!=0){
//			printf("found%c ",p[i]);
			num=num*10+(int)p[i]-'0';
//			printf("%ld\n", num);
		}
	}
	return num;
}
