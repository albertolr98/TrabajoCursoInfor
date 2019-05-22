//utils_cpp.h declaration of the class graph
#ifndef _UTILS_PLUS_PLUS_H_
#define _UTILS_PLUS_PLUS_H_

#include<iostream>


			/****************
		* allocation utilities
		*
		****************/
		namespace a309 {

			typedef unsigned char** mat;		//BYTE
			mat allocate_matrix(int N, int M);
			void free_matrix(mat m, int N);
			std::ostream& print_matrix(mat m, int N, int M, std::ostream&);


		}

		class Graph {
			int NV;		//numero de vertices
			a309::mat pg;

		public:
			Graph(int NV_out) :NV(NV_out), pg(NULL) { init_graph(NV); }
			~Graph() { clear_graph(); }
			int init_graph(int NV);	//alocate memory for empty graph of size NV	
			void clear_graph();
			
			////////////////////////////
			//utilidades
			std::ostream& print_header(std::ostream&);
			std::ostream& print_edges(std::ostream&);
			int addEdge(int v, int w);
			unsigned char isEdge(int v, int w);
			int degree(int v);
			int read_graph(std::string);

		};

#endif


