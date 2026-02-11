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
	float alambre;
	float ancho;
	float area;
	float largo;
	float perimetro;
	float precio;
	float precio_metro2;
	cout << "Ingrese el ancho del terreno en metros: " << endl;
	cin >> ancho;
	cout << "Ingrese el largo del terreno en metros: " << endl;
	cin >> largo;
	cout << "Ingrese el precio del metro cuadrado: " << endl;
	cin >> precio_metro2;
	area = ancho*largo;
	precio = area*precio_metro2;
	perimetro = 2*(ancho+largo);
	alambre = perimetro*3;
	cout << "Detalles del terreno" << endl;
	cout << "ancho: " << ancho << endl;
	cout << "Largo: " << largo << endl;
	cout << "precio de m2: " << precio_metro2 << endl;
	cout << "Precio del terreno: " << precio << endl;
	cout << "Metros de alambre necesarios: " << alambre << endl;
	return 0;
}

