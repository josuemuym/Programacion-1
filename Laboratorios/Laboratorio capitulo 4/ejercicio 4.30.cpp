#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radio;
    double diametro;
    double circunferencia;
    double area;

    cout << "Ingrese el radio: ";
    cin >> radio;

    diametro = 2 * radio;
    circunferencia = 2 * PI * radio;
    area = PI * radio * radio;

    cout << "Diametro: " << diametro << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Area: " << area << endl;

    return 0;
}
