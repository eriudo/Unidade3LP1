#include "../include/circuito.hpp"

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/**
*@file circuito.cpp
*@brief Arquivo ".cpp" que gerencia os métodos e atributos da classe Circuito.
*@author Erildo Gomes de Medeiros Junior Costa
*@since 01/06/2018
*@date 07/06/2018
*@version 1.0
*/

using namespace std;

Circuito::Circuito (string nome, int id, int tamanho){ //criando uma pista de corrida para o jogo
		this -> tamanho = tamanho;
		this -> nome = nome;
		this -> id = id;
}

string Circuito::getNome(){ //validando atraves da funcao get os atributos da classe
	   return this -> nome;
}
int Circuito::getIde(){ //validando atraves da funcao get os atributos da classe
	   return this -> id;
}
int Circuito::getTamanho(){ //validando atraves da funcao get os atributos da classe
	   return this -> tamanho;
}