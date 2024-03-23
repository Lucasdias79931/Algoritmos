/*

7. Elaborar um algoritmo que efetue a apresentação do valor da conversão em real (R$) de um valor
lido em dólar (US$). O algoritmo deverá solicitar o valor da cotação do dólar e também a quantidade
de dólares disponíveis com o usuário

*/

/*
    iniciu
    1 - solicitar cotação do dolar atual
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

    cout << "Digite a cotação do dolar: ";
    cin >> cotacaoDolar;
    cout << "\nDigite a quantia em dolar: ";
    cin >> quantiaDolar;

    real = quantiaDolar * cotacaoDolar;

    cout << "\nA quantia em Real: R$" << real << endl;
    return 0;
}
