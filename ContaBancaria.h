#include <iostream>
#include <string>
#include "Cliente.h"
#include <cstdlib>
#include <ctime>


class ContaBancaria: public Cliente{
private:
    int numero =0;
    Cliente titular;
    int saldo = 0;
public:
 //construtor conta bancaria
    ContaBancaria(int n,Cliente titu,double sal=0.0) {
        // verifica se a conta tem 4 digitos e é positiva, se n tiver cria com numeros aleatorios  
        if (n>=1000 && n<=9999){
                numero =n;
        }else{
            srand(time(0));
            numero=rand() % 9000 +1000; 
        }
        
        titular =titu;

           //verifica se o saldo é positivo se n for ele será 0
        if(sal >=0){
            saldo =sal;
        }else{
            saldo = 0;
        }
       
    };
    //metodos
    void ExibirSaldo();
    void ExibirInformacoes();
    void Depositar(double saldo);
    void Sacar(double saldo);
    void TransferirSaldo(double saldo,ContaBancaria &c);
    void TransferirSaldoMultiplo(double saldo,ContaBancaria &c,ContaBancaria &d);


    //gets e sets
    int getNumero(){return numero;};
    void setNumero(int n){numero =n;};

    int getSaldo(){return saldo;};
    void setSaldo(int sal){saldo =sal;};
};

