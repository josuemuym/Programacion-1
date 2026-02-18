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
	int horarioactual;
	cout << "Ingrese la hora actual (0-23): " << endl;
	cin >> horarioactual;
	if (horarioactual>=0 && horarioactual<=5) {
		cout << "Madrugada" << endl;
	} else {
		if (horarioactual>=6 && horarioactual<=11) {
			cout << "Mañana" << endl;
		} else {
			if (horarioactual>=12 && horarioactual<=13) {
				cout << "Mediodía" << endl;
			} else {
				if (horarioactual>=14 && horarioactual<=19) {
					cout << "Tarde" << endl;
				} else {
					if (horarioactual>=20 && horarioactual<=23) {
						cout << "Noche" << endl;
					} else {
						cout << "hora invalida" << endl;
					}
				}
			}
		}
	}
	return 0;
}

