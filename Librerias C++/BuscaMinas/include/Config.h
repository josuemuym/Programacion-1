#ifndef CONFIG_H
#define CONFIG_H

// Clase que guarda la configuración actual de la partida:
// tamaño del tablero, cantidad de minas, vidas y modo de juego.
class Config
{
    public:
        Config(int filasTablero, int columnasTablero, int minasTablero,
               bool modoDesarrolladorTablero, int vidasTablero);

        // Getters y setters de cada parámetro de configuración
        int getfilasTablero();
        int setfilasTablero(int filasTablero);
        int getcolumnasTablero();
        int setcolumnasTablero(int columnasTablero);
        int getminasTablero();
        int setminasTablero(int minasTablero);
        bool getmodoDesarrolladorTablero();
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);
        int getvidasTablero();
        int setvidasTablero(int vidasTablero);

        void menuConfiguracion(); // Muestra el menú interactivo para cambiar ajustes

    protected:
    private:
        int filasTablero;
        int columnasTablero;
        int minasTablero;
        bool modoDesarrolladorTablero; // Si está en true, se ven todas las minas
        int vidasTablero;
};

#endif // CONFIG_H
