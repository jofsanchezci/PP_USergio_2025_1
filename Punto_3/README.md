
# Punto 3: Comportamiento de TCP ante Congestión de Red

## Contexto

En redes de computadoras, **el protocolo TCP (Transmission Control Protocol)** es uno de los pilares fundamentales para garantizar una comunicación confiable. 
TCP implementa mecanismos específicos para **controlar la congestión** en un canal de comunicación. 
Cuando la red experimenta congestión, es decir, cuando el tráfico excede la capacidad del canal o de los dispositivos intermedios (routers), 
TCP ajusta dinámicamente la cantidad de datos que puede enviar sin recibir confirmación, usando técnicas como la **ventana de congestión (Congestion Window - cwnd)**.

El correcto funcionamiento de estos mecanismos es clave para preservar la estabilidad de la red y garantizar un equilibrio entre eficiencia y confiabilidad.

---

## Simulación en Python

Desarrolle un **script en Python** que simule el comportamiento de la **ventana de congestión (cwnd)** de TCP en función de eventos simulados de éxito o pérdida de paquetes.

### Comportamiento esperado

- Inicialmente, la **ventana de congestión (cwnd)** tiene un valor de 1.
- Por cada transmisión exitosa (simulada), el valor de la ventana debe **incrementarse**.
- Si ocurre una **pérdida de paquete**, la ventana de congestión debe reducirse drásticamente (similar a un reinicio a la fase de *Slow Start*).
- Implemente una **simulación de 20 transmisiones**, donde cada transmisión puede tener éxito (probabilidad del 80%) o fallar (probabilidad del 20%).
- Al final, el programa debe imprimir la evolución de la **ventana de congestión**.

### Ejemplo de salida esperada (simulación)

```
Transmisión 1: Éxito - cwnd = 2
Transmisión 2: Éxito - cwnd = 3
Transmisión 3: Pérdida - cwnd = 1
Transmisión 4: Éxito - cwnd = 2
...
```

### Objetivo

La simulación debe permitir observar cómo la ventana de congestión **aumenta** durante transmisiones exitosas y **se reinicia** ante eventos de pérdida, reflejando un comportamiento básico de **TCP Tahoe**.

---
