#include <iostream>
#include "Cliente.h"
#include "ContaBancaria.h"

using namespace std;

//exibir saldo
void ContaBancaria::ExibirSaldo(){
    cout <<"saldo atual da conta "<<this->getNumero()
    << ": R$ " << saldo<<endl;
};

//exibir informações da conta
void ContaBancaria::ExibirInformacoes(){
    cout << "titular: "<< titular.getNome()<<
    ", CPF: " <<titular.getCpf() <<endl;

    cout << "numero da conta: "<< numero << 
    ", Saldo: "<< saldo <<endl;
};

//depositar saldo
void ContaBancaria::Depositar(double saldo){
    if(saldo>0){
        this->saldo+=saldo; // adiciona na conta 
        cout << "deposito realizado com sucesso" << endl;
    }else{
        cout << "Operacao nao realizada" << endl;
    }
    
};

//sacar saldo
void ContaBancaria::Sacar(double saldo){
    if ((this->saldo>=saldo) && (saldo>0)){
       this->saldo-=saldo; // subtrai da conta 
       cout <<"Saque realizado com sucesso. Da conta: " << this->numero
       << " no valor de: R$ " << saldo <<endl;
    }else{
        cout << "sem saldo suficiente!Pode nao." << endl;
    }
};

//Transferir saldo de uma Conta A para Conta B
void ContaBancaria::TransferirSaldo(double saldo,ContaBancaria &c){
    if(saldo >0){
        if(this->saldo>=saldo){

            double valortransferir= saldo;
            c.setSaldo(c.getSaldo() + saldo); // adiciona o valor à conta destino
            this->saldo-=saldo;                // subtrai da conta origem
            cout << "transferido: R$ " << valortransferir
            <<" de conta " << this->getNumero()
            <<" para conta " << c.getNumero() << endl;
        }else{
            cout << "sem Saldo na conta "<< endl;
        }
    }else{
        cout << "Saldo impossivel de transferir" << endl;
    }
};

//Transferir saldo dividido de conta A para Conta B e conta C 
void ContaBancaria::TransferirSaldoMultiplo(double saldo,ContaBancaria &c,ContaBancaria &d){
    if(saldo>0){
        if(this->saldo>=saldo){
            double valortransferir= saldo/2;
            c.setSaldo(c.getSaldo() + valortransferir);
            d.setSaldo(d.getSaldo() + valortransferir);
            this->saldo-=saldo;
            cout<< "transferido: R$ " << valortransferir
            <<" para cada conta (" << c.getNumero() << " e " << d.getNumero()
            <<") da conta " << this->getNumero() << endl;
        }else{
            cout<< "sem Saldo na conta " << endl;
        }
       
    }else{
        cout<< "Saldo impossivel de transferir" <<endl;
    }

};
