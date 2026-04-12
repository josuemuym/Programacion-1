#include <iostream>
using namespace std;
#include <cmath>

double redondearAEntero(double numero) {
    return floor(numero + 0.5);
}

double redondearADecimas(double numero) {
    return floor(numero * 10 + 0.5) / 10;
}

double redondearACentesimas(double numero) {
    return floor(numero * 100 + 0.5) / 100;
}

double redondearAMilesimas(double numero) {
    return floor(numero * 1000 + 0.5) / 1000;
}

int main() {
    double numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    cout << "Numero original: " << numero << endl;
    cout << "Redondeado al entero: " << redondearAEntero(numero) << endl;
    cout << "Redondeado a la decima: " << redondearADecimas(numero) << endl;
    cout << "Redondeado a la centesima: " << redondearACentesimas(numero) << endl;
    cout << "Redondeado a la milesima: " << redondearAMilesimas(numero) << endl;

    return 0;
}
