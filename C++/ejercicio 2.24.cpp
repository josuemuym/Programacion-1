#include<iostream>
using namespace std;

int main(){
    int numero;

    cout << "ingrese un numero entero: ";
    cin >> numero;

    if (numero % 2 == 0){
        cout << "tu numero es par " << endl;
    } else {
        cout << "tu numero es impar" << endl;
    }
    return 0;
}
