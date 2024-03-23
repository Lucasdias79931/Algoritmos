/*

*21)Escrever um algoritmo que lê um vetor X(10) e, após, leia um vetor  Y(10). Crie, a seguir, 
um terceiro vetor Z com os elementos que aparecem nos dois vetores (intersecção). Os 
elementos devem aparecer no vetor Z na mesma ordem em que aparecem no vetor X. 
Considere que não há repetição de valores dentro do mesmo vetor. Escreva o vetor Z (apenas 
as posições que foram preenchidas).

*/

/*

    1 inicio
    2 leia 10 valores para o vetor x
    3 leia 10 valores para o vetor z
    4 crie o vetor z
    5 adicione ao vetor z, apenas os números que estão na intersecção xy,( ordenar o vetor z de forma igual a x)
    6 imprime z
    7 fim


*/




#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int>  x, y, z;
    int tam =2;

    for(int i = 0; i<tam; i++){
        int aux;
        cout << "\nDigite um numero: ";
        cin >> aux;
        x.push_back(aux);
    }

     for(int i = 0; i<tam; i++){
        int aux;
        cout << "\nDigite um numero: ";
        cin >> aux;
        y.push_back(aux);
    }

    for(int element : x){
        bool test = false;
        for(int element2 :y){
            if(element == element2){
                test = true;
            }
        }

        if(test){
            z.push_back(element);
        }
    }

    if(!z.empty()){
        for(int element : z){
            cout << element << " ";
        }
    }else{
        cout << "\nNão tem números em cumo entre os vetores x e y";
    }
    
    return 0;
}