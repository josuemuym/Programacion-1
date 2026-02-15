#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;

    cout << "Escriba el primer numero entero: " << endl;
    cin >> num1;
    cout << "Escriba el segundo numero entero: " << endl;
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " es mas grande que " << num2 << endl;
    }
    if (num2 > num1) {
        cout << num2 << " es mas grande que " << num1 << endl;
    }
    if (num1 == num2) {
        cout << "Estos numeros son iguales" << endl;
    }

}
