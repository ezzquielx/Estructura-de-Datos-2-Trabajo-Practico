#include <iostream>
using namespace std;

int main() {
    double presupuesto;
    cout << "Ingrese el monto del presupuesto: ";
    cin >> presupuesto;
    double ginecologia = 0.40 * presupuesto;
    double traumatologia = 0.30 * presupuesto;
    double pediatria = 0.30 * presupuesto;
    cout << "Ginecología: " << ginecologia << " pesos" << endl;
    cout << "Traumatología: " << traumatologia << " pesos" << endl;
    cout << "Pediatría: " << pediatria << " pesos" << endl;
    return 0;
}