//no funciona

//pido al usuario que me pase una frase donde viene el numero, rescato el número y lo imprimo
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

char* leer_frase(char* dest);
int extraer_num(const char* dest);

int main(){
	char frase[200];
	int num;
	puts("introduce la frase\n");
	leer_frase(frase);
	printf("prueba %s\n", frase);
	num= extraer_num(frase);
	printf("el numero es %s", num);
	return 0;
}

char* leer_frase(char* dest){
	fflush(stdin);
	scanf("%[^\n]", dest);
	fflush(stdin);
	return dest;
}

int extraer_num(const char* dest){
	int i, j=0, num=0;
	for(i=0; i<200; i++){
		if (isdigit(dest[i])){
			//num[j]=dest[i];
			//j++
			num=(num*10+dest[i]);
			//system("pause");
			//printf("%c %d\n", dest[i], dest[i]);
		}
	}
	return num;
}

