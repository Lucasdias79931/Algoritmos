

/*

*23)Faça um algoritmo que leia um vetor V(5), com os valores sorteados em um sorteio de 
Loto. Leia, a seguir,para um conjunto de 5 apostadores, seus 5 palpites e escreva, para cada 
um, o número de acertos que teve. 

*/

/*
    1 inicio 
    2 leia um vetor de dimenssão igual a 5 com os valors do sorteio de loto
    3 leia para os palpites de 5 apostadores
    4 iprime, para cado um, o número de acertos
    5 fim

*/



#include <iostream>
#include <vector>
#include <random>


using namespace std;




void sorteia(vector<int> &sorteio);

int main() {
    int numeros = 5;
    int tamJogadores =2 ;
    int palpites[tamJogadores][numeros];


    vector<int> sorteio;

    sorteia(sorteio);
   
    
    

    for(int i = 0; i < tamJogadores; i++){
        cout << "\nJOGADOR: " << i +1;
        for(int j = 0 ; j< numeros; j++){
            cout << "\nDigite o numero entre 0 e 99: ";
            cin >> palpites[i][j];
        }
    }

    cout << "\nBilhete premiado: ";
    for(int element : sorteio){
        cout << element << " ";
    }

    for(int i = 0; i < tamJogadores; i++){
        int contador= 0;
        cout << "JOGADOR: " << i +1 << endl;
        
        for(int j = 0; j< numeros; j++){
            for(int w = 0; w< numeros; w++){
                if(sorteio[w] == palpites[i][j])contador++;
            }
        }
        
        cout << "Acertos: " << contador << endl;
        
    }

   
   

   

    return 0;
}


void sorteia(vector<int> &sorteio){
 

    random_device rd;   
    mt19937 gen(rd());  
    uniform_int_distribution<> dist(0, 99); 

    while (sorteio.size() < 5) {
        int aux = dist(gen);

        bool encontrado = false;
        for (int element : sorteio) {
            if (aux == element) {
                encontrado = true;
                break;
            }
        }

        if (!encontrado) {
            sorteio.push_back(aux);
            
        }

        if(sorteio.size() == 5)break;
    }



}


