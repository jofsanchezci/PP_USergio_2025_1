# Punto 3: Gestión Dinámica y Optimización de Memoria para Registros de Estudiantes

## Descripción

Estás desarrollando un sistema de **gestión de estudiantes** para una universidad. Cada estudiante tiene un registro que incluye su **nombre**, **apellido**, **edad**, **número de identificación** y un conjunto de **calificaciones** correspondientes a sus materias. Debido a las **limitaciones de memoria** en el sistema, es fundamental optimizar el uso de memoria al almacenar estos registros.

## Objetivo general

Desarrollar un programa en **C** que gestione de forma dinámica y eficiente la memoria utilizada para almacenar registros de estudiantes, asegurando que se optimice el espacio ocupado y se evite el desperdicio innecesario.

---

## Funcionalidades Requeridas

### 1. Gestión dinámica de memoria

- El programa debe utilizar **`malloc`** y **`free`** para asignar y liberar memoria **dinámicamente** a medida que los registros de estudiantes se crean y eliminan.
- Cada registro debe ocupar únicamente la memoria necesaria para almacenar la información del estudiante, ajustándose dinámicamente a la longitud de nombres, apellidos y calificaciones.

### 2. Optimización de estructuras y compactación de memoria

- Implemente un **mecanismo de compactación de memoria**, optimizando el espacio usado por los registros de estudiantes. Para ello, utilice:
    - **Estructuras (`struct`) optimizadas**.
    - **Manejo de cadenas dinámicas** (`char*`) para nombres y apellidos, reservando solo la memoria estrictamente necesaria.
    - **Arrays dinámicos** para almacenar calificaciones, ajustados al número real de materias.
    - **Técnicas de optimización de memoria**, como el uso de **bitfields** si es necesario, para campos pequeños como la edad o el número de identificación.

### 3. Evitar desperdicio y fragmentación

- Evite la **fragmentación interna** o desperdicio de memoria.
- Cada registro debe utilizar solo la memoria requerida, sin reservar espacio adicional innecesario.
- Libere correctamente toda la memoria cuando un estudiante sea eliminado.

### 4. Operaciones requeridas

Implemente las siguientes funciones:

- **Agregar estudiante:** Recibe los datos de un nuevo estudiante y almacena el registro dinámicamente.
- **Actualizar estudiante:** Permite modificar los datos de un estudiante existente.
- **Eliminar estudiante:** Elimina un estudiante a partir de su número de identificación (ID) y libera la memoria asociada.

Cada operación debe actualizar un contador o un reporte de **uso de memoria**, indicando cuánta memoria total está siendo utilizada en el sistema de gestión.

---

## Ejemplo de Entrada

Comandos de ejemplo para agregar y eliminar estudiantes:

```
Agregar Estudiante: Nombre="Carlos", Apellido="Gomez", Edad=20, ID="12345678", Calificaciones=[85, 90, 78]
Eliminar Estudiante: ID="12345678"
```

---

## Ejemplo de Salida Esperada

```
Estudiante "Carlos Gomez" agregado correctamente. Memoria utilizada: 128 bytes.
Estudiante con ID 12345678 eliminado correctamente. Memoria liberada: 128 bytes.
```

---

## Consideraciones:

- **Uso de `struct`:** Define un `struct` que almacene de manera eficiente la información de cada estudiante.
- **Cadenas dinámicas:** Usa **`char*`** para nombres y apellidos, asignando solo la memoria necesaria con `malloc` y liberando con `free`.
- **Manejo de arrays dinámicos:** Almacena las calificaciones en un **array dinámico**, cuyo tamaño se ajuste al número exacto de calificaciones.
- **Optimización de estructuras:** Considera técnicas adicionales como **bitfields** para representar campos pequeños (por ejemplo, edad en 8 bits o menos si es posible).

---

## Comparación de Desempeño

### Antes de optimizar

- Calcula y muestra el **uso de memoria** sin aplicar optimizaciones, utilizando estructuras estándar.

### Después de optimizar

- Calcula y muestra el **uso de memoria** después de aplicar las técnicas de optimización mencionadas.

El programa debe generar un informe comparativo mostrando:

| Métrica | Sin optimización | Con optimización |
|---|---|---|
| Memoria utilizada total | X bytes | Y bytes |
| Fragmentación detectada | Alta | Baja o nula |
| Tiempo de ejecución | X ms | Y ms |

---

## Entregables

| Archivo / Documento | Descripción |
|---|---|
| `gestion_estudiantes.c` | Código fuente completo con manejo dinámico y optimizado de memoria. |
| `informe_comparativo.md` | Documento con el análisis comparativo de desempeño antes y después de optimizar. |

---

## Rubrica de Evaluación

| Criterio | Ponderación |
|---|---|
| Implementación de la gestión dinámica (malloc, free) | 20% |
| Implementación de optimizaciones (compactación, bitfields, cadenas dinámicas) | 30% |
| Funciones de agregar, actualizar y eliminar | 20% |
| Comparación de desempeño (informe) | 20% |
| Presentación y claridad general | 10% |
| **Total** | **100%** |