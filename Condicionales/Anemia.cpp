#include <iostream>
using namespace std;

int main() {
    double hemoglobina;
    int edadHemoglobina;
    char sexo;
    cout << "Ingrese la edad: ";
    cin >> edadHemoglobina;
    cout << "Ingrese el nivel de hemoglobina: ";
    cin >> hemoglobina;
    cout << "Ingrese el sexo (M/F): ";
    cin >> sexo;
    bool tieneAnemia = false;

    // Se determina el rango según la tabla
    if (edadHemoglobina <= 1) {
        if (hemoglobina < 13 || hemoglobina > 26) tieneAnemia = true;
    } else if (edadHemoglobina <= 6) {
        if (hemoglobina < 10 || hemoglobina > 18) tieneAnemia = true;
    } else if (edadHemoglobina <= 12) {
        if (hemoglobina < 11 || hemoglobina > 15) tieneAnemia = true;
    } else if (edadHemoglobina <= 5) {
        if (hemoglobina < 11.5 || hemoglobina > 15) tieneAnemia = true;
    } else if (edadHemoglobina <= 10) {
        if (hemoglobina < 12.6 || hemoglobina > 15.5) tieneAnemia = true;
    } else if (edadHemoglobina <= 15) {
        if (hemoglobina < 13 || hemoglobina > 15.5) tieneAnemia = true;
    } else {
        if ((sexo == 'M' && hemoglobina < 14) || (sexo == 'F' && hemoglobina < 12)) {
            tieneAnemia = true;
        }
    }
    cout << (tieneAnemia ? "Tiene anemia." : "No tiene anemia.") << endl;
    return 0;
}