/*

7. Elaborar um algoritmo que efetue a apresenta��o do valor da convers�o em real (R$) de um valor
lido em d�lar (US$). O algoritmo dever� solicitar o valor da cota��o do d�lar e tamb�m a quantidade
de d�lares dispon�veis com o usu�rio

*/

/*
    iniciu
    1 - solicitar cota��o do dolar atual
    2 - solicitar quantia em dolar
    3 - operar os valores
        real = cotacao * quantia em dolar
    4 - imprimir o resultado
*/
#include <iostream>

using namespace std;

int main()
{
    float quantiaDolar = 0, cotacaoDolar, real = 0;

    cout << "Digite a cota��o do dolar: ";
    cin >> cotacaoDolar;
    cout << "\nDigite a quantia em dolar: ";
    cin >> quantiaDolar;

    real = quantiaDolar * cotacaoDolar;

    cout << "\nA quantia em Real: R$" << real << endl;
    return 0;
}
