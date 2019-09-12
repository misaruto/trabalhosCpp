/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Produto.cpp
 * Author: misael
 * 
 * Created on September 9, 2019, 8:41 PM
 */
#include <string.h>
#include "Produto.h"
#include <iostream>
using namespace std;

Produto::Produto() {
	codigo = 0;
	nome = new char[60];
	preco = 0.0;
	estoque = 0;
}
int Produto::getCodigo(){
	return this->codigo;
}
char Produto::getNome(){
	return this->codigo;
}
float Produto::getPreco(){
	return this->preco;
}
int Produto::getEstoque(){
	return this->estoque;
}

void Produto::setCodigo(int codigo){
	this->codigo = codigo;
}
void Produto::setNome(string nome){
	this->nome = nome;
}
void Produto::setPreco(float preco){
	this->preco = preco;
}
void Produto::setEstoque(int estoque){
	this->estoque = estoque;
}

void Produto::copiaProduto(const Produto& prod){
	this->codigo = prod.codigo;
	this->nome = prod.nome;
	this->preco = prod.preco;
	this->estoque = prod.estoque;
}

void Produto::cadastraProdutos(){
	int cod,est;
	float p;
	string nome = "";

	cout << "**** Cadastro **** " << endl;
	
	cout << "Codigo: ";
	cin >> cod;
	cout << "" << endl;
	
	cout << "Nome: ";
	getline (cin, nome);
	cout << "" << endl;
	
	cout << "Preço: ";
	cin >> p;
	cout << "" << endl;

	cout << "Quantidade em estoque: ";
	cin >> est;
	cout << endl;

	setCodigo(cod);
	setNome(nome);
	setPreco(p);
	setEstoque(est);

}
Produto::Produto(const Produto& orig) {
}

Produto::~Produto() {
}

