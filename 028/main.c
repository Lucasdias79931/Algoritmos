/*

28)Escrever um algoritmo que lê 2 vetores A[1..10] e B[1.10] e escreve os elementos que estão 
somente em A ou somente em B. Escreva os valores na ordem em que eles aparecem no vetor 
A, e em seguida os que aparecem no vetor B. Os dois vetores devem ser lidos separadamente 
(em primeiro lugar, todo o vetor A e, após, o vetor B). 

*/


/*
    1 inicio
    2 leia vetor a[10]
    3 leia vetor b[10]
    4 escreva somente os que aparecem e a ou em b (ordem: primeiro os de a, depois os de b)
    fim


*/

#include <stdio.h>
#include <stdbool.h>


int main(){
    int i = 0, j = 0;
    int tam = 2;
    int a[tam], b[tam];

    printf("Valores para a\n");
    for(i = 0; i<tam;i++){
        printf("\nDigite um numero: ");
        scanf("%d",&a[i]);
    }
    
    printf("Valores para b\n");
    for(i = 0; i<tam;i++){
        printf("\nDigite um numero: ");
        scanf("%d",&b[i]);
    }

    for(i =0; i<tam; i++){

        bool chave = false;

        for(j = 0; j<tam;j++){                                         
            if(a[i]==b[j]){                                                 
                chave = true;
                break;
            }
        }

        if(!chave)printf("(%d) - ", a[i]);
    }

    for(i =0; i<tam; i++){

        bool chave = false;

        for(j = 0; j<tam;j++){                                         
            if(b[i]==a[j]){                                                 
                chave = true;
                break;
            }
        }

        if(!chave)printf("(%d) - ", b[i]);
    }

   
   

    return 0;
}


