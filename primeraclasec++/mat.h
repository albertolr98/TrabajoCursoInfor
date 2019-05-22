//mat.h: interface para matematicas
//date:27/02/2019

#ifndef _MAT_H_
#define _MAT_H_

struct puntos {
	double x;
	double y;
};
namespace apple {
	namespace matematicas {
		int sumar(int a, int b);
		puntos& sumar(puntos &a, puntos &b);
		puntos operator + (const puntos &a, const puntos &b);
	}
	namespace graficos {

	}
	namespace matrices {
		int **allocate_matrix(int N, int M);
		void free_matrix(int**m, int N);

		void display_matrix(int**m, int N, int M);
	}
}

#endif