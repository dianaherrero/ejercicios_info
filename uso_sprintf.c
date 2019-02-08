#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int al=50;
	char str [100];
	sprintf(str, "los alumbos del A309 son %d", al);
	printf("voy a imprimir: %s", str);
	return 0;
}
