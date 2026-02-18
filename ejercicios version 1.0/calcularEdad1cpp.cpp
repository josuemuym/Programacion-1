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
	int anoactual;
	int anonacimiento;
	float edadactual;
	string nombreusuario;
	anonacimiento = 0;
	anoactual = 0;
	nombreusuario = "";
	cout << "Ingrese su nombre: " << endl;
	cin >> nombreusuario;
	cout << "Ingrese su año de nacimiento: " << endl;
	cin >> anonacimiento;
	cout << "Ingrese el año actual: " << endl;
	cin >> anoactual;
	edadactual = anoactual-anonacimiento;
	cout << nombreusuario << " tiene " << edadactual << endl;
	return 0;
}

