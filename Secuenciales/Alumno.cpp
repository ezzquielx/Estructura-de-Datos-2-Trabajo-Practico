#include <iostream>
using namespace std;

int main() {
    double promedio;
    int materiasReprobadas;
    char tipoAlumno;
    cout << "Ingrese el promedio: ";
    cin >> promedio;
    cout << "Ingrese el número de materias reprobadas: ";
    cin >> materiasReprobadas;
    cout << "Ingrese el tipo de alumno (P para Preparatoria, O para Profesional): ";
    cin >> tipoAlumno;

    double costoUnidad = (tipoAlumno == 'P') ? 180 : 300;
    int unidades;
    double descuentoEstudiante;

    if (tipoAlumno == 'P') {
        if (promedio >= 9.5) {
            unidades = 55;
            descuentoEstudiante = 0.25;
        } else if (promedio >= 9) {
            unidades = 50;
            descuentoEstudiante = 0.10;
        } else if (promedio > 7) {
            unidades = 50;
            descuentoEstudiante = 0.0;
        } else if (materiasReprobadas <= 3) {
            unidades = 45;
            descuentoEstudiante = 0.0;
        } else {
            unidades = 40;
            descuentoEstudiante = 0.0;
        }
    } else {
        if (promedio >= 9.5) {
            unidades = 55;
            descuentoEstudiante = 0.20;
        } else {
            unidades = 55;
            descuentoEstudiante = 0.0;
        }
    }

    double totalPagar = (unidades / 5.0) * costoUnidad * (1 - descuentoEstudiante);
    cout << "Total a pagar: " << totalPagar << " pesos" << endl;
    return 0;
}