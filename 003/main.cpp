/*

Escrever um algoritmo que leia o nome de um vendedor,
o seu salário fixo
e o total de vendas
efetuadas por ele no mês (em dinheiro).
Sabendo que este vendedor ganha 15% de comissão sobre
suas vendas efetuadas, informar o seu nome, o salário fixo e salário total no final do mês.

*/

/*
    1 - inicio
    2 - solicitar nome do vendedor
    3 - solicitar o salario fixo
    4 - total de vendas no mes
    5 - calcular slario do mes
            salarioMes = salario fixo + ( totalVendas * 15%)
    6 - exibir salario do mes desse vendedor na tela
    7 - fim


*/


#include <iostream>


using namespace std;

int main()
{
    float salarioFixo = 0, comissao = 0.15, totalVendas = 0, salarioMes = 0;
    string nome;

    cout << "Digite o nome do vendedor" << std::endl;
    cin >> nome;
    cout << "Digite o salario fixo" << std::endl;
    cin >> salarioFixo;
    cout << "Digite  total em vendas" << std::endl;
    cin >> totalVendas;

    salarioMes = salarioFixo + (totalVendas * comissao);

    cout << "o salário do vendedor " << nome << " é de: R$" << salarioMes << std::endl;

    return 0;
}
