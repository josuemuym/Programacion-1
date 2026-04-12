#include <iostream>
using namespace std;

void cuadrado(int lado) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int lado;

    cout << "Ingresa el lado del cuadrado: ";
    cin >> lado;

    cuadrado(lado);

    return 0;
}
