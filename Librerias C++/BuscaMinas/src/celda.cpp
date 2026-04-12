#include "Celda.h"
#include <iostream>
using namespace std;

// Constructor vacío, necesario para inicializar arreglos o vectores de celdas
Celda::Celda()
{
}

// Constructor principal: asigna posición y estado inicial de la mina
// La celda arranca como no descubierta por defecto
Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)
{
    this->coordenadaX = coordenadaX;
    this->coordenadaY = coordenadaY;
    this->mina = estadoMina;
    this->minaDescubierta = false;
}

int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;
}

int Celda::getCoordenadaX()
{
    return this->coordenadaX;
}

int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;
}

int Celda::getCoordenadaY()
{
    return this->coordenadaY;
}

// Coloca una mina en la celda, pero solo si no tenía una antes.
// Retorna false si ya había mina (evita duplicados).
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())
    {
        return false; // Ya tenía mina, no se hace nada
    }
    else
    {
        this->mina = estadoMina;
        return true;
    }
}

bool Celda::getMina()
{
    return this->mina;
}

bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;
}

bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta;
}

// Imprime en consola la posición de la celda y si tiene mina (útil para debug)
void Celda::imprimirCelda()
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY
         << " con mina? " << this->mina << "\n";
}
