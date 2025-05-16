#include <iostream>
#include "Cliente.h"
#include "ContaBancaria.h"
using namespace std;


int main()
{
    srand(time(0));
    //criações dos clientes
    Cliente cliente1("Ana","111.111.111-11");
    Cliente cliente2("Bruno", "222.222.222-22");
    Cliente cliente3("Carla", "333.333.333-33");
    Cliente cliente4("joao","444.444.444-44");

    //criações das contas bancarias
    ContaBancaria conta1(1001, cliente1, 1000.0);
    ContaBancaria conta2(1002, cliente2);
    ContaBancaria conta3(1003, cliente3);
    ContaBancaria conta4(-14,cliente4,-321);


    // teste de 1 exibição das informações 
    conta1.ExibirInformacoes();
    cout<< "" <<endl;
    conta2.ExibirInformacoes();
    cout<< "" <<endl;
    conta3.ExibirInformacoes();
    cout<< "" <<endl;
    conta4.ExibirInformacoes();


    cout<< "" <<endl;

    //teste de deposito e exibição de saldo
    conta1.Depositar(500);
    conta1.ExibirSaldo();
    conta1.Depositar(-100);
    conta1.ExibirSaldo();

    cout<< "" <<endl;

    // teste de transferencia de saldo para apenas para uma conta 
    conta1.TransferirSaldo(1100,conta3);
    conta1.ExibirSaldo();
    conta3.ExibirSaldo();

    cout<< "" <<endl;

    // teste de transferencia  de saldo divido para apenas para 2 contas 
    conta1.TransferirSaldoMultiplo(300,conta2,conta3);
    conta1.ExibirSaldo();
    conta2.ExibirSaldo();
    conta3.ExibirSaldo();

    cout<< "" <<endl;
   

    // teste de exibição das informações
    conta1.ExibirInformacoes();
    cout<< "" <<endl;
    conta2.ExibirInformacoes();
    cout<< "" <<endl;
    conta3.ExibirInformacoes();
    cout<< "" <<endl;
    conta4.ExibirInformacoes();

    cout<< "" <<endl;

    //teste de saque e exibição de saldo
    conta1.Sacar(500);
    conta1.ExibirSaldo();
    conta2.Sacar(100);
    conta2.ExibirSaldo();
    conta2.Sacar(-100);
    conta2.ExibirSaldo();

    cout<< "" <<endl;

    
    return 0;
}
