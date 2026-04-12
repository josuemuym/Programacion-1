#include <iostream>
#include "Calculadora.h"
using namespace std;

int main()
{
    Calculadora Calc1;
    float resultadoSuma = 0.00;
    resultadoSuma = Calc1.suma(20, 30);
    cout << "El resultado de la suma es: " << resultadoSuma << endl;

    Calculadora Calc2;
    float resultadoResta = 0.00;
    resultadoResta = Calc2.resta(10, 5);
    cout << "El resultado de la resta es: " << resultadoResta << endl;

    Calculadora Calc3;
    float resultadoMulti = 0.00;
    resultadoMulti = Calc3.multiplicacion(10, 10);
    cout << "El resultado de la multiplicacion es: " << resultadoMulti << endl;

    Calculadora Calc4;
    float resultadoDivision = 0.00;
    resultadoDivision = Calc4.division(100, 5);
    cout << "El resultado de la division es: " << resultadoDivision << endl;

    return 0;
}
