/*
    20)Faça um algoritmo que leia um vetor de 10 elementos. Leia, a seguir, 10 valores N e, para 
cada um, verifique se o valor aparece no vetor escrevendo: 0 - se o valor N não aparece no 
vetor; 1 - se o valor N aparece no vetor.

*/

/*
    1 inicio
    2 crie um vetor de 10 elementos;
    3 leia 10 elementos e armazene em outro vetor;
    4 para cada valor dos dois vetores verifique se eles aparecem nos dois vetores
        se sim:
            5 escreva 0 para o valor que não aparecer nos dois;
        senao
            5 escreva 1 para o valor que aparecer nos dois;
    fim

*/


#include <iostream>
#include <vector>
#include <windows.h> 

using namespace std;


int main(){
    vector<int> lista1, lista2;
    
    for(int i = 0; i <10; i++){
        int aux;
        cout << "\nDigite um valor qualquer para a primeira lista: ";
        cin >> aux;
        lista1.push_back(aux);
    }

    for(int i = 0; i <10; i++){
        int aux;
        cout << "\nDigite um valor qualquer para a segunda lista: ";
        cin >> aux;
        lista2.push_back(aux);
    }
    
    system("cls");

    for(int i =0; i<lista1.size();i++){

        bool test = false;

        for(int j = 0; j< lista2.size(); j++){
            if(lista2[j] == lista1[i]){
                test  = true;
            }
        }

        if(test){
            cout << "\nDigito: " << lista2[i] << " Está contido na primeira lista" << endl;
        }else{
            cout << "\nDigito: " << lista2[i]<< " Não está contido na primeira lista" << endl;
        }

    }



    return 0;
}