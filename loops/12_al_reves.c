#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {

  long int n = atol(argv[1]);

  printf("Numero ingresado: %d\n", n);
  printf("Maximo de INT: %d\n", INT_MAX);

  while (n != 0) {
    printf("%d", n % 10);
    n /= 10;
  }

  printf("\n");

  return 0;
}
