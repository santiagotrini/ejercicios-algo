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

1. Escribir un programa que use `cos()` y `sin()` definidos en `math.h` para imprimir el valor de cos<sup>2</sup>_&theta;_ + sen<sup>2</sup>_&theta;_ para cualquier _&theta;_ ingresado como argumento.
2. Escribir un programa que tome dos argumentos enteros positivos e imprima "verdadero" si alguno de los argumentos es divisible por el otro.
3. Escribir un programa que tome tres argumentos enteros positivos e imprima "falso" si alguno es igual o mayor a la suma de los otros dos, o "verdadero" en caso contrario.
4. Escribir un programa que tome dos números enteros x e y como argumentos e imprima la distancia entre el punto (x, y) y el origen (0, 0).
5. Escribir un programa que tome dos números enteros *a* y *b* como argumentos e imprima un entero aleatorio entre *a* y *b*.
6. Escribir un programa que imprima la suma de dos enteros aleatorios entre 1 y 6 como cuando tiras dos dados.
7. Escribir un programa que imprima el valor de sen(2*t*) + sen(3*t*). Siendo _t_ un argumento del programa, de tipo `double`.
8. Escribir un programa que acepte tres argumentos de tipo `double`: *x*<sub>0</sub>, *v*<sub>0</sub> y *t*. Imprimir el resultado de *x*<sub>0</sub> + *v*<sub>0</sub>*t* + *gt*<sup>2</sup>/2. O sea la ecuación de desplazamiento para un tiro vertical después de *t* segundos, con posición inicial *x*<sub>0</sub> y velocidad inicial *v*<sub>0</sub>.
9. Escribir un programa que acepte dos argumentos: día y mes (ambos de tipo `int`). Imprimir "verdadero" si la fecha está entre el 20 de marzo y el 20 de junio, o "falso" de lo contrario.
10. Escribir un programa que calcule la cantidad de dinero que uno tendría al cabo de *t* años invirtiendo *P* pesos con una tasa de interés anual *r*. La fórmula que hay que aplicar es *Pe*<sup>*rt*</sup>. Usar la función `exp()` de `math.h` para calcular *e*<sup>*x*</sup>.
11. Escribir un programa que acepte tres argumentos *x*, *y* y *z* enteros e imprima "verdadero" si los números están en orden ascendente o descendente. Es decir si *x* > *y* > *z* o *x* < *y* < *z*. Si no lo están, imprimir "falso".
12. Escribir un programa que reciba como argumento un entero entre 0 y 99. El programa debe generar un número aleatorio en ese rango e imprimir "Ganaste!" si el número ingresado coincide con el número generado o "Perdiste!" de lo contrario.
13. Escribir un programa que intercambie el valor de dos variables enteras `a` y `b`. Los valores iniciales de `a` y `b` son argumentos del programa. Imprimir los valores de `a` y `b` antes y después del cambio.
14. Escribir un programa que acepte cuatro argumentos: las coordenadas de dos vectores en el plano e imprima el valor del producto entre dichos vectores.
15. Escribir un programa que calcule el producto cruz entre dos vectores en el espacio. Usar 6 argumentos de tipo entero.
16. Escribir un programa que con cuatro argumentos enteros ingresados por línea de comandos calcule la suma de dos vectores en el plano e imprima el resultado.
17. Escribir un programa que acepte como argumento un número entero de días. El programa debe imprimir la cantidad de años, semanas y días correspondiente. Ignorar los años bisiestos. Por ejemplo para 375 días como entrada, el programa imprime: "1 año, 1 semana, 3 días.".
18. Escribir un programa que acepte dos argumentos, cantidad de horas trabajadas y salario por hora. El programa imprime el salario total del trabajador con un máximo de dos lugares después de la coma.
19. Escribir un programa que acepte un argumento entero que representa una cantidad de dinero. El programa debe imprimir la combinación de billetes mínima necesaria para esa cantidad de dinero. Por ejemplo si ingresamos 570 el programa imprime: "1000: 0, 500: 1, 200: 0, 100: 0, 50: 1, 20: 1, 10: 0". Usar múltiplos de 10 solamente como entrada al programa.
20. Escribir un programa que acepte 5 argumentos enteros e imprima la suma solamente de los argumentos que sean impares.

## Condicionales y loops en C

[Apunte en el blog](https://la35.net/c/c-loops.html).

1. Escribir un programa que acepte tres argumentos enteros e imprima "iguales" si los tres números son iguales o "no iguales" de lo contrario.
2. Escribir una versión mejorada del programa para calcular las raíces de una función cuadrática, del apunte anterior. El programa debe imprimir un mensaje de error en los casos que el discriminante sea menor a cero (raíz negativa) o el argumento _a_ sea igual a cero (división por cero).
3. Escribir un programa que simule tirar un dado "cargado". Imprimiendo el resultado de tirar el dado, teniendo en cuenta que la probabilidad de tirar un 1, 2, 3, 4 o 5 es de 1/8 y de tirar un 6 es de 3/8.
4. Reescribir el ejercicio 1 del primer apunte, pero esta vez usando un argumento de línea de comandos para determinar cuántas veces imprimir "Hola mundo".
5. Escribir un programa que imprima los números entre el 1000 y el 1999, mostrando 5 números por línea.
6. Escribir un programa que acepte un argumento entero _n_ e imprima _n_ números aleatorios entre 0 y 100. Al finalizar el programa debe imprimir el valor promedio de los números que aparecieron.
7. Escribir un programa que imprima una tabla con los valores de las funciones: ln _n_, _n_, *n* ln *n*, *n*<sup>2</sup>, *n*<sup>3</sup>, 2<sup>*n*</sup> para los valores de *n*: 1, 2, 4, 8, 16, 32, 64. Usar caracteres `\t` para alinear las columnas y las funciones `pow()` y `log()` de `math.h`.
8. Escribir un programa que acepte un argumento entero *n* y use dos _loops_ anidados para imprimir un patrón como el de un tablero de ajedrez usando asteriscos y espacios con *n* filas y columnas.
9. Escribir un programa que acepte un número arbitrario de argumentos enteros por línea de comandos e imprima el máximo de los números ingresados.
10. Escribir un programa como el anterior pero que nos dé el máximo, el mínimo y el promedio de los números ingresados.
11. Escribir un programa que use la función `atan2()` de `math.h` para calcular el ángulo que forma un vector de coordenadas (x, y) con el eje x. Por ejemplo el vector (1, 1) forma un ángulo de 45º y el vector (0, -1) un ángulo de 270º.
La función `atan2(y, x)` calcula la arcotangente de y dividido x.
12. Escribir un programa que acepte como argumento un número entero e imprima el número con los digitos al revés. Por ejemplo para la entrada 12345 debe imprimir 54321.
13. Escribir un programa que use un ciclo `for` para imprimir los primeros *n* números de Fibonacci. Usar un argumento de línea de comandos para el valor de *n*. La sucesión de Fibonacci comienza así: 0, 1, 1, 2, 3, 5, 8, 13, 21 ... etc. El próximo número en la sucesión es la suma de los dos anteriores.
14. Escribir un programa que calcule el factorial de un número *n* ingresado como argumento.
15. Usando el Algoritmo de Euclides para encontrar el MCD (máximo común divisor) escribir un programa que acepte como argumento dos números enteros e imprima su MCD.
16. Escribir un programa que acepte un argumento *n* entero e imprima los números de 1 hasta *n* y su cuadrado.
17. Escribir un programa que imprima los números en el rango del 1 al 100 que al ser divididos por un argumento entero *n*, su resto sea igual a 3.
18. Escribir un programa que acepte dos argumentos enteros representando coordenadas en el plano cartesiano. El programa debe imprimir a que cuadrante pertenece el punto. Los cuadrantes del plano cartesiano se representan con los números romanos I, II, III y IV.
19. Escribir un programa que acepte dos números enteros y calcule su cociente. Si la división de los números no tiene resto igual a cero entonces imprimir "No se pueden dividir" y salir del programa. Por ejemplo, *a* = 20, *b* = 5 debe imprimir 4. Con *a* = 20 y *b* = 3 debe imprimir "No se pueden dividir".
20. Escribir un programa que acepte dos argumentos enteros *a* y *b* e imprima todos los números divisibles por 3 entre *a* y *b*. El segundo argumento tiene que ser mayor o igual que el primero. Si *a* es mayor a *b* el programa debe imprimir un mensaje indicando al usuario el uso correcto del programa y salir.

## Arrays en C

1. Escribir un programa que declare un *array* de tipo `int` que almacene los primeros diez números naturales. Imprimir el *array* un elemento por línea.
2. Escribir un programa que haga lo mismo que el ejercicio anterior pero para los primeros *n* números naturales. El usuario ingresa *n* como argumento de línea de comandos.
3. Escribir un programa que acepte dos argumentos *n* y *m*. El tamaño de un *array* es el argumento *n*. El programa llena el *array* con números aleatorios entre 0 y *m* y los imprime uno por línea.
4. Escribir un programa que genere un *array* de 100 elementos con enteros aleatorios entre 0 y 100. Calcular el promedio de los valores en el *array*.
5. Escribir un programa que genere un *array* de 100 lugares con enteros aleatorios entre 0 y 100. Encontrar el máximo y el mínimo del *array*.
6. Escribir un programa que calcule el producto punto entre dos vectores de dimensión *N* y valores reales. Siendo *N* una constante conocida en tiempo de compilación al igual que los componentes de los vectores.
7. Escribir un programa que genere un *array* de 100 elementos con valores aleatorios enteros del 0 al 9. Contar la cantidad de veces que aparece cada dígito en el *array* e imprimir una tabla con las frecuencias.
8. Escribir un programa que declare el *array* de enteros 1, 2, 3, 4, 5, 6 e invierta el orden del mismo. Luego imprimirlo.
9. Escribir un programa similar al anterior pero que invierta un *array* con los primeros 20 números pares.
10. Escribir un programa que imprima tres *strings* representando una mano de truco aleatoria, por ejemplo: "Cuatro de copas", "Ancho de espada", "Tres de basto".
11. Escribir un programa que reciba un *string* como argumento y cuente la cantidad de carácteres en la palabra.
12. Escribir un programa que reciba un *string* como argumento y decida si la palabra es un palíndromo o no.
13. Escribir un programa que reciba un argumento entero e imprima el mes del año correspondiente o un error si el argumento es menor a 1 o mayor a 12.
14. Escribir un programa que declare un *array* de 40 posiciones representando un mazo de cartas para jugar al truco. El *array* debe estar ordenado por palo y número. Imprimir el mazo por consola.
15. Escribir un programa que use el mazo de cartas del ejercicio anterior para repartir tres cartas. Mezclar el mazo antes de repartir. Imprimir una cantidad *n* de manos donde *n* es un argumento del programa.
16. Escribir un programa que reciba un argumento de tipo *string* y busque en un *array* conocido en tiempo de compilación si el *string* está en el *array*. Si está el programa devuelve el índice del elemento y de lo contrario devuelve -1.
17. Escribir un programa que genere una lista con los primeros *n* números de Fibonacci usando un *array* de dimensión *n*.
18. Escribir un programa que traduzca una palabra ingresada como argumento a código Morse, separando cada letra con un espacio. El programa recibe su argumento en letras minísculas únicamente.
19. Ampliar el programa anterior para traducir un mensaje de varias palabras. En la traducción a Morse cada letra está separada por un espacio y cada palabra con un `|`.
20. Escribir un programa que convierta una palabra a todas letras minísculas. Ingresar la palabra como argumento.
