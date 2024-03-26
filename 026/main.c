/*
26)Escrever um algoritmo que lê 3 vetores A[1..10], B[1.10] e C[1..10] e escreve os elementos 
que estão em A e B (interseção) mas não estão em C. Escreva os valores na ordem em que eles 
aparecem no vetor A. Os três vetores devem ser lidos separadamente (em primeiro lugar, todo 
o vetor A, após, o vetor B e por fim o vetor C). 


*/

/*
    1 inicio
    2 leia o vetor A
    3 leia o vetor b
    4 leia o vetor c
    5 escreva: a intersecção b - c


*/



#include <stdio.h>
#include <stdbool.h>

void inicializaVetor(int *, int);



int main(){
    int tam = 10;
    int contador = 0;
    int a[tam], b[tam], c[tam];
    
    inicializaVetor(a,tam);
    inicializaVetor(b,tam);
    inicializaVetor(c,tam);

    printf("Valores para o vetor A");
    for(contador = 0; contador < tam; contador++){
        printf("\nDigite um número: ");
        scanf("%d",&a[contador]);
    }

    printf("Valores para o vetor B");
    for(contador = 0; contador < tam; contador++){
        printf("\nDigite um número: ");
        scanf("%d",&b[contador]);
    }

    printf("Valores para o vetor C");
    for(contador = 0; contador < tam; contador++){
        printf("\nDigite um número: ");
        scanf("%d",&c[contador]);
    }
    
    int vetorAuxiliar[tam];
    inicializaVetor(vetorAuxiliar,tam);

    for(contador = 0;contador < tam ; contador++){
        int j = 0;

        for(j = 0; j< tam ; j++ ){
            if(a[contador]==b[j]){ // achar a intersecção AB
                bool inter = false;
                int k =0;

                for(k = 0; k<tam; k++){ // verifica se AB está contido em C
                    if(a[contador]==c[k]){
                        
                        inter = true;
                        break;
                        }

                }
                
                if(inter == false){
                    vetorAuxiliar[contador] = b[j];
                }

               
                
            }
        }
    }

    printf("\nA intersecção B - C: ");
    for(contador = 0; contador < tam; contador++){
        if(vetorAuxiliar[contador]!=0){
            printf("%d ",vetorAuxiliar[contador]);
        }
    }


    return 0;
}

void inicializaVetor(int vetor[], int tam){

    int i = 0;

    for(i = 0; i<tam; i++)vetor[i]=0;

}


