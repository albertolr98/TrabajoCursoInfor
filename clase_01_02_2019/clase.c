#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int foo(){
	static int a = 8;
	a++;
	return a;
}

 struct  alumno_t {
	int altura;
	int inteligencia;
};
 typedef struct alumno_t alumno;
 enum palo_t{oros, bastos, espadas, copas};
 typedef enum palo_t palo_t;
 struct carta {
	 int num;
	 palo_t p;
 };

int main() {
	struct carta micarta;
	alumno santi;
	santi.inteligencia = sizeof(int*);
	
	printf("%i\n", santi.inteligencia);
	int altura = 0; //variable automatica
	int res = foo();
	res = foo();
	res = foo();
	printf("%i\n", res);
	system("pause");
	return 0;
}