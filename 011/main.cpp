/*

9. Fa�a um algoritmo que leia 80 n�meros e ao final informe quantos n�mero(s) est(�)�o no intervalo
entre 10 (inclusive) e 150 (inclusive).

*/


/*
    inicio
    1 - leia 80 numeros aleat�rios
    2 - verifique quantos desses n�meros estam no intervalo de 10 e 150;
    3 - imprima o resultado
    fim

*/

#include <iostream>
#include <random>

using namespace std;

int main() {
    int vetor[80]; // Corrigindo a declara��o do array

    for(int j = 0; j<10 ; j++){
        int cont = 0;

    std::random_device rd;
    std::mt19937 gen(rd()); // Mersenne Twister 19937 gerador de n�meros pseudo-aleat�rios

    // Defina a distribui��o dos n�meros aleat�rios que voc� quer gerar
    std::uniform_int_distribution<> dis(0, 4000); // n�meros inteiros entre 0 e 500

    // Gere 80 n�meros aleat�rios usando o gerador e a distribui��o
    for (int i = 0; i < 80; ++i) {
        vetor[i] = dis(gen);

    }

    for (int i = 0; i < 80; i++) {
        if (vetor[i] >= 10 && vetor[i] <= 150) {
                cout << vetor[i]<< " - ";
            cont++;
        }
    }
    cout << endl;

    cout << "\nA lista tem " << cont << " n�meros no intervalo [10, 150]." << endl; // Corrigindo a impress�o

    }
    return 0;
}
