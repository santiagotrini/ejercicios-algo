/*
 * Escribir un programa que acepte dos argumentos:
 * día y mes (ambos de tipo int).
 * Imprimir "verdadero" si la fecha está entre el 20 de marzo
 * y el 20 de junio, o "falso" de lo contrario.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int dia = atoi(argv[1]);
  int mes = atoi(argv[2]);

  printf("Fecha: %d-%d\n", dia, mes);

  bool entre_fechas = false;

  entre_fechas = (mes == 3) && (dia >= 20);
  entre_fechas = entre_fechas || (mes >= 4 || mes <= 5);
  entre_fechas = entre_fechas || (mes == 6) && (dia <= 20);

  printf("%s\n", entre_fechas ? "verdadero" : "falso");

  return 0;
}
