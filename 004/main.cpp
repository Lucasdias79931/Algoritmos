/*
Escrever um algoritmo que leia o nome de um aluno e as notas das três provas que ele obteve no
semestre. No final informar o nome do aluno e a sua média (aritmética) e se o mesmo obteve
aprovação, foi reprovado ou irá fazer prova final. A média para aprovação é 7,0. Alunos que tirem
notas menores que 7,0 mas maiores ou igual a 3,0 podem fazer prova final.

*/

/*

    1 - inicio
    2 - ler nome do aluno
    3 - ler nota 1
    4 - ler nota 2
    5 - ler nota 3
    6 - calcular media
            media = (nota 1 + nota 2 + nota 3) / 3
    7 - teste lógico
            se media < 3
                passo 8 - exibir nome do aluno e reprovado
            senao se media >= = e media < 7
                passo 8 - exibir nome do aluno e reprovado com direito a final
            senao se media >=7
                passo 8 - exibir nome do aluno e aprovado
    9 - fim

*/

#include <iostream>

using namespace std;

int main()
{
    string nome;
    float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;

    cout << "Digite o nome do aluno" << std::endl;
    cin >> nome;
    cout << "Digite a nota 1" << std::endl;
    cin >> nota1;
    cout << "Digite a nota 2" << std::endl;
    cin >> nota2;
    cout << "Digite a nota 3" << std::endl;
    cin >> nota3;

    media = (nota1 + nota2+ nota3)/3;

    if(media < 3){
        cout << "Aluno: " << nome << "\nMedia: " << media << " Reprovado sem direito a Final!" << std::endl;

    }else if(media >= 3 && media < 7){
        cout << "Aluno: " << nome << "\nMedia: " << media << " Reprovado com direito a Final!" << std::endl;
    }else if(media > 7){
        cout << "Aluno: " << nome << "\nMedia: " << media << " Aprovado!" << std::endl;
    }

    return 0;
}
