#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int main(){
	int i;
	FILE* fout=fopen("num.txt", "w");
	if(fout==NULL){
		perror("error");
		return 0;
	}
	for(i=0; i<5; i++)
		fprintf(fout, "%d ", i);
	
	fclose(fout);
	
	return 0;
}
