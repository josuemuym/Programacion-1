#include "Calculadora.h"
#include <iostream>

using namespace std;

Calculadora::Calculadora()
{
    //ctor

}
float Calculadora::suma(int valor1, int valor2)
{
    return valor1+valor2;
}
float Calculadora::resta(int valor1, int valor2)
{
    return valor1-valor2;
}
float Calculadora::multiplicacion(int valor1, int valor2)
{
    return valor1*valor2;
}
float Calculadora::division(int valor1, int valor2)
{
    if(valor2==0){
        cout << "No se puede dividir en 0" << endl;
    } else {
        return valor1/valor2;
    }
}
Calculadora::~Calculadora()
{
    //dtor
}
