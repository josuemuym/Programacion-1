#include<iostream>
using namespace std;

int main(){
    int radio;
    const float PI = 3.14159;
    float diametro;
    float circunferencia;
    float area;

    cout << "Ingrese el radio del circulo (numero entero): " << endl;
    cin >> radio;

    diametro = radio * 2;
    circunferencia = 2 * PI * radio;
    area = PI * radio * radio;

    cout << "diametro: " << diametro << endl;
    cout << "circunferencia: " << circunferencia << endl;
    cout << "area: " << area << endl;
    return 0;

}
