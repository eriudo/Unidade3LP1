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
*@file corrida.cpp
*@brief Arquivo ".cpp" que gerencia os métodos e atributos da classe Corrida.
*@author Erildo Gomes de Medeiros Junior Costa
*@since 01/06/2018
*@date 07/06/2018
*@version 1.0
*/

using namespace std;

Corrida::Corrida(){
	
}

Corrida::~Corrida(){

}
void Corrida::add_sapo(Sapo *novo){  //adicionar o sapo no programa,no final da lista chamada lagoa
	vector<Sapo*>::iterator adicionador;
	int x = 0;
		for (adicionador = lagoa.begin(); adicionador != lagoa.end(); adicionador++)
		{
			if (novo->getId() == (*adicionador) -> getId()){
				x = 1;
			}
	    }
	if(x==0){
		lagoa.push_back(novo); 
	}    
}
void Corrida::add_circuito(Circuito *nova){ //adicionar o circuito no programa, no final da lista chamada temporada
	vector<Circuito*>::iterator adicionador2;
	int y = 0;
		for (adicionador2 = temporada.begin(); adicionador2 != temporada.end(); adicionador2++)
		{
			if (nova->getIde() == (*adicionador2) -> getIde()){
				y = 1;
			}
	    }
	if(y==0){
		temporada.push_back(nova); 
	}  

}
void Corrida::add_arqsapo(Sapo *novo){ //adicionar o sapo no arquivo
	vector<Sapo*>::iterator adicionador3;
	int z = 0;
		for (adicionador3 = lagoa.begin(); adicionador3 != lagoa.end(); adicionador3++)
		{
			if (novo->getId() == (*adicionador3) -> getId()){
				z = 1;
			}
	    }
	if(z==0){
		lagoa.push_back(novo); 
		ofstream myfile ("docs/sapinhos.txt", ios::app); /*adicionando no arquivo sapinhos.txt o novo sapo criado, caso ele nao apresente nenhum conflito, como
		por exemplo se ele tiver o mesmo identificador de outro sapo que ja está no arquivo*/
		if (myfile.is_open()){
				myfile <<  novo->getNome() << "\n";
				myfile <<  novo->getId() << "\n";
				myfile <<  novo->getProvas() << "\n";
				myfile <<  novo->getVitorias() << "\n";
				myfile <<  novo->getEmpate() << "\n";
				myfile <<  novo->getTotalPulos() << "\n";
		} else { //como o arquivo nao estava aberto é porque apresenta alguma falha
				cout << "Impossivel abrir este arquivo" << endl;
		}
	} 

}
void Corrida::add_arqcircuito(Circuito *nova){ //adicionar o circuito no arquivo
vector<Circuito*>::iterator adicionador4;

	int w = 0;
		for (adicionador4 = temporada.begin(); adicionador4 != temporada.end(); adicionador4++)
		{
			if (nova->getIde() == (*adicionador4) -> getIde()){
				w = 1;
			}
	    }
	if(w == 0){
		temporada.push_back(nova); 
		ofstream myfile ("docs/fases.txt", ios::app); //adicionando no arquivo fases.txt os circuitos criado pelo jogador
		if (myfile.is_open()){
				myfile <<  nova->getNome() << "\n";
				myfile <<  nova->getIde() << "\n";
				myfile <<  nova->getTamanho() << "\n";	
		} else { //como o arquivo nao estava aberto é porque apresenta alguma falha
				cout << "Impossivel abrir este arquivo" << endl;
		}
	} 

}
void Corrida::dados_sapo(){  //funcao para mostrar as informacoes dos sapos
	vector<Sapo*>::iterator amostra;
		for (amostra = lagoa.begin(); amostra != lagoa.end(); amostra++)
		{
			cout <<  (*amostra)->getNome() << "\n";
			cout <<  (*amostra)->getId() << "\n";
			cout <<  (*amostra)->getProvas() << "\n";
			cout <<  (*amostra)->getVitorias() << "\n";
			cout <<  (*amostra)->getEmpate() << "\n";
			cout <<  (*amostra)->getTotalPulos() << "\n";	
	    }

}
void Corrida::dados_circuito(){ //funcao para mostrar as informacoes das pistas
	vector <Circuito*>::iterator status;
	for (status = temporada.begin(); status != temporada.end(); status++)
			{
				cout <<  (*status)->getNome() << "\n";
				cout <<  (*status)->getIde() << "\n";
				cout <<  (*status)->getTamanho() << "\n";
	}
}	
void Corrida::run(){ //inicializacao do jogo
	int selecionador,aux,aux2,tamanho_corrida,random,trajetoria,salto,armazenador,posicao;
	unsigned int contador = lagoa.size();
	string start;
	aux2 = 0;
	aux = 0;
	armazenador = 0;
	posicao = 0;
			cout << "Selecione o circuito que voce deseja, atraves do numero de identificacao" << endl;
			cin >> selecionador; 
	vector<Circuito*>::iterator comparador;
	vector<Sapo*>::iterator comparador2;
	vector<Sapo*>::iterator comparador3;
	for (comparador = temporada.begin(); comparador != temporada.end(); comparador++){ //comparando o identificador para começar a corrida
			if (selecionador == (*comparador)->getIde()){
				tamanho_corrida = (*comparador)->getTamanho();
				for (comparador2 = lagoa.begin(); comparador2 != lagoa.end(); comparador2++){
						cout <<  (*comparador2)->getNome() << "\n";
						cout <<  (*comparador2)->getId() << "\n";
				}
			
				cin.ignore();
				cout << "Para iniciar sua corrida digita s de start ou i de iniciar" << endl;
				getline (cin,start);	
				if (start.compare("s") == 0 || start.compare("i") == 0){ //Corrida iniciada
						while(contador > 0){
							for (comparador2 = lagoa.begin(); comparador2 != lagoa.end(); comparador2++){ //usando o iterator
								if ((*comparador2)->getDis_per() < tamanho_corrida){ /*enquanto o tamanho do iterator for menor que o tamanho maximo da corrida
								 entao a corrida continua, ou seja ela so para quando o ultimo sapo ultrapassar o tamanho maximo da corrida*/
									random = 1 + rand()%10; //aplicando a função rand para gerar os saltos dos sapos aleatorios
									trajetoria = (*comparador2)->getDis_per(); //distancia percorrida por um salto, aleatoriamente
									trajetoria = trajetoria + random;
									(*comparador2)->setDis_per(trajetoria); //aplicando o valor aleatorio da distancia de um salto
										salto = (*comparador2)->getPulos(); //incrementando a quantidade de pulos de um sapo
										salto++;
										(*comparador2)->setPulos(salto);
										(*comparador2)->setTotalPulos(1 + (*comparador2)->getTotalPulos()); //somando a quantidade de pulos total dado por um sapo
											cout << " ----- Sapo: " << (*comparador2)->getNome() << endl;
											cout << " ----- Identificador: " << (*comparador2)->getId() << endl;
											cout << " ----- Distancia do pulo: " << salto << endl;
											cout << " ----- Distancia percorrida: " << trajetoria << endl;

												
									if((*comparador2)->getDis_per() >= tamanho_corrida){
										cout << "sapo " << (*comparador2)->getNome() << " acabou a corrida" << endl;
										(*comparador2)->setProvas(1 + (*comparador2)->getProvas());
										if(salto == armazenador){ //verificando o empate
											(*comparador2)->setRanking(posicao);
											(*comparador2)->setEmpate((*comparador2)->getEmpate() + 1);
											if(aux2 == 1){ //incrementando o valor de empate nos dois ou mais que empataram
												(*comparador3)->setEmpate((*comparador3)->getEmpate() + 1);
												aux2 = 0;
											}

										}else if(salto > armazenador){
											posicao++;
											(*comparador2)->setRanking(posicao);
											armazenador = salto;
											aux2 = 1;
											comparador3 = comparador2;
										}
										contador--;

									}
								}	
						    }  
						}
				}
				   
				    for (unsigned i=0; i < lagoa.size(); i++){ //criando um ranking para os sapos
				    	if(lagoa[i]->getRanking() == 1){
				   		lagoa[i]->setVitorias(lagoa[i]->getVitorias() + 1);		
				    	}	
				    }  
				cout << "O Ranking dessa corrida emocionante de sapinhos foi........." << endl; //mostrar na tela o ranking dos sapos
				for (int i=1; i<=posicao; i++){
					for (comparador2 = lagoa.begin(); comparador2 != lagoa.end(); comparador2++){
					if ((*comparador2)->getRanking() == i)
						{
							cout <<	 "--------------" << (*comparador2)->getNome() << " ID : " << (*comparador2)->getId() << " --- posicao " << (*comparador2)->getRanking() << "º Lugar" << endl;
						}	
					}
				}

				ofstream arquivo;
			    arquivo.open("docs/sapinhos.txt");

			if (arquivo.is_open()){ //escrevendo no arquivo os novos dados
				for (comparador2 = lagoa.begin(); comparador2 != lagoa.end(); comparador2++){
					arquivo <<  (*comparador2)->getNome() << "\n";
					arquivo <<  (*comparador2)->getId() << "\n";
					arquivo <<  (*comparador2)->getProvas() << "\n";
					arquivo <<  (*comparador2)->getVitorias() << "\n";
					arquivo <<  (*comparador2)->getEmpate() << "\n";
					arquivo <<  (*comparador2)->getTotalPulos() << "\n"; 
			    }
			} else { //caso nao exista nenhum arquivo com o nome sapinhos.txt ou fases.txt vai ser exibido essa mensagem
				cout << "nao temos como abrir um arquivo que nao existe" << endl;
			  }
				aux = 1;
			arquivo.close(); //fechando arquivo após o uso	            
	    }    
	}
		if(aux==0) { //caso o numero de identificação do circuito digitado pelo usuario seja diferente do circuito que está no arquivo
				cout << "Esse circuito nao existe" << endl;
			}

}
