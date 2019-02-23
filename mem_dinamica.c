#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct nodo_t{
	int dato;
	struct nodo_t* siguiente;
};

typedef struct nodo_t nodo;

//interfaz
void print(nodo*head);
nodo* init(int dato);
void push_back(nodo* head, int dato);
nodo*push_front(nodo** head, int dato);
void clear(nodo* head);


//funcion auxiliar
nodo* nuevo_elemento(){
	nodo* cosa;
	cosa=(nodo*)malloc(sizeof(nodo));
	return cosa;
}

nodo* init(int dato){
	nodo* head=nuevo_elemento();
	head->dato = dato;
	head->siguiente = NULL;
	return head;	
}

//variable global head
//nodo* head=NULL;

//imprime desde donde le mandes hasta que llegue al último que tenga datos
void print(nodo* cabeza){
	nodo* actual=cabeza;
	do{
		printf("%d ", actual->dato);
		actual=actual->siguiente;
	}while(actual!=NULL);
}

void push_back(nodo* cabeza, int dato){
	nodo* actual=cabeza;
	nodo* pElem; 
	while(actual->siguiente!=NULL){	//actualiza el actual hasta que sea el ultimo
		actual=actual->siguiente;
	}
	//aquí tienes que tener que actual->tail. Haces un nuevo nodo y metes sus  datos
	pElem=nuevo_elemento();
	pElem->dato=dato;
	pElem->siguiente=NULL;
	puts("Nodo añadido \n");
	//haces que el que anteriormente era el ultimo apunte a este nuevo
	actual->siguiente=pElem;
}

nodo*push_front(nodo** cabeza, int dato){
	nodo* actual=*cabeza; //lo del ** no es tontería es para poder cambiar la dirección de head (variable global)
	nodo* pElem;
	//nuevo
	pElem=nuevo_elemento();
	pElem->dato=dato;
	pElem->siguiente=actual;
	*cabeza=pElem;
	
	return *cabeza;
}

//liberar memoria 
void clear(nodo* cabeza){
	nodo* actual=cabeza;
	nodo* siguiente=NULL;
	
	do{
		siguiente=actual->siguiente;
		free(actual);
		actual=siguiente;
	}
	while(actual->siguiente!=NULL);
	
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
