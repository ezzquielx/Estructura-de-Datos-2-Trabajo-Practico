#include <iostream>
using namespace std;

int main() {
    double montoFianza;
    cout << "Ingrese el monto de la fianza: ";
    cin >> montoFianza;
    double cuota;
    if (montoFianza < 50000) {
        cuota = 0.03 * montoFianza;
    } else {
        cuota = 0.02 * montoFianza;
    }
    cout << "Cuota a pagar: " << cuota << " pesos" << endl;
    return 0;
}