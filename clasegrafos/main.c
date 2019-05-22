#include<stdio.h>
#include<stdlib.h>
#include "utils.h"

//programacion
int unit_test_allocate_matrix() {
	mat matriz = allocate_matrix(5, 10);
	matriz[0][1] = 1;
	print_matrix(matriz, 5, 10);

	if (matriz == NULL) return -1;
	if (matriz[0][1]!=1) return -1;
	free_matrix(matriz, 5);
	return 0;
}
int unit_test_init_graph() {
	graph* pg = init_graph(10);
	pg->m[1][3] = 1;
	print_header(pg);
	print_edges(pg);
	free_graph(pg);
	return 0;
}
int test_unitario_edges() {
	graph* pg = init_graph(10);
	if (isEdge(pg, 4, 3)) {
		printf("es vertice\n");
	}
	else {
		printf("no es vertice\n");
	}
	print_header(pg);
	print_edges(pg);
	addEdge(pg, 4, 3);
	if (isEdge(pg, 4, 3)) {
		printf("es vertice\n");
	}
	else {
		printf("no es vertice\n");
	}
	free_graph(pg);
}
//test unitario
int main() {
	
	//if (unit_test_allocate_matrix() != 0) { puts("error en allocate_matrix"); };
	//test_unitario_edges();
	//unit_test_init_graph();
	graph* pg;
	pg=read_graph("brock200_1.clq");
	print_header(pg);
	if (is_any_clique(pg, pg->NV, pg->NV)) {
		printf("hay clique\n");
	}
	else {
		printf("no hay clique\n");
	}
	printf("numero de conexiones: %d\n",number_of_edges(pg,pg->NV,pg->NV, 1));
	//print_edges(pg);
	print_matrix(pg->m, pg->NV, pg->NV);
	free_graph(pg);
	system("pause");
	return 0;
}