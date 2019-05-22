//
#include"mat.h"
#include<iostream>


namespace apple {
	namespace matematicas {
		int sumar(int a, int b) {
			return a + b;
		}
		puntos& sumar(puntos &a, puntos &b) {
			
			a.x += b.x;
			a.y + b.y;
			return a;
		}
		puntos operator + (const puntos &a, const puntos &b) {
			puntos pres;
			pres.x = a.x + b.x;
			pres.y = a.y + b.y;
			return pres;
		}
	}
	namespace graficos{
	
	}
	namespace matrices {
		int **allocate_matrix(int N, int M) {
			int**m = new int*[N];
			for (int i = 0; i < N; i++) {
				m[i] = new int[M];
			}
			//inicializacion
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					m[i][j] = 0;
				}
			}
			return m;
		}
		void free_matrix(int**m, int N) {
			for (int i = 0; i < N; i++) {
				delete[] m[i];
			}
			delete[] m;
			m = NULL;
		}

		void display_matrix(int**m, int N, int M) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					printf("%d ", m[i][j]);
				}
				puts("");
			}
		}
	}
}
