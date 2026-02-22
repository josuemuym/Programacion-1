#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese el numero cifrado de 4 digitos: ";
    cin >> numero;

    int d1 = numero / 1000;
    int d2 = (numero / 100) % 10;
    int d3 = (numero / 10) % 10;
    int d4 = numero % 10;

    int temp = d1;
    d1 = d3;
    d3 = temp;

    temp = d2;
    d2 = d4;
    d4 = temp;

    d1 = (d1 + 3) % 10;
    d2 = (d2 + 3) % 10;
    d3 = (d3 + 3) % 10;
    d4 = (d4 + 3) % 10;

    cout << "Numero original: " << d1 << d2 << d3 << d4 << endl;

    return 0;
}
