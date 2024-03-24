/*

Faça um algoritmo que leia um número inteiro e escreva os dígitos binários 
correspondentes a esse número (máximo 64 dígitos binários). Dica:Para converter um número 
decimal em binário pode-se proceder sucessivas divisões por dois até que o quociente seja 
igual a zero. O número binário é obtido considerando os restos obtidos nas divisões, mas em 
ordem contrária. 

*/

/*
    1 inicio
    2 leia o inteiro
    3 converta para binario
    4 imprime o numero em binario
    fim
*/

#include <iostream>
#include <string>
#include <locale>

using namespace std;
using std::string;

string toBinario(int numeroDecimal);
void inverteStr(string& palavra);

int main(){
    
    int decimal = 0;

    cout << "Digite o numero em decimal: ";
    cin >> decimal;

    string binario = toBinario(decimal);

    cout << "\nO número em decimal: " << decimal << "\nEm binário: " << binario;

    return 0;
}



string toBinario(int numeroDecimal){
    
    string binario;
    while (true){

        if(numeroDecimal<2){
            binario+= to_string(numeroDecimal%2);
            break;
        }else{
            binario+= to_string(numeroDecimal%2);
        }

        if(numeroDecimal%2==0){
            numeroDecimal/=2;                                                                 
        }else{                                                                                      
            numeroDecimal= (numeroDecimal - 1)/2; 
        }
    }
    
    inverteStr(binario);

    return binario;
}   

void inverteStr(string& palavra){
    int tam = palavra.length();
    for(int i = 0; i < tam/2; i++){
        char temp = palavra[i];
        palavra[i] = palavra[tam - i - 1];
        palavra[tam - i - 1] = temp;
    }
}