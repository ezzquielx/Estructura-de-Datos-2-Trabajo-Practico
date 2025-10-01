#include <iostream>
using namespace std;

int main() {
    double presion, volumen, temperatura;
    cout << "Ingrese presión (en atm): ";
    cin >> presion;
    cout << "Ingrese volumen (en m³): ";
    cin >> volumen;
    cout << "Ingrese temperatura (en °F): ";
    cin >> temperatura;
    double masa = (presion * volumen) / (0.37 * (temperatura + 460));
    cout << "Masa de aire: " << masa << " lbs" << endl;
    return 0;
}