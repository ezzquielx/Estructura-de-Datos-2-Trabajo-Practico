
# 📊 Complejidad Algorítmica en C++

A continuación, se analiza cada bloque:

---

## 🔹 1. Descuento en supermercado
```cpp
if (numero < 74) {
    descuento = 0.15 * totalCompra;
} else {
    descuento = 0.20 * totalCompra;
}
````

* Operaciones:

    * 1 lectura de `numero` y `totalCompra`
    * 1 comparación
    * 1 asignación
    * 1 salida (`cout`)
* **Complejidad:** `O(1)`
* Justificación: el tiempo de ejecución **no depende del valor del número**, solo se hace una verificación simple.

---

## 🔹 2. Cuota de fianza

```cpp
if (montoFianza < 50000) {
    cuota = 0.03 * montoFianza;
} else {
    cuota = 0.02 * montoFianza;
}
```

* Operaciones:

    * 1 lectura de `montoFianza`
    * 1 comparación
    * 1 asignación
    * 1 salida
* **Complejidad:** `O(1)`

---

## 🔹 3. Descuento en computadoras

```cpp
if (numComputadoras < 5) {
    totalDescuento = 0.10 * (numComputadoras * precioComputadora);
} else if (numComputadoras < 10) {
    totalDescuento = 0.20 * (numComputadoras * precioComputadora);
} else {
    totalDescuento = 0.40 * (numComputadoras * precioComputadora);
}
```

* Operaciones:

    * 1 lectura de `numComputadoras`
    * Hasta 2 comparaciones (rama más larga)
    * 1 cálculo de descuento
    * 1 salida
* **Complejidad:** `O(1)`
* Justificación: aunque hay varias ramas, se ejecuta **solo una** en cada ejecución.

---

## 🔹 4. Anemia

```cpp
if (edadHemoglobina <= 1) {
    if (hemoglobina < 13 || hemoglobina > 26) tieneAnemia = true;
} else if (edadHemoglobina <= 6) {
    if (hemoglobina < 10 || hemoglobina > 18) tieneAnemia = true;
}
...
else {
    if ((sexo == 'M' && hemoglobina < 14) || (sexo == 'F' && hemoglobina < 12)) {
        tieneAnemia = true;
    }
}
```

* Operaciones:

    * 1 lectura de `edadHemoglobina`, `hemoglobina` y `sexo`
    * Hasta 7–8 comparaciones encadenadas
    * 1 asignación condicional
    * 1 salida
* **Complejidad:** `O(1)`
* Justificación: aunque hay más condiciones que en los casos anteriores, siguen siendo **constantes** y no dependen del tamaño de la entrada.

---

## 🔹 5. Estimulación académica

```cpp
if (tipoAlumno == 'P') {
    if (promedio >= 9.5) { ... }
    else if (promedio >= 9) { ... }
    else if (promedio > 7) { ... }
    else if (materiasReprobadas <= 3) { ... }
    else { ... }
} else {
    if (promedio >= 9.5) { ... }
    else { ... }
}
```

* Operaciones:

    * 1 lectura de `promedio`, `materiasReprobadas`, `tipoAlumno`
    * Hasta 4–5 comparaciones anidadas
    * 1 asignación de valores (`unidades`, `descuentoEstudiante`)
    * 1 cálculo de `totalPagar`
    * 1 salida
* **Complejidad:** `O(1)`

---

# 📌 Resumen de Complejidad

| Problema                  | Complejidad |
| ------------------------- | ----------- |
| Descuento en supermercado | **O(1)**    |
| Cuota de fianza           | **O(1)**    |
| Descuento en computadoras | **O(1)**    |
| Anemia                    | **O(1)**    |
| Estimulación académica    | **O(1)**    |
| **Programa completo**     | **O(1)**    |
