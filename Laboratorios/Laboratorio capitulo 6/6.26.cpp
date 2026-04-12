#include <iostream>
using namespace std;

double centigrados(double fahrenheit) {
    return 5.0 / 9.0 * (fahrenheit - 32);
}

double fahrenheit(double centigrados) {
    return 9.0 / 5.0 * centigrados + 32;
}

int main() {
    cout << "Centigrados\tFahrenheit" << endl;
    for (int c = 0; c <= 100; c++)
        cout << c << "\t\t" << fahrenheit(c) << endl;

    cout << endl;

    cout << "Fahrenheit\tCentigrados" << endl;
    for (int f = 32; f <= 212; f++)
        cout << f << "\t\t" << centigrados(f) << endl;

    return 0;
}
