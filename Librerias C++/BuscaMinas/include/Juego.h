#ifndef JUEGO_H
#define JUEGO_H

#include "Tablero.h"

// Clase que maneja la lógica principal del juego:
// coloca minas, recibe input del jugador y determina si ganó o perdió.
class Juego
{
private:
    Tablero tablero;
    int cantidadMinas;

    // Helpers para generar posiciones aleatorias
    int aleatorio_en_rango(int minimo, int maximo);
    int filaAleatoria();
    int columnaAleatoria();

public:
    Juego(Tablero tablero, int cantidadMinas);

    void colocarMinasAleatoriamente();  // Distribuye las minas al inicio
    int solicitarFilaUsuario();         // Pide al jugador que ingrese una fila
    int solicitarColumnaUsuario();      // Pide al jugador que ingrese una columna
    bool jugadorGana();                 // Verifica si ya no quedan celdas seguras sin destapar
    void iniciar();                     // Loop principal del juego
};

#endif // JUEGO_H
