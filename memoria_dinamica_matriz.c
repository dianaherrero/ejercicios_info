#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int* allocate_matrix(int N, int M){
	int i, j;
	int **pMat=NULL;
	//reserva en memoria
	pMat=(int**)malloc(sizeof(int*)*N);
	for(i=0;i<N;i++){
		pMat[i]=(int*)malloc(sizeof(int)*M);
	}
	
	//error check
	if(pMat==NULL){
		perror("error: ");
		return NULL;
	}
	//inicializar la matriz con 0
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			pMat[i][j]=0;
	
	return pMat;
}

void clear_matrix(int** pMat, int N){
	int i;
	if(pMat!=NULL){
		for(i=0;i<N;i++)
			free(pMat[i]);
		free(pMat);
		pMat=NULL;
	}
}

int main(){
	int N=2, M=3;
	
	//crear matriz
	int** pMat=allocate_matrix(N,M);
	pMat[1][1]=6;
	
	//uso
	printf("el numero es %d\n",pMat[1][1]);
	
	//libero
	clear_matrix(pMat, N);
	
	return 0;
}


