/*
22)Escrever um algoritmo que lê um vetor X(10) e, após, leia um vetor  Y(10). Crie, a seguir, um 
terceiro vetor Z com os elementos que aparecem em um X ou em Y (união); elementos que 
aparecem em X e Y simultaneamente devem aparecer apenas uma vez em Z. Os elementos 
devem aparecer no vetor Z na mesma ordem em que aparecem no vetor X e Y. Considere que 
não há repetição de valores dentro do mesmo vetor. Escreva o vetor Z (apenas as posições que 
foram preenchidas). 

*/

/*

    1 inicio
    2 leia o vetor x(10)
    3 leia o vetor y(10)
    4 crie o vetor z
    5 adicione ao vetor z os numeros que aparecem no x ou no y. os numeros que aparecem nos dois, devem aparecer somente uma vez em z
    6 imprime z
    


*/

#include <iostream>
#include <vector>

using namespace std;



int main(){
    
    int tam = 10;
    int x[tam], y[tam];
    vector<int> z;

    for(int i = 0; i< tam; i++){
        cout << "\nDigite um numero para o vetor x: ";
        cin >> x[i];
        cout << "\nDigite um numero para o vetor y: ";
        cin >> y[i];
    }

    for(int i =0; i<tam;i++){
        z.push_back(x[i]);
    }

    for(int i =0; i<tam;i++){

        bool test = false;
        for(int element : z){
            if(y[i] == element){
                test = true;
            }
        }

        if(!test){
            z.push_back(y[i]);
        }
    }

    for(int element : z){
        cout << element << " " ;
    }

    

    return 0;
}