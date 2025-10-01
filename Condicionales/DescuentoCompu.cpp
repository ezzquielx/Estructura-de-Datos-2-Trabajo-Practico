#include <iostream>
using namespace std;

int main() {
    int numComputadoras;
    cout << "Ingrese el número de computadoras: ";
    cin >> numComputadoras;
    double precioComputadora = 11000;
    double totalDescuento;
    if (numComputadoras < 5) {
        totalDescuento = 0.10 * (numComputadoras * precioComputadora);
    } else if (numComputadoras < 10) {
        totalDescuento = 0.20 * (numComputadoras * precioComputadora);
    } else {
        totalDescuento = 0.40 * (numComputadoras * precioComputadora);
    }
    cout << "Descuento en computadoras: " << totalDescuento << " pesos" << endl;
    return 0;
}