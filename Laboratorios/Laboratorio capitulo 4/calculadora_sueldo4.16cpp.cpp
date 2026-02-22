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
	float horastrabajadas;
	float salariobruto;
	float tarifaporhora;
	cout << "Introduzca las horas trabajadas (-1 para salir): " << endl;
	cin >> horastrabajadas;
	while (horastrabajadas!=-1) {
		cout << "Introduzca la tarifa por horas del empleado: " << endl;
		cin >> tarifaporhora;
		if (horastrabajadas<=40) {
			salariobruto = horastrabajadas*tarifaporhora;
		} else {
			salariobruto = (40*tarifaporhora)+((horastrabajadas-40)*tarifaporhora*1.5);
		}
		cout << "El salario es Q" << salariobruto << endl;
		cout << "Introduzca las horas trabajadas (-1 para salir): " << endl;
		cin >> horastrabajadas;
	}
	return 0;
}

