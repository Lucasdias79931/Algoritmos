/*

6. Ler uma temperatura em graus Celsius e apresent�-la convertida em graus Fahrenheit. A f�rmula
de convers�o �: F=9*C / 5 + 32, sendo F a temperatura em Fahrenheit e C a temperatura em
Celsius.

*/

/*
    inicio
    1 - solicitar a temperatura em graus celsius
    2 - converter a temperatura para fahrenheit
    3 - imprimir o resultado para o user
    fim

*/
#include <iostream>

using namespace std;

int main()
{
    float tempC = 0, tempF = 0;

    cout << "Digite a temperatura em celsius: ";
    cin >> tempC;

    tempF = (9 * tempC) / (5 + 32);

    cout << "\nA temperatura " << tempC << "�c � " << tempF << "�f";
    return 0;
}
