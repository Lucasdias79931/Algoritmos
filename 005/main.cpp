/*

3) Fa�a um algoritmo que leia os conceitos (1, 2, 3, 4 ou 5) dos alunos de uma turma de 20
alunos. Ap�s, o algoritmo desenha um histograma com os conceitos na forma
111
2222
3333333333
44
5
se houveram tr�s alunos com conceito 1, quatro com conceito 2, dez com conceito 3, dois com
conceito 4 e um com conceito 5.
*/

/*
    1 - inicio
    2 - ler  os conceitos do aluno
    3 - perguntar se vai cadastrar mais alunos
        se sim:
            4 - repete o 2 passo.
    5 - ordena a lista de conceito
    6 - imprime os conceitos na ordem e pulando linha conforme vai almentando o conceito;


*/

/*

3) Faça um algoritmo que leia os conceitos (1, 2, 3, 4 ou 5) dos alunos de uma turma de 20
alunos. Após, o algoritmo desenha um histograma com os conceitos na forma
111
2222
3333333333
44
5
se houveram três alunos com conceito 1, quatro com conceito 2, dez com conceito 3, dois com
conceito 4 e um com conceito 5.
*/

/*
    1 - inicio
    2 - ler  os conceitos do aluno
    3 - perguntar se vai cadastrar mais alunos
        se sim:
            4 - repete o 2 passo.
    5 - ordena a lista de conceito
    6 - imprime os conceitos na ordem e pulando linha conforme vai almentando o conceito;


*/

#include <iostream>

void ordena(int *, int);

using namespace std;

int main()
{
    int conceito[20] = {};

    for(int i=0; i< 20; i++){
        string op;
        cout << "Digite o conceito: " << endl;
        cin >> conceito[i];

        cout << "s para digitar mais conceitos e n para finalizar" << endl;
        cin >> op;

        if(op == "n" || op == "N"){
          break;
        
    }

    ordena(conceito, 20);

    for(int i = 0 ; i < 20 ; i++){
        if(conceito[i]!=0){
            cout << conceito[i];
            if(conceito[i]!= conceito[i+1]) cout << endl;
        }
    }



    return 0;
}

void ordena(int *vetor, int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}