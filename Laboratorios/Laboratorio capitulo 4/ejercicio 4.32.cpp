#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << "Ingrese el segundo valor: ";
    cin >> b;
    cout << "Ingrese el tercer valor: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a)
        cout << "Si pueden ser los lados de un triangulo" << endl;
    else
        cout << "No pueden ser los lados de un triangulo" << endl;

    return 0;
}
