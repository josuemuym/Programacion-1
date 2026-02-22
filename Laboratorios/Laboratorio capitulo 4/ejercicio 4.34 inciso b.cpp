#include <iostream>
using namespace std;

int main() {
    int terminos;
    double e = 1;
    double factorial = 1;

    cout << "Ingrese la precision deseada: ";
    cin >> terminos;

    int i = 1;
    while (i <= terminos) {
        factorial = factorial * i;
        e = e + 1.0 / factorial;
        i++;
    }

    cout << "El valor de e es: " << e << endl;

    return 0;
}
