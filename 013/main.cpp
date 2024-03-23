/*
    *13)A conjectura de Goldbach diz que todo número par maior que 2 pode ser representado 
como a soma de dois números primos. Assim, 4=2+2, 6=3+3, 8=3+5... Faça um algoritmo que 
leia um número N, par, e escreva, em ordem crescente, os dois números primos que o 
compõem. No caso de haver mais de um par de números (p.ex:20=3+17 e 20=7+13) escreva o 
par que tiver o menor número primo

*/


/*
    1 inicio
    2 leia o numero par
    3 em um laço for, percorra o intervalo ]2,n], procurando numeros primos, a cada dois, 
        e verifique se a soma  = n. Se achar mais de um par de impares, 
        considere o que tiver menores numeros primos.
    4 imprima, em orde crescente, o par de números primos
    5 fim
*/

#include <iostream>
#include <vector>

using namespace std;
bool primo(int n);
int main(){
    int n = 0;

    cout << "Digite o número" << endl;
    cin >> n;


    if(n%2 !=0 || n <=2){
        cout << "Erro!"<< endl;
        exit(1);
    }

    vector<int> Primos;

    for(int i =3 ; i<n; i++){
        if(primo(i)){
            Primos.push_back(i);
        }
    }

    for(int i = 0 ; i<Primos.size();i++ ){

            for(int j = 1; j< Primos.size();j++){
                if(Primos[i]+Primos[j]==n){

                    cout << "par de impares: [" << Primos[i] << "," << Primos[j] << "]";
                    exit(1);

                }
            }

    }








}



bool primo(int n){
    if(n <=1){
        return false;
    }

    int aux = 0;

    for(int i = 1; i<= n; i++){
        if(n%i==0){
            aux++;
        }
    }

    if(aux == 2){
        return true;
    }else{
        return false;
    }
}
