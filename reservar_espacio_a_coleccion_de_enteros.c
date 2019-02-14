//reservar espacio a una colección de 10 enteros

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int* allocate_list(int num_elem){
	int j;
	int* coleccion=(int*) malloc(sizeof(int)*num_elem);
	for(j=0;j<num_elem;j++){
		coleccion[j]=0;
	}
	return coleccion;
}

int main(){
	
	//colección de 10 enteros
	int* coleccion=allocate_list(10);
	coleccion[5]=8;
	
	//uso
	printf("el numero es %d\n",coleccion[5]);
	
	//libero
	free(coleccion);
	
	return 0;
}


