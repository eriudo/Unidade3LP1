#include "../include/sapo.hpp"

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>


/**
*@file sapo.cpp
*@brief Arquivo ".cpp" que gerencia os métodos e atributos da classe Sapo.
*@author Erildo Gomes de Medeiros Junior Costa
*@since 01/06/2018
*@date 07/06/2018
*@version 1.0
*/

using namespace std;
//Nesse arquivo validamos todos os atributos das classes a partir das funcoes get e set usando a ferramenta this

Sapo::~Sapo(){

}

Sapo::Sapo(string nome, int identificador, int provas_disp, int vitorias, int empates, int pulos_total){
	this -> nome = nome; 
	this -> identificador = identificador;
	this -> provas_disp = provas_disp;
	this -> vitorias = vitorias;
	this -> empates = empates;
	this -> pulos_total = pulos_total;
	this -> distancia_percorrida = 0;
	this -> pulos_dados = 0;
	this -> ranking = 0;
}

string Sapo::getNome(){
	   return this->nome;
}
int Sapo::getId(){
	return this->identificador;
}	
int Sapo::getDis_per(){
	return this->distancia_percorrida;
}
int Sapo::getPulos(){
	return this->pulos_dados;
}
int Sapo::getProvas(){
	return this->provas_disp;
}
int Sapo::getVitorias(){
	return this->vitorias;
}
int Sapo::getEmpate(){
	return this->empates;
}
int Sapo::getTotalPulos(){
	return this->pulos_total;
}
int Sapo::getRanking(){
	return this->ranking;
}
 	   void Sapo::setDis_per(int distancia_percorrida){
 	   		this->distancia_percorrida = distancia_percorrida;
 	   }
	   void Sapo::setPulos(int pulos_dados){
	   		this->pulos_dados = pulos_dados;
	   }
	   void Sapo::setProvas(int provas_disp){
	   		this->provas_disp = provas_disp;
	   }
	   void Sapo::setVitorias(int vitorias){
	   		this->vitorias = vitorias;
	   }
	   void Sapo::setEmpate(int empates){
	   		this->empates = empates;
	   }
	   void Sapo::setTotalPulos(int pulos_total){
	   		this->pulos_total = pulos_total;
	   }
	   void Sapo::setRanking(int ranking){
	   		this->ranking = ranking;
	   }

