#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int main(){
	FILE* fout=fopen("log.txt", "w");
	if(fout==NULL){
		perror("error");
		return 0;
	}
	fputs("Hola somos el a309", fout);
	
	fclose(fout);
	
	return 0;
}
