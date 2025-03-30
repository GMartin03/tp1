# Trabajo Practico N°1

## Archivo .gitignore

El archivo .gitignore es un archivo de configuración utilizado en Git para especificar qué archivos o directorios deben ser ignorados por el control de versiones.

### ¿Por qué es conveniente incluirlo?
-Evita subir archivos innecesarios o sensibles al repositorio, como credenciales o configuraciones locales.
-Mejora la organización del proyecto al excluir archivos generados automáticamente, como logs o builds.
-Reduce el tamaño del repositorio, evitando archivos que no aportan al desarrollo.

### ¿Cuándo se debe hacer?
-Se debe configurar antes de realizar el primer commit para evitar que archivos innecesarios sean rastreados.
-Se puede modificar en cualquier momento si es necesario agregar nuevas reglas.

### ¿Cómo configurarlo?
El archivo .gitignore se coloca en la raíz del repositorio y contiene reglas en base a patrones. Algunos ejemplos:

#### Ignorar dependencias en proyectos Node.js
node_modules/

### Regla para ignorar
Para incluir esta regla en el archivo .gitignore, simplemente se debe añadir la siguiente línea: "ignorado.txt"

## Punto 3:

Ambas direcciones son iguales porque el puntero almacena la dirección de la variable.

### ¿Qué obtiene en el punto 4?

Se obtine la dirección de memoria donde se almacena el puntero.

### ¿Por qué la dirección del puntero es diferente de la dirección de la variable?
Cada variable en C ocupa un espacio de memoria distinto.
*var* ocupa una dirección en la memoria, donde se guarda su valor (42).
*puntero* ocupa otra dirección en la memoria, donde se guarda la dirección de *var*.