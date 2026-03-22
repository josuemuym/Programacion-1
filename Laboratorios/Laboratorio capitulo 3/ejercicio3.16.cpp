#include <iostream>
using namespace std;

class FrecuenciasCardiacas {
private:
    string nombre;
    string apellido;
    int mesNac;
    int diaNac;
    int anioNac;

public:
    FrecuenciasCardiacas(string nom, string ape, int mes, int dia, int anio) {
        nombre = nom;
        apellido = ape;
        mesNac = mes;
        diaNac = dia;
        anioNac = anio;
    }

    void establecer(string nom, string ape, int mes, int dia, int anio) {
        nombre = nom;
        apellido = ape;
        mesNac = mes;
        diaNac = dia;
        anioNac = anio;
    }

    void obtener() {
        cout << "Nombre: " << nombre << " " << apellido << endl;
        cout << "Fecha nac: " << mesNac << "/" << diaNac << "/" << anioNac << endl;
    }

    int obtenerEdad(int mes, int dia, int anio) {
        int edad = anio - anioNac;
        if (mes < mesNac || (mes == mesNac && dia < diaNac))
            edad--;
        return edad;
    }

    int obtenerFCMaxima(int mes, int dia, int anio) {
        return 220 - obtenerEdad(mes, dia, anio);
    }

    void obtenerFCEsperada(int mes, int dia, int anio) {
        int fcMax = obtenerFCMaxima(mes, dia, anio);
        cout << "Frecuencia Cardiaca esperada: " << (int)(fcMax * 0.50) << " - " << (int)(fcMax * 0.85) << " pulsaciones por minuto" << endl;
    }
};

int main() {
    int mes, dia, anio;

    cout << "Ingresa la fecha actual (mes dia año): ";
    cin >> mes >> dia >> anio;

    FrecuenciasCardiacas p1("Chepito", "López", 5, 15, 1990);

    cout << endl;
    p1.obtener();
    cout << "Edad: " << p1.obtenerEdad(mes, dia, anio) << " años" << endl;
    cout << "Frecuencia Cardiaca maxima: " << p1.obtenerFCMaxima(mes, dia, anio) << " pulsaciones por minuto" << endl;
    p1.obtenerFCEsperada(mes, dia, anio);

    return 0;
}
