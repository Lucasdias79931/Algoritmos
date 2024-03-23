/*

8. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a
percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de
28% e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica de um carro e informe o
custo ao consumidor do mesmo.

*/

/*
    inicio
    1 - solicite o valor do custo de fabrica

        percentagem do distribuidor = 28%
        imposto = 45%
       custoFinal = custo de fábrica * (1 + imposto) * (1 + percentagem do distribuidor)
    2 - calcula o custo final
    3 - imprime o custo final
    fim
*/


#include <iostream>

using namespace std;

int main()
{
    double custoF = 0, imposto = 0.45 , percentagemD = 0.28, custoFinal = 0;
    cout << "Digite o valor do custo de fabrica: ";
    cin >> custoF;

    custoFinal = custoF * (1 + imposto) * (1 + percentagemD);
    cout << "\nO custo final do carro ao consumidor será de R$" << custoFinal << endl;
    return 0;
}
