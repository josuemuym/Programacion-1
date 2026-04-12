#ifndef CELDA_H
#define CELDA_H

// Clase que representa una celda individual del tablero.
// Cada celda sabe su posición, si tiene mina y si ya fue descubierta.
// Fecha: 17 marzo 2023

class Celda
{
    public:
        Celda();
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);

        // Getters y setters de posición
        int setCoordenadaX(int coordenadaX);
        int getCoordenadaX();
        int setCoordenadaY(int coordenadaY);
        int getCoordenadaY();

        // Manejo del estado de la mina
        bool setMina(bool estadoMina);
        bool getMina();

        // Manejo de si la celda ya fue revelada
        bool setMinaDescubierta(bool minaDescubierta);
        bool getMinaDescubierta();

        void imprimirCelda();

    protected:
    private:
        int coordenadaX, coordenadaY; // Posición de la celda en el tablero
        bool mina;                    // true si la celda tiene mina
        bool minaDescubierta;         // true si el jugador ya la destapó
};

#endif // CELDA_H
