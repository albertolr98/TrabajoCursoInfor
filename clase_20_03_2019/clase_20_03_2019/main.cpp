#include<iostream>
#include"utils_cpp.h"

using namespace a309;

int unit_test_allocate_matrix() {
	mat matriz = allocate_matrix(5, 10);
	matriz[0][1] = 1;
	//print_matrix(matriz, 5, 10);

	if (matriz == NULL) return -1;
	if (matriz[0][1] != 1) return -1;

	free_matrix(matriz, 5);
	return 0;
}

void main() {
	if (unit_test_allocate_matrix() != 0) { puts("error en allocate_matrix"); }
	system("pause");
	return;
}