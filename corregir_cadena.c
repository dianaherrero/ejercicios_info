#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char cad[]="hola mundo creeel";
	char* p;
	p= strstr(cad, "cre");
	strcpy(p, "cruel\0");
	puts(cad);
	
}
