#include <iostream>
using namespace std;

int main() {
    int n, numero, menor;

    cin >> n;
    cin >> menor;

    for (int i = 1; i < n; i++) {
        cin >> numero;
        if (numero < menor) {
            menor = numero;
        }
    }

    cout << "El menor es: " << menor << endl;

    return 0;
}
