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
3. Sin ejecutarlo en una computadora. ¿Cuál es la salida del siguiente programa?
   ```c
   #include <stdio.h>

   int main(void) {
      printf("A ");
      printf("B ");
      printf("C ");
      printf("D\n");
      return 0;
   }
   ```
4. Sin ejecutarlo en una computadora. ¿Cuál es la salida del siguiente programa?
   ```c
   #include <stdio.h>

   int main(void) {
     printf("0\t0\t0000\n");
     printf("1\t1\t0001\n");
     printf("2\t2\t0010\n");
     printf("3\t3\t0011\n");
     printf("4\t4\t0100\n");
     printf("5\t5\t0101\n");
     printf("6\t6\t0110\n");
     printf("7\t7\t0111\n");
     printf("8\t8\t1000\n");
     printf("9\t9\t1001\n");
     printf("10\tA\t1010\n");
     printf("11\tB\t1011\n");
     printf("12\tC\t1100\n");
     printf("13\tD\t1101\n");
     printf("14\tE\t1110\n");
     printf("15\tF\t1111\n");
     return 0;
   }
   ```   
5. Sin ejecutarlo en una computadora. ¿Cuál es la salida del siguiente programa?
   ```c
   #include <stdio.h>

   int main(void) {
     int n = 255;
     printf("%d\t%x\n", n, n);
     return 0;
   }
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

1. Escribir un programa que acepte tres argumentos enteros e imprima "iguales" si los tres números son iguales o "no iguales" de lo contrario.
2. Escribir una versión mejorada del programa para calcular las raíces de una función cuadrática, del apunte anterior. El programa debe imprimir un mensaje de error en los casos que el discriminante sea menor a cero (raíz negativa) o el argumento _a_ sea igual a cero (división por cero).
3. Escribir un programa que simule tirar un dado "cargado". Imprimiendo el resultado de tirar el dado, teniendo en cuenta que la probabilidad de tirar un 1, 2, 3, 4 o 5 es de 1/8 y de tirar un 6 es de 3/8.
4. Reescribir el ejercicio 1 del primer apunte, pero esta vez usando un argumento de línea de comandos para determinar cuántas veces imprimir "Hola mundo".
5. Escribir un programa que imprima los números entre el 1000 y el 1999, mostrando 5 números por línea.
6. Escribir un programa que acepte un argumento entero _n_ e imprima _n_ números aleatorios entre 0 y 100. Al finalizar el programa debe imprimir el valor promedio de los números que aparecieron.
7. Escribir un programa que imprima una tabla con los valores de las funciones: ln _n_, _n_, *n* ln *n*, *n*<sup>2</sup>, *n*<sup>3</sup>, 2<sup>*n*</sup> para los valores de *n*: 1, 2, 4, 8, 16, ..., 2048. Usar caracteres `\t` para alinear las columnas y las funciones `pow()` y `log()` de `math.h`.
8. Escribir un programa que acepte un argumento entero *n* y use dos _loops_ anidados para imprimir un patrón como el de un tablero de ajedrez usando asteriscos y espacios con *n* filas y columnas.
