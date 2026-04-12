#include <iostream>
using namespace std;

void separarDigitos(int numero) {
    int miles = numero / 1000;
    int centenas = (numero % 1000) / 100;
    int decenas = (numero % 100) / 10;
    int unidades = numero % 10;

    cout << miles << "  " << centenas << "  " << decenas << "  " << unidades << endl;
}

int main() {
    int numero;

    cout << "Ingresa un numero entre 1 y 32767: ";
    cin >> numero;

    separarDigitos(numero);

    return 0;
}
