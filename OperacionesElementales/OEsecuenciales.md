# Ejercicios de Programación en C++
## Problemas Secuenciales

Este documento contiene ejercicios resueltos sobre estructuras secuenciales en C++, donde las instrucciones se ejecutan una tras otra de forma lineal.

---

## 📚 Librería Utilizada

```cpp
#include <iostream> // Librería para entrada y salida de datos
using namespace std;
```

---

## 💱 1. Equivalencia en Dólares

**Descripción:** Convierte una cantidad de pesos a dólares según la tasa de cambio proporcionada.

### Código

```cpp
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
```

### Operadores utilizados
- `/` → División (aritmético)
- `=` → Asignación
- `>>` → Entrada de datos (cin)
- `<<` → Salida de datos (cout)

### Fórmula
```
dólares = pesos ÷ tasa de cambio
```

---

## 🌬️ 2. Masa de Aire

**Descripción:** Calcula la masa de aire en libras usando la fórmula de los gases ideales.

### Código

```cpp
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
```

### Operadores utilizados
- `*` → Multiplicación (aritmético)
- `+` → Suma (aritmético)
- `/` → División (aritmético)
- `=` → Asignación
- `( )` → Paréntesis (agrupación de operaciones)

### Fórmula
```
masa = (presión × volumen) ÷ [0.37 × (temperatura + 460)]
```

**Nota:** Se suma 460 a la temperatura para convertir de Fahrenheit a Rankine.

---

## ❤️ 3. Pulsaciones

**Descripción:** Calcula el número de pulsaciones recomendadas durante 10 segundos de ejercicio aeróbico según la edad.

### Código

```cpp
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
```

### Operadores utilizados
- `-` → Resta (aritmético)
- `/` → División (aritmético)
- `=` → Asignación

### Fórmula
```
pulsaciones = (220 - edad) ÷ 10
```

**Explicación:** La frecuencia cardíaca máxima se estima como 220 menos la edad, y se divide entre 10 para obtener las pulsaciones en 10 segundos.

---

## 🏥 4. Presupuesto Hospitalario

**Descripción:** Distribuye el presupuesto anual de un hospital entre tres áreas: Ginecología, Traumatología y Pediatría.

### Código

```cpp
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
```

### Operadores utilizados
- `*` → Multiplicación (aritmético)
- `=` → Asignación

### Distribución del Presupuesto

| Área           | Porcentaje | Cálculo             |
|----------------|------------|---------------------|
| Ginecología    | 40%        | 0.40 × presupuesto  |
| Traumatología  | 30%        | 0.30 × presupuesto  |
| Pediatría      | 30%        | 0.30 × presupuesto  |

### Ejemplo de Ejecución

```
Ingrese el monto del presupuesto: 1000000

Ginecología: 400000 pesos
Traumatología: 300000 pesos
Pediatría: 300000 pesos
```

---

## 📋 Resumen de Operadores

### Operadores Aritméticos
| Operador | Descripción      | Ejemplo      |
|----------|------------------|--------------|
| `+`      | Suma             | `a + b`      |
| `-`      | Resta            | `220 - edad` |
| `*`      | Multiplicación   | `0.40 * x`   |
| `/`      | División         | `pesos / tasa` |

### Operadores de Asignación
| Operador | Descripción              | Ejemplo           |
|----------|--------------------------|-------------------|
| `=`      | Asigna un valor          | `dolares = pesos / tasa` |

### Operadores de Entrada/Salida
| Operador | Descripción                    | Ejemplo           |
|----------|--------------------------------|-------------------|
| `>>`     | Lee datos desde el teclado     | `cin >> edad`     |
| `<<`     | Muestra datos en pantalla      | `cout << resultado` |
