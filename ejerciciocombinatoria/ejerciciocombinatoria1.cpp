#include<stdio.h>
#include<stdlib.h>
#define NUMEROS 9

int main() {
	//Este programa busca entre los numeros de la lista y sin repetir dos veces el mismo número las combinaciones que satisfacen #*##=#*##=#*##
	//solo funciona para numeros de una cifra
	//la solución para los numeros del 1-9 es 3*54=6*27=9*18
	int numeros[] = { 1,2,3,4,5,6,7,8,9};
	int a,b,c,d,e,f,g,h,i;
	int flag = 0;

	//algoritmo para permutar los valores
	//primer digito
	for (a = 0; a < NUMEROS; a++) {
		//segundo digito
		for (b = 0; b < NUMEROS; b++) {
			if (b != a) {
				//tercer digito
				for (c = 0; c < NUMEROS; c++) {
					if ((c != a) && (c != b)) {
						//cuarto digito
						for (d= 0; d < NUMEROS; d++) {
							if ((d != a) && (d != b) && (d != c)) {
								//quinto digito
								for (e = 0; e < NUMEROS; e++) {
									if ((e != a) && (e != b) && (e != c) && (e != d)) {
										//sexto digito
										for (f = 0; f < NUMEROS; f++) {
											if ((f != a) && (f != b) && (f != c) && (f != d) && (f != e)) {
												//septimo digito
												for (g = 0; g < NUMEROS; g++) {
													if ((g != a) && (g != b) && (g != c) && (g != d) && (g != e) && (g != f)) {
														//octavo digito
														for (h = 0; h < NUMEROS; h++) {
															if ((h != a) && (h != b) && (h != c) && (h != d) && (h != e) && (h != f) && (h != g)) {
																//noveno digito
																for (i = 0; i < NUMEROS; i++) {
																	if ((i != a) && (i != b) && (i != c) && (i != d) && (i != e) && (i != f) && (i != g) && (i != h)) {

																		//comprobacion de la condicion
																		if ((numeros[a] * (numeros[b] * 10 + numeros[c])) == (numeros[d] * (numeros[e] * 10 + numeros[f]))) {
																			if ((numeros[a] * (numeros[b] * 10 + numeros[c])) == (numeros[g] * (numeros[h] * 10 + numeros[i]))) {
																				printf("%i*%i%i=%i*%i%i=%i*%i%i\n", numeros[a], numeros[b], numeros[c], numeros[d], numeros[e], numeros[f], numeros[g], numeros[h], numeros[i]);
																				flag = 1;
																			}
																		}



																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (flag == 0) {
		printf("no se han obtenido resultados\n");
	}
	system("PAUSE");
	return 0;
}