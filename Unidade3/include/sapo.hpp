#ifndef SAPO_HPP
#define SAPO_HPP

#include <cstdlib>
#include <string>
#include <random>

/**
*@file sapo.hpp
*@brief Arquivo .hpp responsável pela declaração dos métodos e atribuitos da classe Sapo.
*@author Erildo Gomes de Medeiros Junior Costa
*@since 01/06/2018
*@date 07/06/2018
*@version 1.0
*/

using namespace std;

class Sapo //classe sapo que define todos os atributos necessarios para se criar um sapo.
{
protected:
	string nome;	
	int identificador;
	int distancia_percorrida;
	int pulos_dados;
	int provas_disp;
	int vitorias;
	int empates;
	int pulos_total;
	int ranking;

public:
Sapo(string nome, int identificador, int provas_disp, int vitorias, int empates, int pulos_total); //construtor para criar a classe
~Sapo();

	   string getNome();
	   int getId();	
	   int getDis_per();
	   int getPulos();
	   int getProvas();
	   int getVitorias();
	   int getEmpate();
	   int getTotalPulos();
	   int getRanking();
	   void setDis_per(int distancia_percorrida);
	   void setPulos(int pulos_dados);
	   void setProvas(int provas_disp);
	   void setVitorias(int vitorias);
	   void setEmpate(int empates);
	   void setTotalPulos(int pulos_total);
	   void setRanking(int ranking);	
};

#endif
