#include <iostream>
#include <cstring>

using namespace std;

string inverte(string entrada) {
    int n = entrada.length();

    for(int i = 0; i < n / 2; i++) {
        char temp = entrada[i];
        entrada[i] = entrada[n - i - 1];
        entrada[n - i - 1] = temp;
    }

    return entrada;
}

void removeEspacos(string &entrada) {
    string semEspacos = "";
    for (char c : entrada) {
        if (!isspace(c)) {
            semEspacos += c;
        }
    }
    entrada = semEspacos;
}

bool compara(string entrada) {

    removeEspacos(entrada);
    string saida = inverte(entrada);

    if (entrada == saida) {
        return true;
    } else {
       return false;
    }
}

int main() {
    string entrada;

    cout << "Digite a frase: ";
    getline(cin, entrada);

    if (compara(entrada)) {
        cout << "A frase é um palíndromo" << endl;
    } else {
        cout << "A frase não é um palíndromo" << endl;
    }

    return 0;
}
