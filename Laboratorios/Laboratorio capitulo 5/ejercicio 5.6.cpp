#include <iostream>
using namespace std;

int main(){
    int numero;
    int suma=0;
    int cantidad=0;

    for (cin >> numero; numero!= 9999; cin >> numero){
        suma += numero;
        cantidad++;
    }
    if (cantidad > 0){
        cout << "Promedio: " << (float)suma / cantidad << endl;
    } else {
        cout << "No se ingresaron numeros." << endl;
    }
    return 0;
}
