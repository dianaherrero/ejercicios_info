# include <stdlib.h>
# include <stdio.h>

int get_info(int*, int*, char*);
int resultado (int, int, char);

int get_info(int *num1, int *num2, char *op){
	puts("introduzca la operación sin espacios (ej 5x2) y pulse enter\n");
	fflush(stdin);
	scanf("%d%c%d", num1, op, num2);
	fflush(stdin);
	//printf("operacion: %d%c%d\n", *num1, *op, *num2 );
	return 0;
}
int resultado(int num1, int num2, char op){
	int r;
	switch (op){
		case '+':
			r=num1+num2;
		//	printf("result: %d\ o %dn", num1+num2, r);
			break;
		case '-':
			r=num1-num2;
			break;
		case 'x':
			r=num1*num2;
			break;
		case 'X':
			r=num1*num2;
			break;
		case '*':
			r=num1*num2;
			break;
		case '/':
			r=num1/num2;
			break;

	}
	return r;
}

int main(){
	int num1;
	int num2;
	char op;
	int result;
	get_info (&num1, &num2, &op);
	result=resultado(num1, num2, op);
	printf("el resultado es %d\n", result);
	return 0;
}
