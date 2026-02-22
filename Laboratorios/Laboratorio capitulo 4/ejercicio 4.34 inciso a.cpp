#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;

    cout << "Ingrese un numero: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        factorial = factorial * i;
        i++;
    }

    cout << "El factorial es: " << factorial << endl;

    return 0;
}
