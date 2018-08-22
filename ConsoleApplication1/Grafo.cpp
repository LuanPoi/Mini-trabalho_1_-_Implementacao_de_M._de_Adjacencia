#include "Grafo.h"
#include <vector>

Grafo::Grafo()
{
}

Grafo::Grafo(int tamanho)
{
	for (int i = 0; i < tamanho; ++i) {
		for (int j = 0; j < tamanho; ++j) {
			matrizADJ[i][j] = INFINITY;
		}
		vertices[i] = NULL;
	}
}

Grafo::~Grafo()
{
}

bool Grafo::cria_adjacencia(int de, int para, float peso)
{
	matrizADJ[de][para] = peso;
	return true;
}

bool Grafo::remove_adjacencia(int de, int para)
{
	matrizADJ[de][para] = INFINITY;
	return true;
}

bool Grafo::cria_vertice(string nome, int indice) {
	if (vertices[indice] == NULL) {
		vertices[indice] = new Vertice(nome, indice);
		matrizADJ[indice][indice] = 0;
		return true;
	}
	return false;
}

bool Grafo::cria_vertice(int indice){
	if (vertices[indice] == NULL) {
		vertices[indice] = new Vertice(indice);
		matrizADJ[indice][indice] = 0;
		return true;
	}
	return false;
}

bool Grafo::remove_vertice(int indice){
	for (int i = 0; i < tamanho; ++i) {
		matrizADJ[indice][i] = INFINITY;
	}
	for (int j = 0; j < tamanho; ++j) {
		matrizADJ[j][indice] = INFINITY;
	}
	if (vertices[indice] != NULL) {
		vertices[indice]->~Vertice;
		vertices[indice] = NULL;
	}
	return true;
}

int Grafo::adjacentes(int indice)
{
	int adjacencias = 0;
	for (int i = 0; i < tamanho; ++i) {
		if (matrizADJ[indice][i] != INFINITY)
			adjacencias++;
	}
	for (int j = 0; j < tamanho; ++j) {
		if (matrizADJ[j][indice] != INFINITY)
			adjacencias++;
	}
	adjacencias -= 2;
	return adjacencias;
}

bool Grafo::seta_informacoes(int indice, string nome)
{
	vertices[indice]->setNome(nome);
	return true;
}
