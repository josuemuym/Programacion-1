#include <iostream>
using namespace std;

int main() {
    double precio;
    double total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0;
    int producto, cantidad;

    cout << "Ingresa numero de producto y cantidad (0 0 para terminar): " << endl;
    cin >> producto >> cantidad;

    while (producto != 0) {
        switch (producto) {
            case 1:
                precio = 2.98;
                total1 += precio * cantidad;
                break;
            case 2:
                precio = 4.50;
                total2 += precio * cantidad;
                break;
            case 3:
                precio = 9.98;
                total3 += precio * cantidad;
                break;
            case 4:
                precio = 4.49;
                total4 += precio * cantidad;
                break;
            case 5:
                precio = 6.87;
                total5 += precio * cantidad;
                break;
            default:
                cout << "Producto invalido" << endl;
                break;
        }
        cout << "Ingresa numero de producto y cantidad: ";
        cin >> producto >> cantidad;
    }

    cout << "Producto 1: $" << total1 << endl;
    cout << "Producto 2: $" << total2 << endl;
    cout << "Producto 3: $" << total3 << endl;
    cout << "Producto 4: $" << total4 << endl;
    cout << "Producto 5: $" << total5 << endl;

    return 0;
}
