#include <iostream> // Librería para entrada y salida de datos
using namespace std;

int main() {
// =======================
// 1. Equivalencia en dólares
// =======================
double pesos, tasaCambio;

    // >> Operador de entrada: se usa para leer datos desde el teclado
    cout << "Ingrese la cantidad en pesos: ";
    cin >> pesos;

    cout << "Ingrese la tasa de cambio (pesos por dólar): ";
    cin >> tasaCambio;

    // / Operación aritmética: división
    // = Operación de asignación: asigna el resultado a la variable dolares
    double dolares = pesos / tasaCambio;

    // << Operador de salida: muestra información en pantalla
    cout << "Equivalencia en dólares: " << dolares << endl;

    // =======================
    // 2. Masa de aire
    // =======================
    double presion, volumen, temperatura;

    cout << "Ingrese presión (en atm): ";
    cin >> presion;

    cout << "Ingrese volumen (en m³): ";
    cin >> volumen;

    cout << "Ingrese temperatura (en °F): ";
    cin >> temperatura;

    /*  
        * Operación aritmética: multiplicación
        + Operación aritmética: suma
        / Operación aritmética: división
        = Operación de asignación
    */
    double masa = (presion * volumen) / (0.37 * (temperatura + 460));

    cout << "Masa de aire: " << masa << " lbs" << endl;

    // =======================
    // 3. Pulsaciones
    // =======================
    int edad;

    cout << "Ingrese la edad: ";
    cin >> edad;

    /*  
        - Operación aritmética: resta (220 - edad)
        / Operación aritmética: división (resultado / 10.0)
        = Operación de asignación
    */
    double pulsaciones = (220 - edad) / 10.0;

    cout << "Número de pulsaciones: " << pulsaciones << endl;

    // =======================
    // 4. Presupuesto hospital
    // =======================
    double presupuesto;

    cout << "Ingrese el monto del presupuesto: ";
    cin >> presupuesto;

    /*  
        * Operación aritmética: multiplicación (porcentajes del presupuesto)
        = Operación de asignación
    */
    double ginecologia = 0.40 * presupuesto;
    double traumatologia = 0.30 * presupuesto;
    double pediatria = 0.30 * presupuesto;

    cout << "Ginecología: " << ginecologia << " pesos" << endl;
    cout << "Traumatología: " << traumatologia << " pesos" << endl;
    cout << "Pediatría: " << pediatria << " pesos" << endl;

    return 0;
}
