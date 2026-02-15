#include<iostream>
using namespace std;

int main (){
    int numero;

    cout << "Ingrese un numero de 5 digitos: " << endl;
    cin >> numero;

    int primer_digito = numero / 10000;
    int segundo_digito = (numero / 1000)% 10;
    int tercer_digito = (numero / 100)% 10;
    int cuarto_digito = (numero / 10)% 10;
    int quinto_digito = numero % 10;

    cout << primer_digito << "   " << segundo_digito << "   " << tercer_digito << "   " << cuarto_digito << "   " << quinto_digito << endl;
    return 0;
}
