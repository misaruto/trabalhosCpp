/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: misael
 *
 * Created on September 9, 2019, 8:14 PM
 */

#include <cstdlib>
#include "Produto.h"
#include "ListaContigua.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
	ListaContigua listaProdutos = ListaContigua();
	Produto prod = Produto();
	int opt=1;
	while(opt != 0){
		cout << "**** Menu **** \n1- Cadastro de Produto\n2- Apagar Produto\n3- Ver produtos\n0- SAIR \n";
		cin >> opt;
		switch(opt){
			case 1:
                        listaProdutos.shiftEnd();
                        
			break;
			case 2:
			listaProdutos.shiftFront();
			break;
			case 3: 
			listaProdutos.imprimeProdutos();
			break;
			default:
			cout <<"Opção invalida";
			break;
		}
	}
	return 0;
}

