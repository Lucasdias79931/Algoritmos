/*

24)Faça um algoritmo que leia um número N e escreva os N primeiros números primos em 
ordem decrescente.Considere que N é no máximo igual a 100. Ex: Se N=5, escreva 11,7,5,3,2.  

*/

/*
    1 inicio
    2 leia n
    3 imprima os n primeiros N primos em ordem decrescente
    4 fim


*/

#include <stdio.h>
#include <stdbool.h>


bool primo(int n);

int main(){
    int limite = 5;
    int i = 0;
    int n = 0;
    int nCincoPrimos[5] = {0,0,0,0,0};

    while (true)
    {
       printf("Digite o valor de N(No máximo até 100): ");
       scanf("%d", &n);

       if(n<=0 || n>100){
        printf("\nPor favor, numeros no intervalo [0,100]\n");
       }else{
        break;
       }
    }
    



    for(i = 0; i< n; i++){
        
        
        if(primo(i)){
            int j=0;
            for(j = 0; j <5; j++){
                if(nCincoPrimos[j]==0){
                    nCincoPrimos[j]=i;
                    break;
                }
            }
         
            limite++;
            if(limite == 5)break;
        }


        
    }

    
    
    printf("\n");
    for(i = 4; i>= 0; i--){
        printf("%d ", nCincoPrimos[i]);
    }

    return 0;
}

bool primo(int n){
    if(n<2)return false;

    int contador = 0;
    int i =0;

    for(i = 1 ; i<=n;i++){
        if(n%i==0){
            contador++;
        }
    }

    if(contador >2){
        return false;
    }else{
        return true;
    }
}