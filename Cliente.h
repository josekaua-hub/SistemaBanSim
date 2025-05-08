#include <string>
#include <iostream>
#pragma once


using namespace std;

class Cliente
{
private:
 string cpf  ;
 string nome ;

public:
//construtor
Cliente(): nome(""),cpf(""){};
Cliente(string nom, string c){
  nome = nom;
  cpf= c;
};

//gets e sets
  string getNome() { return nome; }
  void setNome(string nom){nome = nom;}

  string getCpf() { return cpf; }
  void setCpf(string c){cpf =c;};
};

  