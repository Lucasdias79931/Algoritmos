/* Escrever um algoritmo para determinar o consumo médio de um automóvel sendo fornecida a
distância total percorrida pelo automóvel e o total de combustível gasto. */

/*
       inicio
    1 - digitar distancia total percorrida
    2 - digitar combustivél total gasto
    3 - calcular media ==> media = distancia total / gasolina total gasta
    4 - exibir o resultado
    5 - fim

*/

#include <iostream>

using namespace std;

int main()
{
    float distancia = 0, gasolina = 0, media = 0;


    cout << "Digite a distância total" << std::endl;
    cin >> distancia;
    cout << "Digite a gasolina total" << std::endl;
    cin >> gasolina;
    media = distancia / gasolina;
    cout << "Média de consumo: " <<media << "km/l" << std::endl;
    return 0;
}
