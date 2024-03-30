/*

29)Faça um algoritmo que leia valores inteiros entre 1 e 10 até que seja digitado um valor igual 
a 0, e escreva, ao final, quais dos valores entre 1 e 10 que não foram digitados nenhuma vez. 


*/

/*

    1 inicio
    2 leia os valores entre 1 e 10 até ser digitado o valor zero
    3 escreva os valores entre 1 e 10 que nao foram digitados
    fim

*/


#include <stdio.h>
#include <stdbool.h>

void inicializa(int vet[],int tam){
    int v = 0;
    for(v = 0; v < tam; v++){
        vet[tam] =0;
    }
}

int main(){
    
    int i=0;
    int cont =3;
    int saida[cont];
    int valor;

    inicializa(saida,cont);

   for(i = 0; i < cont;i++){

    printf("\nDigite um numero (se == 0, o programa acaba): ");
    scanf("%d",&valor);

    if(valor == 0)break;

    saida[i] = valor;
   }

   for(i  = 0 ; i < cont; i++){
    if(saida[i]!=0 && saida[i]>=1 && saida[i] <=10){
        printf("%d ",saida[i]);
    }
   }

    

    return 0;
}