#pragma once
#include "Vertice.h"
#include <vector>

using namespace std;

class Grafo
{
private:
	float matrizADJ[100][100];
	Vertice* vertices[100];
	int tamanho;
	string nome;
	Grafo();
	
public:
	Grafo(int tamanho);
	~Grafo();
	bool cria_adjacencia(int de,int para,float peso); // cria uma adjacência entre i e j com custo P no grafo G;
	bool remove_adjacencia(int de, int para); // remove a adjacência entre i e j no grafo G;
	bool cria_vertice(int indice, string nome);
	bool cria_vertice(int indice);
	bool remove_vertice(int indice);
	int adjacentes(int indice); // atualiza a informação do nó i com o valor V (que deve ser uma string) no grafo G;
	bool seta_informacoes(int indice, string nome); // atualiza a informação do nó i com o valor V (que deve ser uma string) no grafo G
	void imprime();
	void printaNome();
	Vertice* getVertices(int indice);
};

