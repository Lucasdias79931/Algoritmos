/* Escrever um algoritmo para determinar o consumo m�dio de um autom�vel sendo fornecida a
dist�ncia total percorrida pelo autom�vel e o total de combust�vel gasto. */

/*
       inicio
    1 - digitar distancia total percorrida
    2 - digitar combustiv�l total gasto
    3 - calcular media ==> media = distancia total / gasolina total gasta
    4 - exibir o resultado
    5 - fim

*/

#include <iostream>

using namespace std;

int main()
{
    float distancia = 0, gasolina = 0, media = 0;


    cout << "Digite a dist�ncia total" << std::endl;
    cin >> distancia;
    cout << "Digite a gasolina total" << std::endl;
    cin >> gasolina;
    media = distancia / gasolina;
    cout << "M�dia de consumo: " <<media << "km/l" << std::endl;
    return 0;
}
