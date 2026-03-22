#include <iostream>
using namespace std;

class Cuenta {
private:
    int saldo;

public:
    Cuenta(int pSaldoInicial){
        if (pSaldoInicial >= 0) {
            saldo=pSaldoInicial;
        }else {
            saldo=0;
            cout << "saldo inicial era invalido" << endl;
        }
    }

    void abonar(int monto){
        saldo += monto;
    }

    void cargar(int monto){
        if(monto <= saldo){
            saldo -= monto;
        } else {
            cout << "el monto a cargar excede el saldo de la cuenta." << endl;
        }
    }

    int obtenerSaldo(){
        return saldo;
    }
};

int main(){
    Cuenta miembro1(1000);
    Cuenta miembro2(100);

    cout << "Miembro 1" << endl;
    cout << "saldo inicial: " << miembro1.obtenerSaldo() << endl;
    miembro1.abonar(300);
    cout << "Abono de: " << miembro1.obtenerSaldo() << endl;
    miembro1.cargar(100);
    cout << "cargo de: " << miembro1.obtenerSaldo() << endl;
    miembro1.cargar(1000);
    cout << "Saldo final: " << miembro1.obtenerSaldo() << endl;

    cout << "Miembro 2" << endl;
    cout << "Saldo inicial: " << miembro2.obtenerSaldo() << endl;
    miembro2.abonar(30);
    cout << "abono de: " << miembro2.obtenerSaldo() << endl;

    return 0;
}
