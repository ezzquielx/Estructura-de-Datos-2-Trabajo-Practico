# 📊 Complejidad Algorítmica en C++

A continuación, se analiza cada bloque:

---

## 🔹 1. Equivalencia en dólares
```cpp
double dolares = pesos / tasaCambio;
````

* Operaciones:

    * 2 lecturas de variables (`pesos`, `tasaCambio`)
    * 1 división
    * 1 asignación
    * 1 salida (`cout`)
* **Complejidad:** `O(1)`
* Justificación: el número de pasos es fijo, independiente de la magnitud de la entrada.

---

## 🔹 2. Masa de aire

```cpp
double masa = (presion * volumen) / (0.37 * (temperatura + 460));
```

* Operaciones:

    * 3 lecturas (`presion`, `volumen`, `temperatura`)
    * 2 multiplicaciones, 1 suma, 1 división
    * 1 asignación
    * 1 salida
* **Complejidad:** `O(1)`

---

## 🔹 3. Pulsaciones

```cpp
double pulsaciones = (220 - edad) / 10.0;
```

* Operaciones:

    * 1 lectura (`edad`)
    * 1 resta, 1 división
    * 1 asignación
    * 1 salida
* **Complejidad:** `O(1)`

---

## 🔹 4. Presupuesto hospital

```cpp
double ginecologia = 0.40 * presupuesto;
double traumatologia = 0.30 * presupuesto;
double pediatria = 0.30 * presupuesto;
```

* Operaciones:

    * 1 lectura (`presupuesto`)
    * 3 multiplicaciones y asignaciones
    * 3 salidas (`cout`)
* **Complejidad:** `O(1)`

---

# 📌 Resumen de Complejidad

| Problema                | Complejidad |
| ----------------------- | ----------- |
| Equivalencia en dólares | **O(1)**    |
| Masa de aire            | **O(1)**    |
| Pulsaciones             | **O(1)**    |
| Presupuesto hospital    | **O(1)**    |
| **Programa completo**   | **O(1)**    |
