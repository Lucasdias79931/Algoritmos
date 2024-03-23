/*
*18)Escrever um algoritmo que lê um vetor G(10) contendo o gabarito de uma prova. Leia a 
seguir, para cadaaluno de um conjunto de 5 alunos suas 10 respostas e verifique quantas 
questões acertou, escrevendo para cada aluno o número de acertos.
*/

/*

    1 inicio
    2 leia o gabarito e armazene no vetor de 10 posicoes
    3 leia as respostas dos 5 alunos
    4 para cada aluno, compare as respostas com o gabarito
    5 imprima o resultado para os 5 alunos
    6 fim
*/




#include <iostream>
#include <string>
#include <cstring>


using namespace std;
using std::string;

struct Alunos{
    string nome;
    string gabarito;
};

int main(){
    const char gabaritoOficial[11] = {'a', 'b', 'c', 'd', 'a', 'b', 'c', 'd', 'a', 'b', '\0'};

    int tam = 2;
    Alunos alunos[tam];

    for(int i = 0 ; i < tam; i++){
        cout << "Digite o nome do aluno: " << endl;
        cin >> alunos[i].nome;
        while (true)
        {
            cout << "Digite o gabarito do aluno: " << endl;
            cin >> alunos[i].gabarito; 
            if(alunos[i].gabarito.length()!=10){
                cout << "\nNumero incorreto de questões assinaladas" << endl;
            }else{
                break;
            }
        }
        

    }

    for(Alunos element: alunos){
        int acertos = 0; // Defina acertos dentro do loop externo para acumular os acertos corretamente
        for(int i = 0; i < 10; i++){
            if(element.gabarito[i] == gabaritoOficial[i]){ // Comparação direta dos caracteres
                acertos++;
            }
        }
        cout << "Aluno: " << element.nome << "\nAcertos: " << acertos << endl;
    }


    return 0;
}