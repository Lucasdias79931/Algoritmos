/*

27)Escrever um algoritmo que lê 3 vetores A[1..10], B[1.10] e C[1..10] e escreve os elementos 
que são comuns aos três vetores (intersecção). Escreva os valores na ordem em que eles 
aparecem no vetor A. Os três vetores devem ser lidos separadamente (em primeiro lugar, todo 
o vetor A, após, o vetor B e por fim o vetor C).

*/


/*
    1 inicio
    2 leia vetor a
    3 leia vetor b
    4 leia vetor c
    5 imprima a intersecção entre os 3 vetores (na ordem emque aparecem no vetor a)
    6 fim

*/


#include <iostream>
#include <vector>

using namespace std;


void inicializaVetor(int * , int);

int main(){
    int tam = 4;
    int contador = 0;
    int a[tam], b[tam], c[tam];

    inicializaVetor(a,tam);
    inicializaVetor(b,tam);
    inicializaVetor(c,tam);

    cout << "Valores para o vetor A" << endl;
    for(contador = 0; contador < tam; contador++){
        cout << "Digite um número: ";
        cin >> a[contador];
    }

    cout << "\nValores para o vetor B" << endl;
    for(contador = 0; contador < tam; contador++){
        cout << "Digite um número: ";
        cin >> b[contador];
    }

    cout << "\nValores para o vetor C" << endl;
    for(contador = 0; contador < tam; contador++){
        cout << "Digite um número: ";
        cin >> c[contador];
    }

    vector<int> vetorAulx;

    // verifica se o numero em a, está em b e depois se está também em c
    for(int elementA : a){
        bool chave = false;

        for(int elementB : b){

            if(elementA == elementB){

                for(int elementC: c){
                    if(elementA == elementC){
                        chave = true;
                        break;
                    }
                }
            }
        }

        if(chave)vetorAulx.push_back(elementA);
    }

    cout << "\nIntersecção ABC: ";
    if(!vetorAulx.empty()){
        for(int element : vetorAulx)cout << element << " ";
    }else{
        cout << "\nNão existe a intersecção ABC";
    }

    return 0;
}


void inicializaVetor(int vetor[], int tam){

    int i = 0;

    for(i = 0; i<tam; i++)vetor[i]=0;

}


