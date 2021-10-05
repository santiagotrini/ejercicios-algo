#include <stdio.h>

int main(void) {
  // un array entero de 10 elementos
  int numeros[10];
  // cargar el array
  for (int i = 0; i < 10; i++) {
    numeros[i] = i + 1;
  }
  // imprimir el array
  for (int i = 0; i < 10; i++) {
    printf("%d\n", numeros[i]);
  }

  return 0;
}
