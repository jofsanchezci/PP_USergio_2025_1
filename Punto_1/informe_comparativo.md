# Informe Comparativo: Factorial Iterativo vs Recursivo

## Introducción

En este informe se comparan dos implementaciones del cálculo del factorial: una versión iterativa y otra recursiva, ambas en lenguaje **C**.

## Métricas evaluadas

- **Tiempo de ejecución** para diferentes valores de `n`.
- **Consumo de memoria**, analizando el impacto del uso de la pila en la versión recursiva.

## Resultados preliminares (Ejemplo)

| Valor de n | Tiempo Iterativo (ms) | Tiempo Recursivo (ms) | Consumo Memoria (Recursivo) |
|---|---|---|---|
| 10 | 0.001 | 0.002 | Bajo |
| 50 | 0.002 | 0.004 | Moderado |
| 100 | 0.005 | 0.010 | Alto |

## Conclusiones

- La versión **iterativa** es más eficiente en términos de tiempo y memoria para valores grandes de `n`.
- La versión **recursiva** es más compacta en términos de código, pero puede desbordar la pila para valores muy grandes.

---