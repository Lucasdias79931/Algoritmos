/*

9. Faça um algoritmo que leia 80 números e ao final informe quantos número(s) est(á)ão no intervalo
entre 10 (inclusive) e 150 (inclusive).

*/


/*
    inicio
    1 - leia 80 numeros aleatórios
    2 - verifique quantos desses números estam no intervalo de 10 e 150;
    3 - imprima o resultado
    fim

*/

#include <iostream>
#include <random>

using namespace std;

int main() {
    int vetor[80]; // Corrigindo a declaração do array

    for(int j = 0; j<10 ; j++){
        int cont = 0;

    std::random_device rd;
    std::mt19937 gen(rd()); // Mersenne Twister 19937 gerador de números pseudo-aleatórios

    // Defina a distribuição dos números aleatórios que você quer gerar
    std::uniform_int_distribution<> dis(0, 4000); // números inteiros entre 0 e 500

    // Gere 80 números aleatórios usando o gerador e a distribuição
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

    cout << "\nA lista tem " << cont << " números no intervalo [10, 150]." << endl; // Corrigindo a impressão

    }
    return 0;
}
