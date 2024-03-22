/*

5)Escrever um algoritmo que lê um vetor N(10) e o escreve. Troque, a seguir, o 1° elemento
com o último, o 2° com o penúltimo, etc até o 5° com o 6° e escreva o vetor N assim
modificado.

*/

/*
    1 inicio
    2 leia os 10 elementos;
    3 imprima os elementos;
    4 realize a troca dos elementos
    5 imprime os elementos;
    6 fim


*/


#include <iostream>

using namespace std;

void trocaPosicao(int *, int);

int main()
{
    int vet[10]={0};

    for(int i =0; i<10; i++){
        cout << "\nDigite um valor: ";
        cin >> vet[i];
    }

    trocaPosicao(vet,10);

    cout << "\nVetor invertido: " << endl;

    for(int i =0; i<10; i++){
        cout << " " << vet[i];
    }
    return 0;
}


void trocaPosicao(int vetor[], int tam) {
    for (int i = 0, j = tam - 1; i < tam / 2; i++, j--) {
        int aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
    }
}

