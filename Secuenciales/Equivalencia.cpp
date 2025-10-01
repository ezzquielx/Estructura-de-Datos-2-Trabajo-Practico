#include <iostream>
using namespace std;

int main() {
    double pesos, tasaCambio;
    cout << "Ingrese la cantidad en pesos: ";
    cin >> pesos;
    cout << "Ingrese la tasa de cambio (pesos por dólar): ";
    cin >> tasaCambio;
    double dolares = pesos / tasaCambio;
    cout << "Equivalencia en dólares: " << dolares << endl;
    return 0;
}