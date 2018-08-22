#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vertice
{
private:
	string nome;
	int indice;
public:
	Vertice();
	Vertice(string nome, int indice);
	Vertice::Vertice(int indice);
	string getNome();
	void setNome(string nome);
	int getIndice();
	~Vertice();
};

