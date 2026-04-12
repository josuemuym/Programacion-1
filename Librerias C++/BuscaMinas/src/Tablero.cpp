#include "Tablero.h"
#include <sstream>
#include <iostream>
using namespace std;

// Constructor vacío
Tablero::Tablero()
{
}

// Inicializa el tablero con las dimensiones dadas y llena cada celda sin minas
Tablero::Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador)
{
    this->alturaTablero = alturaTablero;
    this->anchoTablero = anchoTablero;
    this->modoDesarrollador = modoDesarrollador;

    // Construye la cuadrícula fila por fila
    int x, y;
    for (y = 0; y < this->alturaTablero; y++)
    {
        vector<Celda> fila;
        for (x = 0; x < this->anchoTablero; x++)
        {
            fila.push_back(Celda(x, y, false)); // Celda sin mina
        }
        this->contenidoTablero.push_back(fila);
    }
}

int Tablero::getAlturaTablero() { return this->alturaTablero; }
int Tablero::setAlturaTablero(int alturaTablero) { this->alturaTablero = alturaTablero; }
int Tablero::getAnchoTablero() { return this->anchoTablero; }
int Tablero::setAnchoTablero(int anchoTablero) { this->anchoTablero = anchoTablero; }
bool Tablero::getModoDesarrollador() { return this->modoDesarrollador; }
bool Tablero::setModoDesarrollador(bool modoDesarrollador) { this->modoDesarrollador = modoDesarrollador; }

// Decide qué mostrar en una celda:
// "*" si tiene mina y está descubierta (o modo desarrollador activo)
// El número de minas cercanas si está descubierta y no tiene mina
// "?" si todavía no fue destapada
string Tablero::getRepresentacionMina(int coordenadaX, int coordenadaY)
{
    Celda celdaTemporal = this->contenidoTablero.at(coordenadaY).at(coordenadaX);

    if (celdaTemporal.getMinaDescubierta() || this->modoDesarrollador)
    {
        if (celdaTemporal.getMina())
        {
            return "*";
        }
        else
        {
            // Convierte el conteo de minas cercanas a string para mostrarlo
            int cantidadCelda = this->minasCercanas(coordenadaY, coordenadaX);
            string cantidadCeldaString = " ";
            stringstream ss;
            ss << cantidadCelda;
            ss >> cantidadCeldaString;
            return cantidadCeldaString;
        }
    }
    else
    {
        return "?"; // Celda sin revelar
    }
}

// Cuenta cuántas minas hay en las celdas vecinas
// Cuida los bordes del tablero para no salirse del rango
int Tablero::minasCercanas(int filaTablero, int columnaTablero)
{
    int contadorTablero = 0;
    int filaInicioTablero, filaFinTablero, columnaInicioTablero, columnaFinTablero;

    // Limita el rango de búsqueda al borde superior
    filaInicioTablero = (filaTablero <= 0) ? 0 : filaTablero - 1;

    // Limita el rango al borde inferior
    filaFinTablero = (filaTablero + 1 >= this->alturaTablero) ? this->alturaTablero - 1 : filaTablero + 1;

    // Limita el rango al borde izquierdo
    columnaInicioTablero = (columnaTablero <= 0) ? 0 : columnaTablero - 1;

    // Limita el rango al borde derecho
    columnaFinTablero = (columnaTablero + 1 >= this->anchoTablero) ? this->anchoTablero - 1 : columnaTablero + 1;

    // Recorre los vecinos y cuenta minas
    for (int m = filaInicioTablero; m <= filaFinTablero; m++)
    {
        for (int l = columnaInicioTablero; l <= columnaFinTablero; l++)
        {
            if (this->contenidoTablero.at(m).at(l).getMina())
            {
                contadorTablero++;
            }
        }
    }
    return contadorTablero;
}

// Imprime la línea horizontal del encabezado
void Tablero::imprimirSeparadorEncabezado()
{
    for (int m = 0; m <= this->anchoTablero; m++)
    {
        cout << "----";
        if (m + 2 == this->anchoTablero)
            cout << "-";
    }
    cout << "\n";
}

// Imprime el separador entre filas del tablero
void Tablero::imprimirSeparadorFilas()
{
    for (int m = 0; m <= this->anchoTablero; m++)
    {
        cout << (m <= 1 ? "|---" : "+---");
        if (m == this->anchoTablero)
            cout << "+";
    }
    cout << "\n";
}

// Imprime la fila de números de columna
void Tablero::imprimirEncabezado()
{
    this->imprimirSeparadorEncabezado();
    cout << "|   ";
    for (int l = 0; l < this->anchoTablero; l++)
    {
        cout << "| " << l + 1 << " ";
        if (l + 1 == this->anchoTablero)
            cout << "|";
    }
    cout << "\n";
}

// Imprime el tablero completo con encabezado, filas y separadores
void Tablero::imprimir()
{
    this->imprimirEncabezado();
    this->imprimirSeparadorEncabezado();

    for (int y = 0; y < this->alturaTablero; y++)
    {
        cout << "| " << y + 1 << " "; // Número de fila
        for (int x = 0; x < this->anchoTablero; x++)
        {
            cout << "| " << this->getRepresentacionMina(x, y) << " ";
            if (x + 1 == this->anchoTablero)
                cout << "|";
        }
        cout << "\n";
        this->imprimirSeparadorFilas();
    }
}

// Coloca una mina en la celda indicada. Retorna false si ya había una.
bool Tablero::colocarMina(int x, int y)
{
    return this->contenidoTablero.at(y).at(x).setMina(true);
}

// Marca la celda como descubierta. Retorna false si había una mina .
bool Tablero::descubrirMina(int x, int y)
{
    this->contenidoTablero.at(y).at(x).setMinaDescubierta(true);
    Celda celda = this->contenidoTablero.at(y).at(x);
    return !celda.getMina(); // false = mina encontrada
}

// Cuenta cuántas celdas seguras quedan sin descubrir.
// Si llega a 0, el jugador ganó.
int Tablero::contarCeldasSinMinasYSinDescubrir()
{
    int contador = 0;
    for (int y = 0; y < this->alturaTablero; y++)
    {
        for (int x = 0; x < this->anchoTablero; x++)
        {
            Celda celdaTemporal = this->contenidoTablero.at(y).at(x);
            if (!celdaTemporal.getMinaDescubierta() && !celdaTemporal.getMina())
            {
                contador++;
            }
        }
    }
    return contador;
}
