#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct nodo_t{
	int dato;
	nodo_t* siguiente;
};

typedef nodo_t nodo;

//interfaz
void print(nodo*head);
nodo* init(int dato);
void push_back(nodo* head, int dato);
nodo*push_front(nodo_t** head, int dato);
void clear(nodo* head);


//funcion auxiliar
nodo* nuevo_elemento(){
	return(nodo*)malloc(sizeof(nodo));
}

nodo* init(int dato){
}


nodo* head=NULL;

void print(nodo* head){
	nodo* actual=head;
	nodo* pElem;
	do{
		printf("%d ", actual->dato);
		actual=actual->siguiente;
	}while(actual!=NULL);
}

void push_back(nodo* head, int dato){
	nodo* actual=head;
	while(actual->siguiente!=NULL){
		actual=actual->siguiente;
	}
	//tiene que pasar que actual->tail
	pElem=nuevo_elemento();
	pElem->dato=dato;
	pElem->siguiente=NULL;
	puts(" ");
	//actual->siguiente=pElem
}

nodo*push_front(nodo_t** head, int dato){
	nodo* actual=*head;
	
	//nuevo
	nodo* pElem=nuevo_elemento();
	pElem->dato=dato;
	pElem->siguiente=actual;
	*head=pElem;
	
	return *head;
}

//liberar memoria (creo que está aun pendiente)
void clear(nodo* head){
	nodo* actual=head;
	nodo* siguiente=NULL;
	
	while(actual->siguiente!=NULL){
		siguiente=actual->siguiente;
		free(actual);
	}
	
}

//test unitario
int main(){
	nodo* head=init(10);
	printf("el dato de la cabeza es: %d\n", head->dato);
	print(head);
	
	push_back(head, 27);
	print(head);
	
	push_front(&head, 43);
	print(head);
	
	return 0;
}
