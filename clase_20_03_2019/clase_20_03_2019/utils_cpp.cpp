//definimos clase Graph

#include"utils_cpp.h"
using namespace std;

namespace a309 {
	mat allocate_matrix(int N, int M) {
		
		mat m = new unsigned char*[N];
		for (int i = 0; i < N; i++) {
			m[i] = new unsigned char[M];
		}
		//checking: if(m==NULL){return NULL;}

		//initialization to empty matrix
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++) {
				m[i][j] = 0;
			}

		return m;
	}
	void free_matrix(mat m, int N) {
		int i;
		for (i = 0; i < N; i++) {
			delete[] m[i];
		}
		delete[] m;
		m = NULL;
	}
	ostream& print_matrix(mat m, int N, int M, ostream& o) {
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				o << static_cast<int>(m[i][j])<<" ";
			}
			o << endl;
		}
		return o;
	}
}
void Graph::clear_graph() {
	if (this->pg) {
	a309::free_matrix(this->pg, this->NV);
	this->NV = 0;
}
}
int Graph::init_graph(int NV) {

	clear_graph();		//libero el espacio de memoria

	//reservo espacio de memoria
	this->NV = NV;
	pg = a309::allocate_matrix(this->NV, this->NV);
	

	return 0;
}

ostream& Graph::print_header(ostream& o) {
	o << "grafo con "<<this->NV<<" vertices" << endl;
	return o;
}
ostream& Graph::print_edges(ostream& o) {
	for (int i = 0; i < this->NV - 1; i++) {
		for (int j = i + 1; j < this->NV; j++) {
			if (this->pg[i][j] == 1) {
				o << "[" << i << "--" << j << "]";
			}
		}
	}
	return o;
}

int Graph::addEdge(int v, int w) {
	if (v >= this->NV || v < 0) return -1;
	if (w >= this->NV || w < 0) return -1;

	this->pg[v][w] = 1;
	this->pg[w][v] = 1;
	return 0;
}
unsigned char Graph::isEdge(int v, int w){
	return pg[v][w];
}

int Graph::degree(int v) {
	int deg = 0;

	for (int i = 0; i < this->NV; i++) {
		if (this->pg[v][i] == 1) deg++;
	}

	return  deg;
}
int Graph::read_graph(string filenamee) {
	ifstream pi;

}