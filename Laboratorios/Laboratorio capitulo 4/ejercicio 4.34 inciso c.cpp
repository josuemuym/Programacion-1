#include <iostream>
using namespace std;

int main() {
    int terminos;
    double x;
    double resultado = 1;
    double factorial = 1;
    double potencia = 1;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese la precision deseada: ";
    cin >> terminos;

    int i = 1;
    while (i <= terminos) {
        factorial = factorial * i;
        potencia = potencia * x;
        resultado = resultado + potencia / factorial;
        i++;
    }

    cout << "El valor de e^x es: " << resultado << endl;

    return 0;
}
