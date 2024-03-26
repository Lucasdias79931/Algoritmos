/*
25)Escrever um algoritmo que lê 2 vetores X(10) e Y(10), e escreva os elementos que aparecem 
no vetor X e não aparecem no vetor Y (diferença de conjuntos). Escreva os valores na ordem 
em que eles aparecem no vetor X. Os dois vetores devem ser lidos separadamente (em 
primeiro lugar, todo o vetor X, após, o vetor Y).


*/


/*
    1 inicio
    2 leia vetor x
    3 leia o vetor y
    4 escreva x - y
    fim

*/


#include <stdio.h>
#include <stdbool.h>

void inicializaVetor(int *, int);

int main(){
    int tam = 4;
    int contador = 0;
    int x[tam], y[tam];

    // inicializa vetores com 0;
    inicializaVetor(x,tam);
    inicializaVetor(y,tam);
    

    printf("Valores para o vetor x");
    for(contador = 0; contador < tam; contador++){
        printf("\nDigite um número: ");
        scanf("%d",&x[contador]);
    }

    printf("Valores para o vetor y");
    for(contador = 0; contador < tam; contador++){
        printf("\nDigite um número: ");
        scanf("%d",&y[contador]);
    }

    int vetorAux[tam];
    inicializaVetor(vetorAux,tam);

    for(contador = 0; contador < tam; contador++){
        int k = 0;
        bool chave = false;
        for(k = 0; k< contador; k++){
            if(x[contador] == y[k]){
                chave = true;
                break;
            }
        }

        if(!chave){
            vetorAux[contador] = x[contador];
        }
    }

    printf("\nConjunto X-B: ");
    for(contador = 0; contador  < tam; contador++){
        if(vetorAux[contador]!=0){
            printf("%d ",vetorAux[contador]);
        }
    }


    return 0;
}


void inicializaVetor(int vetor[], int tam){

    int i = 0;

    for(i = 0; i<tam; i++)vetor[i]=0;

}
