#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double x = atof(argv[1]);
  double y = atof(argv[2]);

  double angle = atan2(y, x);
  double en_grados = (angle * 180) / M_PI;
  if (en_grados < 0)
    en_grados += 360.0;
  printf("%.2fº\n", en_grados);

  return 0;
}
