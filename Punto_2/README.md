# Punto 2: Comparación de paradigmas de programación

## Descripción

Tienes una lista de nombres de estudiantes junto con sus respectivas calificaciones en un examen final. El objetivo es ordenar esta lista en **orden descendente según las calificaciones**, de modo que sea posible identificar fácilmente quién obtuvo las mejores notas. En caso de que **dos estudiantes tengan la misma calificación**, estos deben ordenarse **alfabéticamente por su nombre**.

## Objetivo general

Resolver el problema de ordenamiento utilizando **dos enfoques diferentes**, cada uno representando un **paradigma de programación** distinto:

---

## Enfoque 1: Programación Imperativa (Python)

Implemente un programa en **Python** que ordene la lista de estudiantes utilizando el **algoritmo de ordenamiento por burbuja (Bubble Sort)**, asegurándose de respetar las reglas de ordenamiento establecidas (primero por calificación descendente y, en caso de empate, orden alfabético por nombre).

En este enfoque, el programa debe describir **cómo** realizar el proceso de ordenamiento, utilizando ciclos, comparaciones directas e intercambios (swaps) de elementos. Se espera que el código refleje claramente el estilo **imperativo**, donde el programador controla paso a paso el flujo y la manipulación de la lista.

---

## Enfoque 2: Programación Declarativa/Funcional (Haskell)

Implemente el mismo proceso de ordenamiento utilizando el lenguaje **Haskell**, adoptando un enfoque **declarativo/funcional**, en el cual se describe **qué** se desea lograr en lugar de **cómo** hacerlo. En este enfoque, se debe evitar la manipulación explícita de la estructura de datos y se deben aprovechar funciones de alto nivel proporcionadas por el lenguaje, como `sortBy` o funciones equivalentes, que permitan definir directamente el criterio de ordenamiento.

El código debe reflejar características propias de la programación funcional, tales como:

- Uso de **funciones puras**.
- **Inmutabilidad** de las estructuras de datos.
- Expresividad y alto nivel de abstracción.
- Uso de funciones de orden superior para definir criterios de ordenamiento.

---

## Comparación de paradigmas

Elabore un análisis comparativo entre los dos enfoques implementados, destacando las **diferencias clave** entre la **programación imperativa** y la **programación declarativa/funcional**. El análisis debe incluir:

- Comparación de **claridad y legibilidad** del código.
- Nivel de **expresividad y abstracción**.
- Manejo de **estructuras de datos** (mutabilidad vs inmutabilidad).
- **Manejo de estado** en cada paradigma.
- **Facilidad de mantenimiento y extensión** de cada enfoque.
- **Eficiencia** de cada solución, considerando el algoritmo y el lenguaje utilizado.

Se espera que el análisis sea argumentado, usando ejemplos o referencias cuando sea necesario, para sustentar las diferencias y ventajas de cada paradigma en el contexto específico del problema planteado.

---

## Ejemplo de entrada

```python
estudiantes = [
    ("Ana", 85),
    ("Luis", 90),
    ("Carlos", 85),
    ("Sofía", 92),
    ("María", 90)
]
```

### Salida esperada

```python
[
    ("Sofía", 92),
    ("Luis", 90),
    ("María", 90),
    ("Ana", 85),
    ("Carlos", 85)
]
```

---

## Entregables

| Documento / Código | Descripción |
|---|---|
| `ordenamiento_imperativo.py` | Código fuente de la implementación imperativa en Python (Bubble Sort). |
| `ordenamiento_funcional.hs` | Código fuente de la implementación declarativa/funcional en Haskell. |
| `comparacion_paradigmas.md` | Documento con el análisis comparativo entre los dos enfoques y paradigmas. |

---

## Rubrica de Evaluación

| Criterio | Ponderación |
|---|---|
| Implementación correcta en Python | 25% |
| Implementación correcta en Haskell | 25% |
| Análisis comparativo completo y argumentado | 40% |
| Presentación y claridad general | 10% |
| **Total** | **100%** |