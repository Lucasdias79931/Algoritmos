/*
14)Faça um algoritmo que leia um vetor de 10 elementos. Leia, a seguir, um valor N e verifique 
se o valor aparece no vetor escrevendo: 0 - se o valor N não aparece no vetor; 1 - se o valor N 
aparece no vetor.

*/

/*

*
    1 inicio
    2 declare o vetor com 10 posições
    3 em um loop, solicite ao usuário que digite algum valor, faça ate 10 vezes;
    4 solicite ao usuario um valor n qualquer
    5 percorra o vetor, procurando pelo valor n
        se n estiver dentro do veto:
            6 retorne 1
        senao
            6 retorne 0;
    fim

*/



#include <stdio.h>

int compara(int *, int, int);

int main(){
    int vetor[10];
    int j =0;
    int n=0;
    
    for(j = 0; j<10;j++){
        printf("\nDigite um valor inteiro: ");
        scanf("%i", &vetor[j]);
    }

    printf("\nDigite o numero para procurar no vetor: ");
    scanf("%i",&n);

   

    if(compara(vetor,10,n)==0){
        printf("\nValor não encontrado!");
    }else{
        printf("\nValor encontrado!");
    }

   
    return 0;
}

int compara(int *vetor, int tam, int n){
    int i = 0;

    for(i = 0; i<tam; i++){
        if(vetor[i] == n){
            return 1;
        }
    }

    return 0;


}