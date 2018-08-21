#pragma once
#include "Vertice.h"
#include <vector>

using namespace std;

class Grafo
{
private:
	vector <vector<float>> matrizADJ;
	int tamanho;
	Grafo();
	
public:
	Grafo(int tamanho);
	~Grafo();
	bool cria_adjacencia(int linha,int coluna,float peso); // cria uma adjacência entre i e j com custo P no grafo G;
	bool remove_adjacencia(int linha, int coluna); // remove a adjacência entre i e j no grafo G;
	vector <Vertice> adjacentes(int indice); // atualiza a informação do nó i com o valor V (que deve ser uma string) no grafo G;
	bool seta_informacoes(int indice, string nome); // atualiza a informação do nó i com o valor V (que deve ser uma string) no grafo G
	void imprime()
};

