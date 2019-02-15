#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX_LENGTH 250

typedef struct punto_t punto;

int main(){
	int i;
	float x, y;
	punto lp[4];
	FILE* fout=fopen("datos .txt", "r");
	
	for(i=0;i<4;i++){
		fscanf("%f%f", &lp[i].x,&lp[i].y );
		fprintf("(%f%f)", &lp[i].x,&lp[i].y)
	}
		fclose(fin);
	}

	
	return 0;
}
