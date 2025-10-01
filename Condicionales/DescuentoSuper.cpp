#include <iostream>
using namespace std;

int main() {
    double totalCompra;
    int numero;
    cout << "Ingrese el total de la compra: ";
    cin >> totalCompra;
    cout << "Ingrese un número al azar: ";
    cin >> numero;
    double descuento;
    if (numero < 74) {
        descuento = 0.15 * totalCompra;
    } else {
        descuento = 0.20 * totalCompra;
    }
    cout << "Descuento: " << descuento << " pesos" << endl;
    return 0;
}