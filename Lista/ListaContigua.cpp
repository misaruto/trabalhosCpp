/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaContigua.cpp
 * Author: misael
 * 
 * Created on September 9, 2019, 8:32 PM
 */

#include "ListaContigua.h"
#include <iostream>
using namespace std;

ListaContigua::ListaContigua() {
	quantidade = 0;
	cout << "Informe o tamanho da lista de produtos: " << endl;
	cin >> tamanho;
	lista = new Produto [tamanho];

}
void ListaContigua::shiftEnd(){
    Produto prod =  Produto();
	if (this->tamanho <= this->quantidade){
		cout << "Lista cheia" << endl;
	}
	else{
		prod.cadastraProdutos();
		int i = 0;
		if (this->quantidade == 0)
		{   
			this->lista[0].copiaProduto(prod);
		}
		else{
			for (i = this->tamanho; i >= 0; --i)
			{
				this->lista[i].copiaProduto(this->lista[i-1]);
			}
			this->lista[0].copiaProduto(prod);
		}
		this->quantidade = this->quantidade +1;
	}
}
void ListaContigua::shiftFront(){
	int	i =0;
	if (this->quantidade > 0)
	{
		for (i = 0; i < this->quantidade; ++i)
		{
			this->lista[i].copiaProduto(this->lista[i+1]);
		}
		this->quantidade = this->quantidade - 1; 
	}
}

void ListaContigua::imprimeProdutos(){
	int i=0;
	for (i = 0; i < this->quantidade; ++i)
	{
		cout << endl  << "Codigo: "<< this->lista[i].getCodigo()<< endl;
		cout << "Nome: "<< this->lista[i].getNome()<< endl;
		cout << "Preço: "<< this->lista[i].getPreco()<< endl;
		cout << "Estoque: "<< this->lista[i].getEstoque()<< endl << endl;

	}

}
ListaContigua::ListaContigua(const ListaContigua& orig) {
}

ListaContigua::~ListaContigua() {
}

