/*
*17)Escreva um algoritmo que lê em um vetor de 20 posições de números positivos, até que o 
vetor esteja completo ou que tenha sido fornecido o valor 0 (zero). Após, escreva o vetor. A 
seguir, o algoritmo deve ler um número positivo qualquer e, caso ele se encontre no vetor, 
deve remover todas suas ocorrências, através de um deslocamento para a esquerda dos 
elementos que encontram-se à direita daquele a ser removido. Escreve o vetor modificado.
*/


/*
    1 inicio
    2 em um loop de 20 repetições, solicite um número positivo;
        se numero == 0:
        interrompa o loop
    3 imprime vetor
    4 leia um numero positivo qualquer
        5 se numero Exitir no vetor:
             mover todos os numeros que estão a direta para a esquerda do numero lido
     6 imprime vetor modificado
     fim       
        

        

*/


#include <iostream>

using namespace std;

int main(){
    int tam = 20;
    int vetor[tam]={-1};
    int numero = 0;
    
    for(int i = 0; i< tam; i++){
     
        cout << "Digite um número positivo: " << endl;
        cin >> vetor[i];

        if(vetor[i] == 0)break;
    }
    
    for(int element : vetor){
        cout << element << " ";
    }

    cout << "\nDigite um positivo qualquer: " << endl;
    cin >> numero;
    
    for(int i = 0; i < tam -1 ; i++){
        if(vetor[i] == numero){
            vetor[i] = vetor[i+1];
        }

        
    }
    

  
    for(int element : vetor){
        cout << element << " ";
    }


    


    return 0;
}