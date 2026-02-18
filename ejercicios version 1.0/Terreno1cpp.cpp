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
	float alambreterreno;
	float anchoterreno;
	float areaterreno;
	float largoterreno;
	float perimetroterreno;
	float preciometro2;
	float precioterreno;
	cout << "Ingrese el ancho del terreno en metros: " << endl;
	cin >> anchoterreno;
	cout << "Ingrese el largo del terreno en metros: " << endl;
	cin >> largoterreno;
	cout << "Ingrese el precio del metro cuadrado: " << endl;
	cin >> preciometro2;
	areaterreno = anchoterreno*largoterreno;
	precioterreno = areaterreno*preciometro2;
	perimetroterreno = 2*(anchoterreno+largoterreno);
	alambreterreno = perimetroterreno*3;
	cout << "Detalles del terreno" << endl;
	cout << "ancho: " << anchoterreno << endl;
	cout << "Largo: " << largoterreno << endl;
	cout << "precio de m2: " << preciometro2 << endl;
	cout << "Precio del terreno: " << precioterreno << endl;
	cout << "Metros de alambre necesarios: " << alambreterreno << endl;
	return 0;
}

