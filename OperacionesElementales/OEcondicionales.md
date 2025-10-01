#include <iostream> // Librería estándar para entrada y salida
using namespace std;

int main() {
// =====================================
// Problemas Condicionales
// =====================================
// a) Problemas Selectivos Simples
// =====================================

    // 1. Descuento en supermercado
    double totalCompra;
    int numero;

    // >> Operador de entrada: recibe datos desde el teclado
    cout << "Ingrese el total de la compra: ";
    cin >> totalCompra;

    cout << "Ingrese un número al azar: ";
    cin >> numero;

    double descuento;

    /* 
       if - else: estructura condicional
       < Operador relacional: compara si el número es menor que 74
       * Operación aritmética: multiplicación (para calcular el descuento)
       = Asignación de resultado a la variable 'descuento'
    */
    if (numero < 74) {
        descuento = 0.15 * totalCompra;
    } else {
        descuento = 0.20 * totalCompra;
    }

    // << Operador de salida: muestra resultados por pantalla
    cout << "Descuento: " << descuento << " pesos" << endl;

    // =====================================
    // 2. Cuota de fianza
    // =====================================
    double montoFianza;
    cout << "Ingrese el monto de la fianza: ";
    cin >> montoFianza;

    double cuota;

    /*
       < Operador relacional: verifica si el monto es menor a 50000
       * Multiplicación para calcular el porcentaje
       = Asignación
    */
    if (montoFianza < 50000) {
        cuota = 0.03 * montoFianza;
    } else {
        cuota = 0.02 * montoFianza;
    }

    cout << "Cuota a pagar: " << cuota << " pesos" << endl;

    // =====================================
    // b) Problemas Selectivos Compuestos
    // =====================================

    // 1. Descuento en computadoras
    int numComputadoras;
    cout << "Ingrese el número de computadoras: ";
    cin >> numComputadoras;

    double precioComputadora = 11000;
    double totalDescuento;

    /*
       < Operador relacional: usado para comparar cantidades
       * Multiplicación: numComputadoras * precioComputadora
       = Asignación
    */
    if (numComputadoras < 5) {
        totalDescuento = 0.10 * (numComputadoras * precioComputadora);
    } else if (numComputadoras < 10) {
        totalDescuento = 0.20 * (numComputadoras * precioComputadora);
    } else {
        totalDescuento = 0.40 * (numComputadoras * precioComputadora);
    }

    cout << "Descuento en computadoras: " << totalDescuento << " pesos" << endl;

    // =====================================
    // 2. Anemia
    // =====================================
    double hemoglobina;
    int edadHemoglobina;
    char sexo;

    cout << "Ingrese la edad: ";
    cin >> edadHemoglobina;

    cout << "Ingrese el nivel de hemoglobina: ";
    cin >> hemoglobina;

    cout << "Ingrese el sexo (M/F): ";
    cin >> sexo;

    bool tieneAnemia = false; // = Asignación inicial

    /*
       Uso de operadores relacionales: <, >, <=, ==
       Uso de operadores lógicos: || (OR), && (AND)
       if anidados: evaluan múltiples condiciones
    */
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
        // && se usa para combinar condiciones según el sexo
        if ((sexo == 'M' && hemoglobina < 14) || (sexo == 'F' && hemoglobina < 12)) {
            tieneAnemia = true;
        }
    }

    // Operador ternario: simplifica el if para mostrar resultado
    cout << (tieneAnemia ? "Tiene anemia." : "No tiene anemia.") << endl;

    // =====================================
    // 3. Estimulación académica
    // =====================================
    double promedio;
    int materiasReprobadas;
    char tipoAlumno;

    cout << "Ingrese el promedio: ";
    cin >> promedio;

    cout << "Ingrese el número de materias reprobadas: ";
    cin >> materiasReprobadas;

    cout << "Ingrese el tipo de alumno (P para Preparatoria, O para Profesional): ";
    cin >> tipoAlumno;

    /*
       == Operador relacional: igualdad
       ? : Operador ternario: elige entre dos valores
       costoUnidad depende de tipoAlumno
    */
    double costoUnidad = (tipoAlumno == 'P') ? 180 : 300;

    int unidades;
    double descuentoEstudiante;

    /*
       Condicionales combinadas con >=, >, <= para evaluar rangos
       y establecer unidades y descuentos
    */
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

    /*
       / División: (unidades / 5.0)
       * Multiplicación: cálculo total
       - Resta: (1 - descuentoEstudiante)
       = Asignación final
    */
    double totalPagar = (unidades / 5.0) * costoUnidad * (1 - descuentoEstudiante);

    cout << "Total a pagar: " << totalPagar << " pesos" << endl;

    return 0;
}
