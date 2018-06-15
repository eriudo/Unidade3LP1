#ifndef CIRCUITO_HPP
#define CIRCUITO_HPP

#include <cstdlib>
#include <iostream>
#include <string>

/**
*@file circuito.hpp
*@brief Arquivo .hpp responsável pela declaração dos métodos e atribuitos da classe Circuito.
*@author Erildo Gomes de Medeiros Junior Costa
*@since 01/06/2018
*@date 07/06/2018
*@version 1.0
*/

using namespace std;

class Circuito{  //classe circuito que define todos os parametros necessarios para criar uma pista, no caso o tamanho o nome e a identificaçao
protected:
		string nome;
		int tamanho;
		int id;
public:
		Circuito(string nome, int id, int tamanho);
			string getNome();	
			int getTamanho();
			int getIde();
	};
	
#endif	