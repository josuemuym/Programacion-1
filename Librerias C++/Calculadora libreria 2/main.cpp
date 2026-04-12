#include <iostream>
#include "Calculadora.h"

using namespace std;

float valorIngresado1, valorIngresado2;
int opcion;

int main()
{
    do{
    cout << "\nCalculadora\n"<< endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Salir" << endl;
    cin>>opcion;

    if(opcion==1){
        Calculadora CalcSuma;
        cout<<"Ingrese el primer valor"<<endl;
        cin>>valorIngresado1;
        cout<<"Ingrese el segundo valor"<<endl;
        cin>>valorIngresado2;
        float resultado = CalcSuma.suma(valorIngresado1, valorIngresado2);
        cout<<resultado<<endl;
    } else if(opcion==2){
        Calculadora CalcResta;
        cout<<"Ingrese el primer valor"<<endl;
        cin>>valorIngresado1;
        cout<<"Ingrese el segundo valor"<<endl;
        cin>>valorIngresado2;
        float resultado = CalcResta.resta(valorIngresado1, valorIngresado2);
        cout<<resultado<<endl;
    } else if(opcion==3){
        Calculadora CalcMulti;
        cout<<"Ingrese el primer valor"<<endl;
        cin>>valorIngresado1;
        cout<<"Ingrese el segundo valor"<<endl;
        cin>>valorIngresado2;
        float resultado = CalcMulti.multiplicacion(valorIngresado1, valorIngresado2);
        cout<<resultado<<endl;
    } else if(opcion==4){
        Calculadora CalcDiv;
        cout<<"Ingrese el primer valor"<<endl;
        cin>>valorIngresado1;
        cout<<"Ingrese el segundo valor"<<endl;
        cin>>valorIngresado2;
        if(valorIngresado2==0){
            cout<<"No se puede dividir en 0"<<endl;
        } else {
            float resultado = CalcDiv.division(valorIngresado1, valorIngresado2);
            cout<<resultado<<endl;
        }
    }
    }while(opcion!=5);

    return 0;
}
