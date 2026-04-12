#include <iostream>
using namespace std;

double calcularCargos(double horas) {
    if (horas <= 3)
        return 2.00;
    else {
        double cargo = 2.00 + (horas - 3) * 0.50;
        if (cargo > 10.00)
            return 10.00;
        else
            return cargo;
    }
}

int main() {
    double horas[3], cargo[3];
    double totalHoras = 0, totalCargo = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Horas del automovil " << i + 1 << ": ";
        cin >> horas[i];
        cargo[i] = calcularCargos(horas[i]);
        totalHoras += horas[i];
        totalCargo += cargo[i];
    }

    cout << "\nAutomovil\tHoras\tCargo" << endl;

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << "\t\t" << horas[i] << "\t" << cargo[i] << endl;
    }

    cout << "TOTAL\t\t" << totalHoras << "\t" << totalCargo << endl;

    return 0;
}
