#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//la diferencia con un array clasico es que las direcciones de memoria no son consecutivas
struct nodo_t {
	int dato;
	struct nodo_t * siguiente;
};
typedef struct nodo_t nodo;
nodo* head = NULL;


nodo* init(int dato); //crea nodo cabecera
void imprime_lista(nodo* head);
void push_front(int dato); 
void push_back(int dato);
int pop_last();
void erase(int dato);
nodo* nuevo_elemento();

int* allocate_list_of_int(size_t num_elem);
//intentar int* allocate_list_of_int(size_t num_elem);
//reserva de memoria para matriz
int** allocate_matrix(int n, int m);
void clear_matrix(int**, int n);




void main() {
	nodo* head = init(10);
	printf("el dato de la cabeza es: %d\n", head->dato);

	return;
}





int* allocate_list_of_int(size_t num_elem) {
	int* pInt = (int*)malloc(sizeof(int)*num_elem);
	for (int j = 0; j < num_elem; j++) {
		pInt[j] = 0;
	}
	return pInt;
}
int** allocate_matrix(int n,int m){
	int** pMat = NULL;
	int i, j;
	pMat = (int**)malloc(n * sizeof(int*));
	for (i=0;i<n;i++) {
		pMat[i] = (int*)malloc(sizeof(int)*m);
	}
	//inicializar la matriz a 0s
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			pMat[i][j] = 0;
		}
	}
	//comprobar errores
	if (pMat == NULL) {
		perror("error: ");
		return NULL;
	}

		return pMat;
}
void clear_matrix(int** pMat, int n) {
	int i;
	if (pMat != NULL) {
		for (i = 0; i < n; i++) {
			free(pMat[i]);
		}
		free(pMat);
	}
	return;
}
nodo* nuevo_elemento() {
	return (nodo*)malloc(sizeof(nodo));
}
nodo* init(int dato){
	nodo* head = nuevo_elemento();
	head->dato = dato;
	head->siguiente = NULL;
	return head;
}
void imprime_lista(nodo* head) {
	nodo* actual=head;
	do {
		printf("%d\n", actual->dato);
		actual = actual->siguiente;

	} while (actual->siguiente!=NULL);
	return;
}
void push_front(int dato) {

}
void push_back(int dato) {

}
int pop_last() {

}
void erase(int dato) {

}