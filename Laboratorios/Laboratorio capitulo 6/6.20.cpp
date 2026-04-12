#include <iostream>
using namespace std;

bool multiple(int primero, int segundo) {
    if (segundo % primero == 0)
        return true;
    else
        return false;
}

int main() {
    int primero, segundo;

    cout << "Ingresa dos enteros (0 0 para salir): " << endl;
    cin >> primero >> segundo ;

    while (primero != 0 && segundo != 0) {
        if (multiple(primero, segundo))
            cout << segundo << " es multiplo de " << primero << endl;
        else
            cout << segundo << " no es multiplo de " << primero << endl;

        cout << "Ingresa dos enteros (0 0 para salir): " << endl;
        cin >> primero >> segundo;
    }

    return 0;
}
