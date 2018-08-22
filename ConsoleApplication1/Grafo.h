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
	Grafo();
	
public:
	Grafo(int tamanho);
	~Grafo();
	bool cria_adjacencia(int linha,int coluna,float peso); // cria uma adjac�ncia entre i e j com custo P no grafo G;
	bool remove_adjacencia(int linha, int coluna); // remove a adjac�ncia entre i e j no grafo G;
	bool cria_vertice(string nome, int indice);
	bool cria_vertice(int indice);
	bool remove_vertice(int indice);
	int adjacentes(int indice); // atualiza a informa��o do n� i com o valor V (que deve ser uma string) no grafo G;
	bool seta_informacoes(int indice, string nome); // atualiza a informa��o do n� i com o valor V (que deve ser uma string) no grafo G
	void imprime()
};

