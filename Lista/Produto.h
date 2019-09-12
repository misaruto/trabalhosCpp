/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Produto.h
 * Author: misael
 *
 * Created on September 9, 2019, 8:41 PM
 */

#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>
using std::string;
using std::getline;
class Produto {
public:
	int getCodigo();
	char getNome();
	float getPreco();
	int getEstoque();

	void setCodigo(int nome);
	void setNome(string nome);
	void setPreco(float preco);
	void setEstoque(int estoque);

	void cadastraProdutos();
    void copiaProduto(const Produto& prod);
    Produto();
    Produto(const Produto& orig);
    virtual ~Produto();
private:
	int codigo;
	string nome;
	float preco;
	int estoque;
};

#endif /* PRODUTO_H */

