#include "Calculadora.h"

Calculadora::Calculadora()
{
    //ctor
}
float Calculadora::suma(float n1, float n2)
{
    return n1+n2;
}
float Calculadora::resta(float n1, float n2)
{
    return n1-n2;
}
float Calculadora::multiplicacion(float n1, float n2)
{
    return n1*n2;
}
float Calculadora::division(float n1, float n2)
{
    return n1/n2;
}
Calculadora::~Calculadora()
{
    //dtor
}
