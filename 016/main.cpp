/*


16)Escrever um algoritmo que lê um vetor N(10) e o escreve. Troque, a seguir, cada elemento
que estiverem posição ímpar (o primeiro, o terceiro...) pelo elemento da posição
imediatamente a seguir. Escrevao vetor modificado


*/

/*
    1 inicio
    2 leia os 10 elementos e armazene no vetor com 10 posições
    3 a cada elemento, verifique se o elemento a seguir é impar
        se for:
            4 troque com o elemento da posição a seguir
    5 imprima o vetor modificado
    6 fim


*/
#include <iostream>

using namespace std;

void modifica(int *, int);
bool impar(int);

int main()
{
    int vetor[10];

    for(int i = 0 ; i < 10; i++){
        cout << "\nDigite um valor: ";
        cin >> vetor[i];
    }

    cout << "\nVetor original ";

    for(int i = 0 ; i < 10; i++){
        cout << " " << vetor[i];
    }

    modifica(vetor,10);

    cout << "\nVetor modificado ";

     for(int i = 0 ; i < 10; i++){
        cout << " " << vetor[i];
    }

    return 0;
}

void modifica(int vetor[], int tam){

    for(int i = 0; i< tam; i++){
        for(int j = 0; j< tam-1; j++){
            if(impar(vetor[j])){
                int aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

}

bool impar(int numero){
    int cont =0;

    if( numero ==1){
        return false;
    }

    if(numero>= 2){
        for(int i=1;i <= numero;i++){
            if(numero%i==0){
                cont++;
            }
        }
    }

    if(cont ==2){
        return true;
    }else{
        return false;
    }

}
