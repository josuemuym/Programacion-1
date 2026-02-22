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
	int cuentacliente;
	float limitecredito;
	float nuevosaldo;
	float saldoinicial;
	float totalarticuloscargados;
	float totalcreditosaplicados;
	cout << "Ingrese numero de cuenta o -1 para salir:" << endl;
	cin >> cuentacliente;
	while (cuentacliente!=-1) {
		cout << "Ingrese su saldo inicial del mes: " << endl;
		cin >> saldoinicial;
		cout << "Ingrese los cargos totales: " << endl;
		cin >> totalarticuloscargados;
		cout << "Ingrese los creditos totales: " << endl;
		cin >> totalcreditosaplicados;
		cout << "Ingrese el limite de credito: " << endl;
		cin >> limitecredito;
		nuevosaldo = (saldoinicial+totalarticuloscargados)-totalcreditosaplicados;
		cout << "Cuenta: " << cuentacliente << endl;
		cout << "Limite de crédito: " << limitecredito << endl;
		cout << "Nuevo saldo: " << nuevosaldo << endl;
		if (limitecredito<nuevosaldo) {
			cout << "Se excedio el limite de su credito" << endl;
		}
		cout << "Ingrese numero de cuenta o -1 para salir:" << endl;
		cin >> cuentacliente;
	}
	return 0;
}

