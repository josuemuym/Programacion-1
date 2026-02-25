#include <iostream>
using namespace std;

int main() {
    double usuarios;
    int meses;

    cout << "Tasa 2%:" << endl;
    usuarios = 1000;
    meses = 0;
    while (usuarios < 2500) {
        usuarios = usuarios + (usuarios * 0.02);
        meses++;
    }
    cout << "Meses para llegar a 2500 millones: " << meses << endl;

    cout << "Tasa 3%:" << endl;
    usuarios = 1000;
    meses = 0;
    while (usuarios < 2500) {
        usuarios = usuarios + (usuarios * 0.03);
        meses++;
    }
    cout << "Meses para llegar a 2500 millones: " << meses << endl;

    cout << "Tasa 4%:" << endl;
    usuarios = 1000;
    meses = 0;
    while (usuarios < 2500) {
        usuarios = usuarios + (usuarios * 0.04);
        meses++;
    }
    cout << "Meses para llegar a 2500 millones: " << meses << endl;

    cout << "Tasa 5%:" << endl;
    usuarios = 1000;
    meses = 0;
    while (usuarios < 2500) {
        usuarios = usuarios + (usuarios * 0.05);
        meses++;
    }
    cout << "Meses para llegar a 2500 millones: " << meses << endl;

    return 0;
}
