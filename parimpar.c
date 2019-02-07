#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int get_number();
int is_even(int dato);

int main(){
	int num, impar;
	num=get_number();
	impar=is_even(num);
	if (impar==0) {
		puts("el numero es par");
	}
	else{
		puts ("el numero es impar");
	}
	return 0;
}

int get_number(){
	int num=0;
	int err=0;
	puts("introduzca un entero\n");
	while (err!=1){
		fflush (stdin);
		err=scanf("%d", &num);
		fflush (stdin);
		if (err!=1)
		puts("se ha equivocado, vuelva a introducir");
	}
	return num;
}

int is_even(int dato){
	int impar;
	impar= (dato%2);
	return impar;
}
