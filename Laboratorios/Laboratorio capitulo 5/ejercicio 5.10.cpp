#include <iostream>
using namespace std;

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    cout << "Numero\tFactorial" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << "\t" << factorial(i) << endl;
    }
    return 0;
}
