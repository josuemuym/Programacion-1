#include <iostream>
using namespace std;

class Empleado{
private:
    string nombre;
    string apellidoPaterno;
    int salarioMensual;

public:
    Empleado(string pNombre, string pApellido, int pSalario){
        nombre = pNombre;
        apellidoPaterno = pApellido;
        if(pSalario > 0){
            salarioMensual = pSalario;
        } else {
            salarioMensual = 0;
            cout << "El salario mensual no es positivo, se establecio como 0" << endl;
        }
    }

    void establecer(string pNombre, string pApellido, int pSalario){
        nombre = pNombre;
        apellidoPaterno = pApellido;
        if(pSalario>0){
            salarioMensual = pSalario;
        } else {
            salarioMensual = 0;
            cout << "Salario invalido, se coloco como 0" << endl;
        }
    }

    void obtener(){
        cout << "Nombre: " << nombre << " " << apellidoPaterno << endl;
        cout << "Salario mensual: " << salarioMensual << endl;
        cout << "Salario anual: " << salarioMensual*12 << endl;
    }

    void aplicarAumento(int porcentaje){
        salarioMensual = salarioMensual * (1 + porcentaje / 100.0);
    }
};
int main(){
    Empleado empleado1("Josue", "Muy", 4000);
    Empleado empleado2("Pedro", "Munuera", 6000);

    cout << "Empleado 1" << endl;
    empleado1.obtener();

    cout << "Empleado 2" << endl;
    empleado2.obtener();

    cout << "\nCon aumento de 10%" << endl;
    empleado1.aplicarAumento(10);
    empleado2.aplicarAumento(10);

    cout << "\nEmpleado 1" << endl;
    empleado1.obtener();

    cout << "Empleado 2" << endl;
    empleado2.obtener();

    return 0;
}
