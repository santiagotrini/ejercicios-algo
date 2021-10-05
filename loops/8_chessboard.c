/*
 * Escribir un programa que acepte un argumento entero n y use dos loops
 * anidados para imprimir un patrón como el de un tablero de ajedrez usando
 * asteriscos y espacios con n filas y columnas.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n = atoi(argv[1]);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((i + j) % 2 == 0)
        printf("1 ");
      else
        printf("0 ");
    }
    printf("\n");
  }


  return 0;
}
