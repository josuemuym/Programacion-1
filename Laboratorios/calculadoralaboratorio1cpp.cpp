// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float divisionvalores;
	float modvalores;
	float multiplicarvalores;
	int opcionelegir;
	float restavalores;
	float sumavalores;
	float totaloperacion;
	float valor1;
	float valor2;
	do {
		cout << "calculadora" << endl;
		cout << "Que operacion desea realizar" << endl;
		cout << "1. suma" << endl;
		cout << "2. resta" << endl;
		cout << "3. multiplicacion" << endl;
		cout << "4. division" << endl;
		cout << "5. modulo" << endl;
		cout << "6. salir" << endl;
		cout << "Eliga una opcion (1-6): " << endl;
		cin >> opcionelegir;
		if (opcionelegir==1) {
			cout << "ingrese el primer valor" << endl;
			cin >> valor1;
			cout << "ingrese el segundo valor" << endl;
			cin >> valor2;
			sumavalores = valor1+valor2;
			totaloperacion = sumavalores;
			cout << totaloperacion << endl;
		} else {
			if (opcionelegir==2) {
				cout << "ingrese el primer valor" << endl;
				cin >> valor1;
				cout << "ingrese el segundo valor" << endl;
				cin >> valor2;
				restavalores = valor1-valor2;
				totaloperacion = restavalores;
				cout << totaloperacion << endl;
			} else {
				if (opcionelegir==3) {
					cout << "ingrese el primer valor" << endl;
					cin >> valor1;
					cout << "ingrese el segundo valor" << endl;
					cin >> valor2;
					multiplicarvalores = valor1*valor2;
					totaloperacion = multiplicarvalores;
					cout << totaloperacion << endl;
				} else {
					if (opcionelegir==4) {
						cout << "ingrese el primer valor" << endl;
						cin >> valor1;
						cout << "ingrese el segundo valor" << endl;
						cin >> valor2;
						divisionvalores = valor1/valor2;
						totaloperacion = divisionvalores;
						cout << totaloperacion << endl;
					} else {
						if (opcionelegir==5) {
							cout << "ingrese el primer valor" << endl;
							cin >> valor1;
							cout << "ingrese el segundo valor" << endl;
							cin >> valor2;
							modvalores = valor1%valor2;
							totaloperacion = modvalores;
							cout << totaloperacion << endl;
						}
					}
				}
			}
		}
	} while (opcionelegir!==6);
	return 0;
}

