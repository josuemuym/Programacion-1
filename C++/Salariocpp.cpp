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
	float descuento;
	int edad;
	float sueldoanual;
	float sueldototal;
	cout << "Ingrese su edad: " << endl;
	cin >> edad;
	cout << "Ingrese su sueldo anual: " << endl;
	cin >> sueldoanual;
	if (sueldoanual<10000) {
		if (edad<=30) {
			descuento = sueldoanual*0.006;
			sueldototal = sueldoanual-descuento;
		} else {
			descuento = sueldoanual*0.005;
		}
	} else {
		if (sueldoanual>=10000 && sueldoanual<=19999) {
			if (edad<=30) {
				descuento = sueldoanual*0.012;
				sueldototal = sueldoanual-descuento;
			} else {
				descuento = sueldoanual*0.01;
			}
		} else {
			if (sueldoanual>=20000 && sueldoanual<=29999) {
				if (edad<=30) {
					descuento = sueldoanual*0.024;
					sueldototal = sueldoanual-descuento;
				} else {
					descuento = sueldoanual*0.02;
				}
			} else {
				if (sueldoanual>=30000) {
					if (edad<=30) {
						descuento = sueldoanual*0.030;
						sueldototal = sueldoanual-descuento;
					} else {
						descuento = sueldoanual*0.025;
						cout << "El aporte seria de: " << descuento << endl;
					}
				}
			}
		}
	}
	cout << "El aporte seria de: " << descuento << endl;
	return 0;
}

