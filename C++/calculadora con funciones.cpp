#include<iostream>
using namespace std;

float valorIngresado1, valorIngresado2;
int numeroMod1, numeroMod2;
int opcionMenu;

float sumar (float a, float b){
    return a+b;
}

float restar (float a, float b){
    return a-b;
}

float dividir (float a, float b){
    return a/b;
}

float multiplicar (float a, float b){
    return a*b;
}

int modulo (int a, int b){
    return a%b;
}

int main (){
    do {
    cout << "\nCalculadora\n" << endl;
    cout << "1. sumar" << endl;
    cout << "2. resta" << endl;
    cout << "3. multiplicacion" << endl;
    cout << "4. division" << endl ;
    cout << "5. modulo" << endl;
    cout << "6. salir" << endl;
    cout << "Elija una opcion (1-6): " << endl;
    cin >> opcionMenu;

    if (opcionMenu == 1){
        cout << "Ingrese primer valor: " << endl;
        cin >> valorIngresado1;
        cout << "Ingrese segundo valor: " << endl;
        cin >> valorIngresado2;
        float resultado = sumar (valorIngresado1, valorIngresado2);
        cout << resultado;

    } else if (opcionMenu ==2){
        cout << "Ingrese primer valor: " << endl;
        cin >> valorIngresado1;
        cout << "Ingrese segundo valor: " << endl;
        cin >> valorIngresado2;
        float resultado = restar (valorIngresado1, valorIngresado2);
        cout << resultado;

    } else if (opcionMenu == 3){
        cout << "Ingrese primer valor: " << endl;
        cin >> valorIngresado1;
        cout << "Ingrese segundo valor: " << endl;
        cin >> valorIngresado2;
        float resultado = multiplicar (valorIngresado1, valorIngresado2);
        cout << resultado;

    } else if (opcionMenu == 4){
        cout << "Ingrese primer valor: " << endl;
        cin >> valorIngresado1;
        cout << "Ingrese segundo valor: " << endl;
        cin >> valorIngresado2;
        float resultado = dividir (valorIngresado1, valorIngresado2);
        cout << resultado;

    } else if (opcionMenu == 5){
        cout << "Ingrese primer valor: " << endl;
        cin >> numeroMod1;
        cout << "Ingrese segundo valor: " << endl;
        cin >> numeroMod2;
        int resultado = modulo (numeroMod1, numeroMod2);
        cout << resultado;
    }
    } while (opcionMenu != 6);
    return 0;

}
