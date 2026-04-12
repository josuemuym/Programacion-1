#include <iostream>
using namespace std;

bool esPerfecto(int numero) {
    int suma = 0;
    for (int i = 1; i < numero; i++)
        if (numero % i == 0)
            suma += i;
    return suma == numero;
}

int main() {
    for (int n = 1; n <= 20000; n++) {
        if (esPerfecto(n)) {
            cout << n << " es perfecto, sus divisores son: ";
            for (int i = 1; i < n; i++)
                if (n % i == 0)
                    cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}
