#ifndef CALCULADORA_H
#define CALCULADORA_H


class Calculadora
{
    public:
        Calculadora();
        float suma(float n1, float n2);
        float resta(float n1, float n2);
        float multiplicacion(float n1, float n2);
        float division(float n1, float n2);

        ~Calculadora();

    protected:

    private:
};

#endif // CALCULADORA_H
