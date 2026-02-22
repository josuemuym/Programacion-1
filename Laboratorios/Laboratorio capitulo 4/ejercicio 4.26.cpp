#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero de 5 digitos: ";
    cin >> numero;

    int d1 = numero / 10000;
    int d2 = (numero / 1000) % 10;
    int d3 = (numero / 100) % 10;
    int d4 = (numero / 10) % 10;
    int d5 = numero % 10;

    if (d1 == d5 && d2 == d4)
        cout << "Es un palindromo" << endl;
    else
        cout << "No es un palindromo" << endl;

    return 0;
}
