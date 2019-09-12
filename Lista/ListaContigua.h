/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaContigua.h
 * Author: misael
 *
 * Created on September 9, 2019, 8:32 PM
 */

#ifndef LISTACONTIGUA_H
#define LISTACONTIGUA_H

#include "Produto.h"
class ListaContigua {
public:
    ListaContigua();
    
    void shiftEnd();
    void shiftFront();
    void imprimeProdutos();

    ListaContigua(const ListaContigua& orig);
    virtual ~ListaContigua();
private:
	int tamanho;
	int quantidade;
	Produto*lista;
};

#endif /* LISTACONTIGUA_H */

