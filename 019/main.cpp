/*
    *19)Faça um algoritmo que leia 10 valores e verifique se algum dos valores aparece repetido. 
    Escreva 1 sealgum valor aparece repetido e 0 se não houver nenhum valor repetido.
*/


/*
    1 inicio
    2 leia os 10 valores e armazene num vetor
    3 verifique se algum dos valores se repetem
        se sim:
            4 imprime 1
        senao:
            4 imprime 0
    5 fim
        
*/


#include <iostream>
#include <vector>



using namespace std;


int main(){
    bool test = false;
    vector<int> lista; 
    
    for(int i =0 ;i <10;i++){
        int aux;
        cout <<"\n DIgite um numero";
        cin >> aux;
        lista.push_back(aux);
    }

    for(int i = 0 ; i <lista.size() -1; i++){
        
        for(int j =1; j< lista.size(); j ++){
            if(lista[i] == lista[j]){
                test = true;
            }
        }
    }

    if(test ){
        cout <<  "retorno: " << 1;
    }else{
        cout <<  "retorno: " << 0;
    }

    return 0;
}