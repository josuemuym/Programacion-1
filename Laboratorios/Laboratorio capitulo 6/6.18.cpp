#include <iostream>
using namespace std;

int enteroPotencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++)
        resultado = resultado * base;
    return resultado;
}

int main() {
    int base, exponente;

    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa el exponente: ";
    cin >> exponente;

    cout << "Resultado: " << enteroPotencia(base, exponente) << endl;

    return 0;
}
