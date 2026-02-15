#include<iostream>
using namespace std;

int main (){
    float peso_kg, altura_mts, bmi;

    cout << "ingrese su peso en kilogramos: " << endl;
    cin >> peso_kg;
    cout << "ingrese su altura en metros (ej. 1.60): " << endl;
    cin >> altura_mts;

    bmi = peso_kg / (altura_mts * altura_mts);

    cout << "\nTabla de valores BMI\n" << endl;
    cout << "Bajo peso: menos de 18.5" << endl;
    cout << "Normal: entre 18.5 y 24.9" << endl;
    cout << "Sobrepeso: entre 25 y 29.9" << endl;
    cout << "Obeso: 30 o mas\n" << endl;


    if(bmi < 18.5) {
        cout << "Usted tiene bajo peso" << endl;
    } else if(bmi >= 18.5 && bmi < 25) {
        cout << "Usted tiene peso normal" << endl;
    } else if(bmi >= 25 && bmi < 30) {
        cout << "Usted tiene sobrepeso" << endl;
    } else {
        cout << "Usted tiene obesidad" << endl;
    }
    return 0;
}
