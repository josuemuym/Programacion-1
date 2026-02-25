#include <iostream>
using namespace std;

int main() {
    cout << "Decimal\tOctal\tHexadecimal\tBinario" << endl;

    for (int i = 1; i <= 256; i++) {
        cout << dec << i << "\t" << oct << i << "\t" << hex << i << "\t\t";

        int numero = i;
        int binario[9];
        int cantidad = 0;

        if (numero == 0) {
            cout << 0;
        } else {
            while (numero > 0) {
                binario[cantidad] = numero % 2;
                numero = numero / 2;
                cantidad++;
            }
            for (int j = cantidad - 1; j >= 0; j--) {
                cout << binario[j];
            }
        }

        cout << endl;
    }

    return 0;
}
