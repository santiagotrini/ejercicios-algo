/*
 * Escribir un programa que imprima la suma
 * de dos enteros aleatorios entre 1 y 6 como cuando tiras dos dados.
 */

#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

int main(void) {
  struct timeval current_time;
  srand(gettimeofday(&current_time, NULL));
  int dado1 = (rand() % 6) + 1;
  int dado2 = (rand() % 6) + 1;

  printf("Dado 1: %d\n", dado1);
  printf("Dado 2: %d\n", dado2);
  printf("Suma: %d\n", dado1 + dado2);
}
