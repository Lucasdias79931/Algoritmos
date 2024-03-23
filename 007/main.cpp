/*

. Ler dois valores para as variáveis A e B, e efetuar as trocas dos valores de forma que a variável A
passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar
os valores trocados.


*/

/*
    inicio
    1 - criar variavel a , b e auxiliar
    2 - ler valor para variavel a
    3 - ler valor para variavel b
    4 - gravar valor de a em aux
    5 - gravar valor de b em a
    6 - gravar valor de aux em b
    7 - imprimir os valores trocados
    fim.


*/
#include <iostream>

using namespace std;

int main()
{
    int a = 0 , b =0, aux= 0;
    cout << "DIgite o valor de a ";
    cin >>a;
    cout << "\nDigite o valor de b " << endl;
    cin >> b;
    aux = a;
    a = b;
    b = aux;

    cout << "Valores trocados: a: " << a << "  b: " << b;

    return 0;
}
