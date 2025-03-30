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
