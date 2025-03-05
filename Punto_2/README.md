
# Punto 2: Simulación de Conexión de Sockets en Python

## Contexto
En el ámbito de las redes de computadoras, el modelo cliente-servidor es ampliamente utilizado para el intercambio de información entre aplicaciones distribuidas. 
Uno de los mecanismos fundamentales para implementar esta comunicación es el uso de **sockets**, una interfaz que permite la comunicación bidireccional entre procesos en diferentes dispositivos o dentro de un mismo equipo.

Un socket es un punto final de comunicación, y en Python se pueden utilizar las bibliotecas estándar para crear programas cliente y servidor que se comuniquen utilizando el **protocolo TCP** o **UDP**.

## Enunciado
Se solicita desarrollar un programa en **Python** que simule la conexión de varios clientes a un **servidor local** utilizando **sockets TCP**. 
El servidor debe ejecutarse en el puerto **2010** y aceptar conexiones de múltiples clientes. 
Cada cliente debe enviar un mensaje al servidor indicando su **nombre** y el servidor debe responder confirmando la recepción del mensaje.

## Requerimientos

### 1. Servidor
- Escuche conexiones en el puerto **2010**.
- Acepte múltiples conexiones (se puede usar `threading` o `multiprocessing`).
- Reciba un mensaje de cada cliente.
- Responda a cada cliente con un mensaje de confirmación.

### 2. Cliente
- Se conecte al servidor en la dirección **localhost** (127.0.0.1) y puerto **8080**.
- Envíe un mensaje al servidor con el formato:  
    `"Hola, soy el cliente <nombre_del_cliente>"`.
- Espere y muestre la respuesta del servidor.

### 3. Pruebas
- Ejecutar **al menos cuatro clientes simultáneamente** y verificar que el servidor puede manejar ambas conexiones correctamente.

## Ejemplo esperado (cliente)
```
Conectado al servidor en localhost:8080
Enviando mensaje: Hola, soy el cliente Cliente1
Respuesta del servidor: Mensaje recibido de Cliente1
```

## Ejemplo esperado (servidor)
```
Servidor escuchando en el puerto 8080...
Conexión aceptada desde 127.0.0.1
Mensaje recibido: Hola, soy el cliente Cliente1
Respuesta enviada: Mensaje recibido de Cliente1
```

## Entregable
El estudiante debe entregar:
- Código fuente del **servidor**.
- Código fuente del **cliente**.
- Evidencias de ejecución (capturas o logs de la consola).
