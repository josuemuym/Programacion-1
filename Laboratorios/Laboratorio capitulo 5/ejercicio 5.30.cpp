#include <iostream>
using namespace std;

int main() {
    int respuesta, correctas = 0;

    cout << "1. ¿Cual es el principal gas de efecto invernadero?" << endl;
    cout << "1. Oxigeno  2. Dioxido de carbono  3. Nitrogeno  4. Hidrogeno" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;
    if (respuesta == 2) correctas++;

    cout << endl;
    cout << "2. ¿Que capa de la atmosfera retiene el calor en la Tierra?" << endl;
    cout << "1. Estratosfera  2. Mesosfera  3. Troposfera  4. Termosfera" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;
    if (respuesta == 3) correctas++;

    cout << endl;
    cout << "3. ¿Que fenomeno causa el aumento del nivel del mar?" << endl;
    cout << "1. Lluvia acida  2. Deforestacion  3. Derretimiento de glaciares  4. Terremotos" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;
    if (respuesta == 3) correctas++;

    cout << endl;
    cout << "4. ¿Que acuerdo internacional busca reducir las emisiones de carbono?" << endl;
    cout << "1. Tratado de Roma  2. Acuerdo de Paris  3. Protocolo de Montreal  4. Carta de la ONU" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;
    if (respuesta == 2) correctas++;

    cout << endl;
    cout << "5. ¿Cual es la principal causa del calentamiento global?" << endl;
    cout << "1. Actividad volcanica  2. Rayos solares  3. Actividad humana  4. Movimientos tectonicos" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;
    if (respuesta == 3) correctas++;

    cout << endl;
    cout << "Respondiste " << correctas << " de 5 correctamente." << endl;

    switch (correctas) {
        case 5:
            cout << "Excelente" << endl;
            break;
        case 4:
            cout << "Muy bien" << endl;
            break;
        default:
            cout << "Es tiempo de aprender mas sobre el calentamiento global" << endl;
            cout << "Visita: www.nasa.gov/climatechange" << endl;
            cout "Visita: www.ipcc.ch" << endl;
            break;
    }

    return 0;
}
