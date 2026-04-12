#include "Juego.h"
#include <fstream>
#include <unistd.h>

// Genera un número aleatorio dentro de un rango [minimo, maximo]
int Juego::aleatorio_en_rango(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

int Juego::filaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
}

int Juego::columnaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
}

// Guarda el tablero y la cantidad de minas, luego las coloca aleatoriamente
Juego::Juego(Tablero tablero, int cantidadMinas)
{
    this->tablero = tablero;
    this->cantidadMinas = cantidadMinas;
    this->colocarMinasAleatoriamente();
}

// Coloca minas en posiciones aleatorias hasta alcanzar la cantidad requerida.
// Si cae en una celda que ya tiene mina, simplemente intenta de nuevo.
void Juego::colocarMinasAleatoriamente()
{
    int x, y, minasColocadas = 0;
    while (minasColocadas < this->cantidadMinas)
    {
        x = this->columnaAleatoria();
        y = this->filaAleatoria();
        if (this->tablero.colocarMina(x, y))
        {
            minasColocadas++;
        }
    }
}

// Pide la fila al jugador y ajusta a índice 0 (el usuario ve desde 1)
int Juego::solicitarFilaUsuario()
{
    int fila = 0;
    cout << "Ingresa la FILA en la que desea jugar: ";
    cin >> fila;
    return fila - 1;
}

// Pide la columna al jugador y ajusta a índice 0
int Juego::solicitarColumnaUsuario()
{
    int columna = 0;
    cout << "Ingresa la COLUMNA en la que desea jugar: ";
    cin >> columna;
    return columna - 1;
}

// El jugador gana si no quedan celdas seguras sin descubrir
bool Juego::jugadorGana()
{
    return this->tablero.contarCeldasSinMinasYSinDescubrir() == 0;
}

// Loop principal: muestra el tablero, recibe la jugada y evalúa el resultado.
// Si el jugador pisa una mina o descubre todo, termina el juego.
void Juego::iniciar()
{
    int fila, columna;
    while (true)
    {
        this->tablero.imprimir();
        fila = this->solicitarFilaUsuario();
        columna = this->solicitarColumnaUsuario();

        bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);

        if (!respuestaAUsuario)
        {
            // El jugador pisó una mina: muestra el tablero completo y termina
            cout << "Perdiste el Juego\n";
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }

        if (this->jugadorGana())
        {
            // Destapó todas las celdas seguras: gana
            cout << "Ganaste el Juego\n";
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }
    }
}
