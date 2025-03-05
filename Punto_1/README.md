# Punto 1: Comparación de Enfoques para el Cálculo del Factorial

## Descripción

Este repositorio contiene el desarrollo de un ejercicio práctico que consiste en implementar el cálculo del factorial de un número entero utilizando dos enfoques diferentes en el lenguaje de programación **C**: un enfoque **iterativo** y un enfoque **recursivo**. Adicionalmente, se realiza una comparación de desempeño entre ambas implementaciones y un análisis sobre cómo el uso del **paradigma funcional** podría mejorar la eficiencia de este cálculo.

## Objetivos

- Comparar la eficiencia de un algoritmo iterativo y uno recursivo en términos de tiempo de ejecución y consumo de memoria.
- Analizar las ventajas y desventajas de cada enfoque.
- Reflexionar sobre el impacto de elegir un **paradigma de programación** diferente, con énfasis en el **paradigma funcional**, para resolver el mismo problema.
- Presentar un análisis argumentado con conceptos propios de la **programación funcional**.

---

## Estructura del repositorio

```
/
├── factorial_iterativo.c        # Implementación iterativa en C
├── factorial_recursivo.c        # Implementación recursiva en C
├── informe_comparativo.md       # Comparación de desempeño
├── analisis_funcional.md        # Análisis del paradigma funcional
└── README.md                     # Enunciado y contexto general
```

---

## Enunciado del ejercicio

### Parte 1: Implementación en C

1. Implemente un programa en **C** que calcule el factorial de un número entero utilizando un enfoque **iterativo**.
2. Implemente un segundo programa en **C** que calcule el factorial utilizando un enfoque **recursivo**.
3. Realice una comparación de desempeño entre ambos programas, analizando:
   - Tiempo de ejecución.
   - Uso de memoria.

### Parte 2: Análisis de paradigmas

Investigue cómo podría mejorarse la eficiencia de este cálculo utilizando un **paradigma de programación diferente**, en este caso el **paradigma funcional**. Considere los siguientes elementos propios de la programación funcional:

- **Funciones puras**: No dependen ni modifican variables globales, facilitando la descomposición en subproblemas independientes.
- **Recursión de cola (Tail Recursion Optimization)**: Optimiza la memoria al reutilizar el marco de pila.
- **Reducción (fold)**: Permite expresar el cálculo como una operación de acumulación, optimizable por el compilador.
- **Evaluación perezosa (lazy evaluation)**: Solo se calculan los valores cuando son realmente necesarios.
- **Inmutabilidad**: El uso de estructuras inmutables elimina efectos secundarios y facilita técnicas como la **memoización**.

### Producto final

- Código de las implementaciones iterativa y recursiva.
- Informe de comparación de desempeño.
- Análisis argumentativo sobre el uso del paradigma funcional.

---

## Entregables

| Archivo | Descripción |
|---|---|
| `factorial_iterativo.c` | Implementación iterativa en C. |
| `factorial_recursivo.c` | Implementación recursiva en C. |
| `informe_comparativo.md` | Análisis comparativo de desempeño (tiempo y memoria). |
| `analisis_funcional.md` | Argumentación sobre el paradigma funcional. |

---

## Rúbrica de evaluación

| Criterio | Descripción | Puntaje Máximo |
|---|---|---|
| Implementación iterativa en C | El código es funcional, claro y sigue buenas prácticas de programación en C. | 20 |
| Implementación recursiva en C | El código es funcional, claro y sigue buenas prácticas de programación en C. | 20 |
| Comparación de desempeño | Se presenta una comparación clara y justificada del desempeño en términos de tiempo y memoria entre ambas implementaciones. | 20 |
| Análisis del paradigma funcional | El análisis es claro, bien argumentado e incluye referencias a las características propias de la programación funcional. | 25 |
| Presentación general | Claridad, organización y calidad del documento y código entregado. | 15 |
| **Total** |   | **100** |

---

## Instrucciones de entrega

1. Cree un repositorio llamado `Comparacion_Factorial`.
2. Suba todos los archivos solicitados con el nombre indicado.
3. Complete el informe comparativo y el análisis funcional en archivos Markdown (`informe_comparativo.md` y `analisis_funcional.md`).
4. Comparta el enlace al repositorio con el docente para su revisión.