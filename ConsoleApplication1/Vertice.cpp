#include "Vertice.h"



Vertice::Vertice()
{
	this->nome = "ND";
	indice = NULL;
}

Vertice::Vertice(string nome, int indice)
{
	this->nome = nome;
	this->indice = indice;
}

Vertice::Vertice(int indice)
{
	this->indice = indice;
}

Vertice::~Vertice()
{
}

string Vertice::getNome()
{
	return this->nome;
}

void Vertice::setNome(string nome)
{
	this->nome = nome;
}

int Vertice::getIndice()
{
	return this->indice;
}