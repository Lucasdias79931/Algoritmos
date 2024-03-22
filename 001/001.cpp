/*Faça um algoritmo que simule uma calculadora aritmética simples. Deve ler dois números reais,
solicitar que informe qual operação aritmética deseja realizar (soma, subtração, multiplicação ou
divisão) e ao final mostrar o resultado da operação selecionada. Depois que exibir o resultado, deve
perguntar se quer realizar outra operação. Se a resposta for positiva solicita dois números e repete o
processo descrito, caso contrário encerra o algoritmo.

1 - solicitar numero1
2 - solicitar numero2
3 - solicitar qual operação deseja (soma, subtração, divisão ou multiplicação)
4 - se operação igual a soma, somar numero1 + numero2
    senao se operacao  igual a divisao, divide numero1 / numero2
    senao se operacao  igual a multiplicar, multiplique numero1 * numero2
    senao se operacao igual a subtrair, subtraia numero1 - numero2
5 - exibir resultado
6 - solicita se quer realizar operacao
7 - se sim, repete toda a operacao
    senao, finaliza o programa
*/


#include <iostream>
#include <iomanip>

using namespace std;


class Calculadora{
    public:
        static double soma(double numero1, double numero2){
            return numero1 + numero2;
        }

        static  double subtrair(double numero1, double numero2){
            return numero1 - numero2;
        }

        static  double multiplicar(double numero1, double numero2){
            return numero1 * numero2;
        }

        static double dividir(double numero1, double numero2){

                return numero1 / numero2;

        }

};

int main(){
    setlocale(LC_ALL, "");
    double numero1 = 0, numero2 = 0, resultado =0;
    char operacao;

    while(true){
        cout << "Digite o primeiro número: " << std:: endl;
        cin >> numero1;
        cout << "Digite o segundo número: " << std:: endl;
        cin >> numero2;

        cout << " + - * / " << std::endl;
        cin >> operacao;

        switch(operacao){
            case '+':
                resultado = Calculadora::soma(numero1,numero2);
            break;
            case '-':
                resultado = Calculadora::subtrair(numero1,numero2);
            break;
            case '*':
                resultado = Calculadora::multiplicar(numero1,numero2);
            break;
            case '/':
                if(numero2 != 0)
                   resultado = Calculadora::dividir(numero1,numero2);
                else {
                    cout << "Inpossivél dividir por zero";
                    continue;
                }
            break;
            default:
                cout << "Digito inválido";
            break;
        }

        cout << "Resultado: " << resultado << std::endl;

        char finalizar;
        cout << "s para fazer outra operação n para finalizar";
        cin >> finalizar;
        if(finalizar != 's' || finalizar != 'S'){
            break;
        }

    }

    return 0;
}
