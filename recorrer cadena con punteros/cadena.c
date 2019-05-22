#include<stdio.h>
#include<stdlib.h>

int main() {
	char cadena[100]; //defino la cadena
	int* pcadena; //defino el puntero 
	int i; //variable para el bucle for
	int vertical=0 ;

	pcadena = cadena; //el puntero apunta a la cadena

	//se introduce la cadena por teclado
	puts("introduzca una cadena: "); 
	gets(cadena);


	puts("la cadena introducida era:");
	//bucle que recorre la cadena para imprimirla en pantalla
	for (i = 0; i < 100; i++) {
		//si se llega al final de la cadena (\0) se sale del bucle
		if (*(cadena + i) == '\0') {
			break;
		}
		//imprime la cadena letra a letra
		printf("%c", *(cadena + i));
	}
	printf("\n");

	puts("la cadena introducida en vertical es: ");
	//bucle que recorre la cadena para imprimirla en pantalla en vertical
	for (i = 0; i < 100; i++) {
		//si se llega al final de la cadena (\0) se sale del bucle
		if (*(cadena + i) == '\0') {
			break;
		}
		//imprime la cadena letra a letra
		printf("%c\n", *(cadena + i));
	}

	puts("la cadena introducida en vertical y horizontal es: ");
	//bucle que recorre la cadena para imprimirla en pantalla en mix
	for (i = 0; i < 100; i++) {
		//si se llega al final de la cadena (\0) se sale del bucle
		if (*(cadena + i) == '\0') {
			break;
		}
		//imprime la cadena letra a letra
		if (*(cadena + i) == ' ') {
			vertical = !vertical;
		}

		if (vertical) {
			printf("%c\n", *(cadena + i));
		}
		else {
			printf("%c", *(cadena + i));
		}
	}
	printf("\n");

	system("pause");
	return 0;
}