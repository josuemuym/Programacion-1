#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero de 4 digitos: ";
    cin >> numero;

    int d1 = numero / 1000;
    int d2 = (numero / 100) % 10;
    int d3 = (numero / 10) % 10;
    int d4 = numero % 10;

    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;

    int temp = d1;
    d1 = d3;
    d3 = temp;

    temp = d2;
    d2 = d4;
    d4 = temp;

    cout << "Numero cifrado: " << d1 << d2 << d3 << d4 << endl;

    return 0;
}
