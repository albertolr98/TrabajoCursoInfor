//funciones utiles para 

typedef unsigned int BOOL;
typedef BOOL** mat;

struct _grafh {
	mat m;//matriz de adyacencias
	int NV;//numero de vertices
};
typedef struct _grafh graph;

/*****************************
*alocation utilities
*
*****************************/
mat allocate_matrix(int N, int M);
void free_matrix(mat, int N);
void print_matrix(graph* pg,int n, int m);

/**********************
* graph management
*
****************************/

graph* init_graph(int NV);//allocate memory for an empty graph size NV
void free_graph(graph* pg);
void print_header(graph* pg);
void print_edges(graph* pg);
int addEdge(graph* pg, int v, int w);
BOOL isEdge(graph* pg, int v, int w);
int number_of_edges(graph* pg, int v, int w, int vertex);
BOOL is_any_clique(graph* pg, int v, int w);
/*********************
* graph I/O
*
*********************/
graph* read_graph(const char* filename);