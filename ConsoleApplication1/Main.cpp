#include <iostream>
#include "Vertice.h"
#include "Grafo.h"

using namespace std;

int main() {
	Grafo * grafo = new Grafo(10);
	
	grafo->imprime();
	
	cout << endl;

	grafo->cria_vertice(0, "Jose");
	grafo->cria_vertice(1, "Maria");
	grafo->cria_vertice(2);
	grafo->cria_vertice(3);
	grafo->cria_vertice(4);

	grafo->seta_informacoes(2, "Paulo");
	grafo->seta_informacoes(3, "Claudio");
	grafo->seta_informacoes(4, "Carlos");

	grafo->cria_adjacencia(0, 1, 12);
	grafo->cria_adjacencia(0, 4, 12);
	grafo->cria_adjacencia(2, 0, 12);

	grafo->imprime();

	cout << endl;
	
	cout << "Numero de adjacencias do vertice " << 0 << ": " << grafo->adjacentes(0) << endl;
	
	cout << endl;
	grafo->remove_adjacencia(0, 1);

	grafo->imprime();
	
	cout << endl;

	cout << "Numero de adjacencias do vertice " << 0 << ": " << grafo->adjacentes(0) << endl;

	return 0;
}