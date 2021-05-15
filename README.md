# Ejercicios

Ejercicios para Algoritmos y Estructuras de Datos.

## Introducción a C

[Apunte en el blog](https://la35.net/c/intro-c.html).

1. Escribir un programa que imprima "Hola mundo" diez veces.
2. Escribir un programa que acepte tres argumentos por línea de comandos e imprima un saludo para los tres nombres ingresados al revés de como fueron ingresados. Por ejemplo:
```console
$ ./a.out Juan Pedro Maria
Hola Maria, Pedro y Juan
```

## Tipos de datos en C

[Apunte en el blog](https://la35.net/c/c-data-types.html).

1. Escribir un programa que use `cos()` y `sin()` definidos en `math.h` para imprimir el valor de cos<sup>2</sup>_&theta;_ + sen<sup>2</sup>_&theta;_
 para cualquier _&theta;_
 ingresado como argumento. ¿Por qué no da siempre 1?
2. Escribir un programa que tome dos argumentos enteros positivos e imprima "verdadero" si alguno de los argumentos es divisible por el otro.
3. Escribir un programa que tome tres argumentos enteros positivos e imprima "falso" si alguno es igual o mayor a la suma de los otros dos, o "verdadero" en caso contrario.
4. Escribir un programa que tome dos números enteros x e y como argumentos e imprima la distancia entre el punto (x, y) y el origen (0, 0).
5. Escribir un programa que tome dos números enteros a y b como argumentos e imprima un entero aleatorio entre a y b.
6. Escribir un programa que imprima la suma de dos enteros aleatorios entre 1 y 6 como cuando tiras dos dados.
7. Escribir un programa que imprima el valor de sen(2*t*) + sen(3*t*). Siendo _t_ un argumento del programa, de tipo `double`.
8. Escribir un programa que acepte tres argumentos de tipo `double`: *x*<sub>0</sub>, *v*<sub>0</sub> y *t*. Imprimir el resultado de *x*<sub>0</sub> + *v*<sub>0</sub>*t* + *gt*<sup>2</sup>/2. O sea la ecuación de desplazamiento para un tiro vertical después de *t* segundos, con posición inicial *x*<sub>0</sub> y velocidad inicial *v*<sub>0</sub>.
9. Escribir un programa que acepte dos argumentos: día y mes (ambos de tipo `int`). Imprimir "verdadero" si la fecha está entre el 20 de marzo y el 20 de junio, o "falso" de lo contrario.

## Condicionales y loops en C

[Apunte en el blog](https://la35.net/c/c-loops.html).

1. Escribir un programa que acepte tres argumentos enteros e imprima "igual" si los tres números son iguales o "falso" de lo contrario.
2. Escribir una versión mejorada del programa para calcular las raíces de una función cuadrática, del apunte anterior. El programa debe imprimir un mensaje de error en los casos que el discriminante sea menor a cero (raíz negativa) o el argumento _a_ sea igual a cero (división por cero).
3. Escribir un programa que simule tirar un dado "cargado". Imprimiendo el resultado de tirar el dado, teniendo en cuenta que la probabilidad de tirar un 1, 2, 3, 4 o 5 es de 1/8 y de tirar un 6 es de 3/8.
4. Reescribir el ejercicio 1 del primer apunte, pero esta vez usando un argumento de línea de comandos para determinar cuántas veces imprimir "Hola mundo".
5. Escribir un programa que imprima los números entre el 1000 y el 1999, mostrando 5 números por línea.
6. Escribir un programa que acepte un argumento entero _n_ e imprima _n_ números aleatorios entre 0 y 100. Al finalizar el programa debe imprimir el valor promedio de los números que aparecieron.
