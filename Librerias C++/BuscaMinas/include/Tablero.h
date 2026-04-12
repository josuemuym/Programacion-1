#ifndef TABLERO_H
#define TABLERO_H

#include <iostream>
#include <vector>
#include "Celda.h"
using namespace std;

// Clase que representa el tablero completo del juego.
// Contiene la cuadrícula de celdas y se encarga de imprimirla y gestionarla.
class Tablero
{
    public:
        Tablero();
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

        // Getters y setters de dimensiones y modo
        int getAlturaTablero();
        int setAlturaTablero(int alturaTablero);
        int getAnchoTablero();
        int setAnchoTablero(int anchoTablero);
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);

        // Métodos de impresión del tablero en consola
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();
        void imprimirEncabezado();
        void imprimir();

        // Lógica del juego sobre el tablero
        bool colocarMina(int x, int y);
        bool descubrirMina(int x, int y);
        int contarCeldasSinMinasYSinDescubrir();

    protected:
    private:
        int alturaTablero, anchoTablero;
        bool modoDesarrollador; // Si está activo, se muestran todas las minas

        vector<vector<Celda>> contenidoTablero; // Cuadrícula de celdas

        string getRepresentacionMina(int x, int y); // Qué símbolo mostrar en cada celda
        int minasCercanas(int fila, int columna);   // Cuántas minas hay alrededor
};

#endif // TABLERO_H
