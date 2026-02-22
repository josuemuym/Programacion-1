#include <iostream>
using namespace std;

int main() {
    int aprobados = 0;
    int reprobados = 0;
    int resultado;

    for (int estudiante = 1; estudiante <= 10; estudiante++) {
        cout << "Escriba el resultado (1 = aprobado, 2 = reprobado): ";
        cin >> resultado;

        while (resultado != 1 && resultado != 2) {
            cout << "Valor incorrecto. Escriba el resultado (1 = aprobado, 2 = reprobado): ";
            cin >> resultado;
        }

        if (resultado == 1)
            aprobados++;
        else
            reprobados++;
    }

    cout << "Aprobados " << aprobados << endl;
    cout << "Reprobados " << reprobados << endl;

    if (aprobados > reprobados)
        cout << "Bono para el instructor" << endl;

    return 0;
}
