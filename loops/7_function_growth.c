/*
 * Escribir un programa que imprima una tabla con los valores de las funciones
 * ln n, n, n ln n, n^2, n^3, 2^n para los valores de n:
 * 1, 2, 4, 8, 16, 32, 64. Usar caracteres \t para alinear las columnas
 * y las funciones pow() y log() de math.h.
 */
#include <stdio.h>
#include <math.h>

int main(void) {

  double n = 1;
  printf("ln n\tn\tn ln n\tn^2\t2^n\n");
  while (n <= 32) {
    printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", log(n), n, n*log(n), n*n, pow(2,n));
    n = n * 2;
  }
}
