#include <iostream>
using namespace std;

int main() {
    int principal = 100000;
    int tasa = 5;

    cout << "Anio" << "\t" << "Monto en deposito" << endl;

    for (int anio = 1; anio <= 10; anio++) {
        principal = principal + (principal * tasa / 100);
        int dolares = principal / 100;
        int centavos = principal % 100;
        if (centavos < 10) {
            cout << anio << "\t" << dolares << ".0" << centavos << endl;
        } else {
            cout << anio << "\t" << dolares << "." << centavos << endl;
        }
    }

    return 0;
}
