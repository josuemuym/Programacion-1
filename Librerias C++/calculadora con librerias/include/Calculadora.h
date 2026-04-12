#ifndef CALCULADORA_H
#define CALCULADORA_H


class Calculadora
{
    public:
        Calculadora();
        float suma(int x, int y);
        float resta(int x, int y);
        float multiplicacion(int x, int y);
        float division(int x, int y);

        ~Calculadora();

    protected:

    private:
};

#endif // CALCULADORA_H
