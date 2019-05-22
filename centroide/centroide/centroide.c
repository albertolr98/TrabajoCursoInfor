#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define NUM_PUNTOS 4

struct punto_t {
	double x;
	double y;
};
struct punto_t centroide(struct punto_t*, int size);
void imprime(struct punto_t);
void main() {
	struct punto_t puntos[NUM_PUNTOS-1];
	struct punto_t* cPunto;
	puntos[0].x = 0;
	puntos[0].y = 0;
	puntos[1].x = 0;
	puntos[1].y = 1;
	puntos[2].x = 2;
	puntos[2].y = 2;
	puntos[3].x = 1;
	puntos[3].y = 0;


	cPunto = &puntos[0];
	imprime(centroide(cPunto, NUM_PUNTOS));


	system("pause");
	return 0;
}

struct punto_t centroide(struct punto_t* v, int size) {
	struct punto_t resultado = { 0,0 };
	for(int i=0;i<size;i++){
		resultado.x += v[i].x;
		resultado.y += v[i].y;
	}
	resultado.x = resultado.x / size;
	resultado.y = resultado.y / size;

	return resultado;
}
void imprime(struct punto_t v){
	printf("El centroide es x=%f,y=%f\n", v.x, v.y);
}