#include <iostream>
using namespace std;

int main() {
    int filas;

    cout << "Ingresa un numero impar entre 1 y 19: ";
    cin >> filas;

    int mitad = filas / 2;

    for (int i = 0; i <= mitad; i++) {
        for (int espacios = mitad - i; espacios > 0; espacios--) {
            cout << ' ';
        }
        for (int asteriscos = 1; asteriscos <= (2 * i + 1); asteriscos++) {
            cout << '*';
        }
        cout << endl;
    }

    for (int i = mitad - 1; i >= 0; i--) {
        for (int espacios = mitad - i; espacios > 0; espacios--) {
            cout << ' ';
        }
        for (int asteriscos = 1; asteriscos <= (2 * i + 1); asteriscos++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
