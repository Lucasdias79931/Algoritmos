/*

. Ler dois valores para as vari�veis A e B, e efetuar as trocas dos valores de forma que a vari�vel A
passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. Apresentar
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
