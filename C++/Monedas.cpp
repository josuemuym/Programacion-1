// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int cantidad;
	float monto;
	int montocentavos;
	int opc;
	opc = 0;
	while (opc==0 || opc==1) {
		cout << "Ingrese la cantidad de dinero: " << endl;
		cin >> monto;
		montocentavos = int(monto*100);
		cantidad = int(montocentavos/20000);
		montocentavos = montocentavos%20000;
		if (cantidad>0) {
			cout << cantidad << " billete(s) de 200" << endl;
		}
		cantidad = int(montocentavos/10000);
		montocentavos = montocentavos%10000;
		if (cantidad>0) {
			cout << cantidad << " billete(s) de 100" << endl;
		}
		cantidad = int(montocentavos/5000);
		montocentavos = montocentavos%5000;
		if (cantidad>0) {
			cout << cantidad << " billete(s) de 50" << endl;
		}
		cantidad = int(montocentavos/2000);
		montocentavos = montocentavos%2000;
		if (cantidad>0) {
			cout << cantidad << " billete(s) de 20" << endl;
		}
		cantidad = int(montocentavos/1000);
		montocentavos = montocentavos%1000;
		if (cantidad>0) {
			cout << cantidad << " billete(s) de 10" << endl;
		}
		cantidad = int(montocentavos/500);
		montocentavos = montocentavos%500;
		if (cantidad>0) {
			cout << cantidad << " billete(s) de 5" << endl;
		}
		cantidad = int(montocentavos/100);
		montocentavos = montocentavos%100;
		if (cantidad>0) {
			cout << cantidad << " moneda(s) de 1" << endl;
		}
		cantidad = int(montocentavos/50);
		montocentavos = montocentavos%50;
		if (cantidad>0) {
			cout << cantidad << " moneda(s) de 0.50" << endl;
		}
		cantidad = int(montocentavos/25);
		montocentavos = montocentavos%25;
		if (cantidad>0) {
			cout << cantidad << " moneda(s) de 0.25" << endl;
		}
		cantidad = int(montocentavos/10);
		montocentavos = montocentavos%10;
		if (cantidad>0) {
			cout << cantidad << " moneda(s) de 0.10" << endl;
		}
		cantidad = int(montocentavos/5);
		montocentavos = montocentavos%5;
		if (cantidad>0) {
			cout << cantidad << " moneda(s) de 0.05" << endl;
		}
		cantidad = int(montocentavos/1);
		montocentavos = montocentavos%1;
		if (cantidad>0) {
			cout << cantidad << " moneda(s) de 0.01" << endl;
		}
		cout << "¿Desea ingresar otra cantidad? (1=si y 2=no): " << endl;
		cin >> opc;
	}
	cout << "se cerro el programa" << endl;
	return 0;
}

