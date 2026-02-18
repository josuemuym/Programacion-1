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
	int cantidadbilletes;
	int montocentavos;
	float montoingresado;
	int opcionarealizar;
	opcionarealizar = 0;
	while (opcionarealizar==0 || opcionarealizar==1) {
		cout << "Ingrese la cantidad de dinero: " << endl;
		cin >> montoingresado;
		montocentavos = int(montoingresado*100);
		cantidad = int(montocentavos/20000);
		montocentavos = montocentavos%20000;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " billete(s) de 200" << endl;
		}
		cantidadbilletes = int(montocentavos/10000);
		montocentavos = montocentavos%10000;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " billete(s) de 100" << endl;
		}
		cantidadbilletes = int(montocentavos/5000);
		montocentavos = montocentavos%5000;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " billete(s) de 50" << endl;
		}
		cantidadbilletes = int(montocentavos/2000);
		montocentavos = montocentavos%2000;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " billete(s) de 20" << endl;
		}
		cantidadbilletes = int(montocentavos/1000);
		montocentavos = montocentavos%1000;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " billete(s) de 10" << endl;
		}
		cantidadbilletes = int(montocentavos/500);
		montocentavos = montocentavos%500;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " billete(s) de 5" << endl;
		}
		cantidadbilletes = int(montocentavos/100);
		montocentavos = montocentavos%100;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " moneda(s) de 1" << endl;
		}
		cantidadbilletes = int(montocentavos/50);
		montocentavos = montocentavos%50;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " moneda(s) de 0.50" << endl;
		}
		cantidadbilletes = int(montocentavos/25);
		montocentavos = montocentavos%25;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " moneda(s) de 0.25" << endl;
		}
		cantidadbilletes = int(montocentavos/10);
		montocentavos = montocentavos%10;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " moneda(s) de 0.10" << endl;
		}
		cantidadbilletes = int(montocentavos/5);
		montocentavos = montocentavos%5;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " moneda(s) de 0.05" << endl;
		}
		cantidadbilletes = int(montocentavos/1);
		montocentavos = montocentavos%1;
		if (cantidadbilletes>0) {
			cout << cantidadbilletes << " moneda(s) de 0.01" << endl;
		}
		cout << "¿Desea ingresar otra cantidad? (1=si y 2=no): " << endl;
		cin >> opcionarealizar;
	}
	cout << "se cerro el programa" << endl;
	return 0;
}

