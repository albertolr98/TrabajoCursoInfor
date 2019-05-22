#define _CRT_SECURE_NO_WARNINGS
#include "utils.h"
#include<stdlib.h>
#include<stdio.h>

mat allocate_matrix(int N, int M) {
	int i,j;
	mat m = malloc(sizeof(mat*)*N);
	for (i = 0; i < N; i++) {
		m[i] = (BOOL*)malloc(sizeof(BOOL)*M);
	}
	//checking: if(m==NULL){return NULL;}

	//initialization to empty matrix
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			m[i][j] = 0;
		}
	}
	return m;
}
void free_matrix(mat m, int N) {
	int i;
	for (i = 0; i < N; i++) {
		free(m[i]);
	}
	free(m);
	m = NULL;
	return;
}
void print_matrix(mat m, int N,int M) {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("%d", m[i][j]);
		}
		printf("\n");
	}
}
/**********************
* graph management
*
****************************/

graph* init_graph(int NV) {
	//allocate memory for an empty graph size NV
	graph* pg = (graph*)malloc(sizeof(graph));
	//check if(pg==NULL){return NULL;};
	pg->NV=NV;
	pg->m = allocate_matrix(pg->NV, pg->NV);
	
	return pg;
}
void free_graph(graph* pg) {
	free_matrix(pg->m, pg->NV);
	free(pg);
	pg = NULL;
}
void print_header(graph* pg) {
	printf("grafo con %d vertices\n", pg->NV);
}
void print_edges(graph* pg) {
	int i, j;
	for (i = 0; i < pg->NV; i++) {
		for (j = 0; j < pg->NV; j++) {
			if (pg->m[i][j] == 1) {
				printf("[%d--%d]\n", i+1, j+1);
			}
		}
	}
}
int addEdge(graph* pg, int v, int w) {
	if (pg->m[v-1][w-1] != 0 && pg->m[v-1][w-1] != 1) {
		perror("el error es:");
		return -1;
	}
	pg->m[v-1][w-1] = 1;
	return 0;
}
BOOL isEdge(graph* pg, int v, int w) {
	if (pg->m[v-1][w-1] == 1) {
		return 1;
	}
	if (pg->m[v-1][w-1] == 0) {
		return 0;
	}
	return -1;
}
graph* read_graph(const char* filename) {
	FILE* pf;
	graph* pg=NULL;
	int n, m, v, w, edgeCounter = 0;
	char line[100];
	pf = fopen(filename, "r");
	if (pf == NULL) {
		perror("error:");
		return -1;
	}
	while (!feof(pf)) {
		fgets(line, 100, pf);
		if (line[0] == '\n' || line[0] == '\0') continue;
		else if (line[0] == 'c') continue;
		else if (line[0] == 'p') {
			sscanf(line, "%*s%*s%d%d", &n, &m);
			pg = init_graph(n);
		}
		else if (line[0] == 'e') {
			sscanf(line, "%*c%d%d", &v, &w);
			if (isEdge(pg, v, w)) { perror("edge repetido"); }
			if (pg->m[v-1][w-1] != 0&& pg->m[v-1][w-1] != 1) { perror("fuera de grafo"); }
			addEdge(pg, v, w);
			addEdge(pg, w, v);
			edgeCounter++;
		}
	}
	if (edgeCounter-1 != m) {
		perror("el documento esta mal redactado");
		printf("%d %d", edgeCounter, m);
	}
	return pg;
}

int number_of_edges(graph* pg, int v, int w, int vertex) {
	int i;
	int Conexiones=0;
	for (i = 1; i <= v; i++) {
		if (i == vertex) { continue; }
		if (isEdge(pg, vertex, i)|| isEdge(pg, i, vertex)) {
			Conexiones += 1;
		}
	}
	return Conexiones;
}
BOOL is_any_clique(graph* pg, int v, int w) {
	int i, clique = 0;
	for (i = 1; i <= pg->NV; i++) {
		if (number_of_edges(pg,pg->NV, pg->NV,i) == pg->NV - 1) {
			clique = 1;
		}
	}
	return clique;
}