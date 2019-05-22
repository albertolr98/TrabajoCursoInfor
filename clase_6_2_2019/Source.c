#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
//
int introducirnumero();
int comprobarparidad(int);
//
int getdatos(int*,int*,char*);
int calcular();
/*int main(int,int,char) {
	//comprueba si un numero es par o impar
	//comprobarparidad(introducirnumero());

	//calculadora
	int numero1, numero2;
	char simbolo;
	getdatos(&numero1, &simbolo, &numero2);
	
	//leer cadena caracter a caracter
	char str[] = "hola juapo";


	system("pause");
	return 0;
}*/

int introducirnumero() {
	int numero,error;
	printf("escriba un numero: ");
	while (scanf("%d", &numero) != 1) {
		setbuf(stdin, NULL);
		printf("se ha equivocado\n");
	}
	
	return numero;
}
int comprobarparidad(int numero) {
	if (numero % 2 == 0) {
		printf("es par\n");
		return 0;
	}
	else {
		printf("es impar\n");
		return 1;
	}
	
}
int getdatos(int*numero1, int*numero2, char*simbolo) {
	scanf("%i%c%i", &numero1, &simbolo, &numero2);
}
int calcular(int numero1, int numero2, char simbolo) {
	int res;
	switch (simbolo) {
	case'+':
		res = numero1 + numero2;
		
		break;
	case'-':
		break;
	}
}