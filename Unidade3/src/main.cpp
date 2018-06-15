#include "../include/circuito.hpp"
#include "../include/corrida.hpp"
#include "../include/sapo.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/**
*@file main.cpp
*@brief Arquivo main que gerencia as funcionalidades do nosso jogo dos sapos.
*@author Erildo Gomes de Medeiros Junior Costa
*@since 01/06/2018
*@date 07/06/2018
*@version 1.0
*/

/*@brief Ĺink para o github onde este arquivo está disponibilizado: https://github.com/eriudo/Projeto3_LP1_UFRN*/

using namespace std;

void addcircuito(Corrida &jogos){ //funcao criada com a finalidade de adicionar uma nova pista ao jogo
	string nome;
	int id,tamanho;
	cout << "Digite o nome da sua pista" << endl;
	cin >> nome;
	cout << "Digite o numero de identificacao dela" << endl;
	cin >> id;
	cout << "Digite o tamanho da sua pista" << endl;
	cin >> tamanho;

	Circuito *pista1 = new Circuito (nome,id,tamanho);
	jogos.add_arqcircuito(pista1);
}

void addsapo(Corrida &girino){ //funcao criada com a finalidade de adicionar um novo sapo ao jogo
	string nome;
	int id,provas,vitoria,empate,pulos;
	cout << "Digite o nome do seu sapo" << endl;
	cin >> nome;
	cout << "Digite o numero de identificacao dele" << endl;
	cin >> id;
	cout << "Digite a quantidade de provas disputadas por ele" << endl;
	cin >> provas;
	cout << "Digite a quantidade de provas que ele ganhou" << endl;
	cin >> vitoria;
	cout << "Digite a quantidade de provas que ele empatou" << endl;
	cin >> empate;
	cout << "Digite o total de pulos que ele deu" << endl;
	cin >> pulos;

	if(empate + vitoria <= provas){
		Sapo *girinos = new Sapo (nome,id,provas,vitoria,empate,pulos);
		girino.add_arqsapo(girinos);
	}else{
		cout << "Desculpe mas os numeros informados estao errados, seu sapo nao foi criado" << endl;
	}
	
}

int main()
{
	int m_id, m_id_c, m_empate, m_vitoria, m_pulot,m_distancia, m_provas; //variaveis correspondentes aos sapos e as pistas
	string m_nome_s, m_nome_c;//variaveis correspondentes aos sapos e as pistas
	int inicializador;

	ifstream arquivo;
	arquivo.open("docs/sapinhos.txt");
	Corrida nova; //variavel nova para criarmos uma corrida, com os arquivos

if (arquivo.is_open()){  //ler o arquivo sapinho.txt criado, que contem as informacoes dos sapos
	while (!arquivo.eof()){
		arquivo >> m_nome_s;
		arquivo >> m_id;
		arquivo >> m_provas;
		arquivo >> m_vitoria;
		arquivo >> m_empate;
		arquivo >> m_pulot;

		Sapo *sapinho = new Sapo(m_nome_s,m_id,m_provas,m_vitoria,m_empate,m_pulot);
		nova.add_sapo(sapinho);
		
	}
} else {
	cout << "nao temos como abrir um arquivo que nao existe" << endl;
}
	arquivo.close();

	ifstream arquivopista;
	arquivopista.open("docs/fases.txt");

	if (arquivopista.is_open()){ //ler o arquivo fases.txt criado, que contem as informacoes das pistas
		while (!arquivopista.eof()){
				arquivopista >> m_nome_c;
				arquivopista >> m_id_c;
				arquivopista >> m_distancia;

			Circuito *pista = new Circuito(m_nome_c, m_id_c, m_distancia);
			nova.add_circuito(pista);
		
	}
} else {
	cout << "nao temos como abrir um arquivo que nao existe" << endl;
}
	arquivopista.close();

	cout << "-------------- BEM-VINDO AO CORRIDA DOS SAPOS MALUCOS --------------" << endl; //menu do jogo
	cout << "digite 1 para Adicionar uma pista" << endl;
	cout << "digite 2 para Adicionar um sapo" << endl;
	cout << "digite 3 para ver os sapos cadastrados" << endl;
	cout << "digite 4 para ver as pistas" << endl;	
	cout << "digite 5 para comecar uma experiencia incrivel de uma corrida de sapos malucos" << endl;
	cin >> inicializador;
	switch (inicializador){ //um case para ser usado como uma tomada de decisoes a partir do menu do jogo
		case 1:
			addcircuito(nova); //adicionar uma nova pista a partir da funcao addcircuito
		break;
		case 2:
			addsapo(nova); //adicionar um novo sapo a partir da funcao addsapo
		break;	
		case 3:
			nova.dados_sapo(); //mostrar na tela as informaçoes dos sapos atraves da funçao dados_sapo
		break;
		case 4:
			nova.dados_circuito(); //mostrar na tela as informaçoes do circuito atraves da funçao dados_circuito
		break;
		case 5:
			srand(time(NULL));
			nova.run();
		break;
		default:
			cout << "Voce entrou com uma opcao que nao eh valida, por favor repita a operacao" << endl; //caso o usuario nao digite um valor exposto no menu do jogo
		}
		
	


	return 0;
}