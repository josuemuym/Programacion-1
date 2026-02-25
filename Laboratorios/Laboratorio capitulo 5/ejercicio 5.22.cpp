#include <iostream>
using namespace std;

int main() {
    int x = 3, y = 10, a = 5, b = 5, g = 3, i = 6, j = 4;

    cout << "a) Original: " << (!(x < 5) && !(y >= 7)) << "  DeMorgan: " << ((x >= 5) || (y < 7)) << endl;
    cout << "b) Original: " << (!(a == b) || !(g != 5)) << "  DeMorgan: " << ((a != b) || (g == 5)) << endl;
    cout << "c) Original: " << (!((x <= 8) && (y > 4))) << "  DeMorgan: " << ((x > 8) || (y <= 4)) << endl;
    cout << "d) Original: " << (!((i > 4) || (j <= 6))) << "  DeMorgan: " << ((i <= 4) && (j > 6)) << endl;

    return 0;
}
