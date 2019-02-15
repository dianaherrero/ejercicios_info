#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX_LENGTH 50

int main(){
	int i=0;
	char line[MAX_LENGTH] ;
	FILE* fin=fopen("num.txt", "r");
	if(fin==NULL){
		perror("error");
		return 0;
	}
	
	while(1){
		//fgets(line,MAX_LENGTH, fin);
		fscanf(fin, "%[^\n]", line);
		if(ferror(fin)){
			perror("error");
			break;
		}
		if(feof(fin))
			break;
			
		//procesar
		puts(line);
		
		fclose(fin);
	}

	
	return 0;
}
