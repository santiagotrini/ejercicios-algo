#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);

  for (int i = 1; i <= 100; i++) {
    if (i % n == 3)
      printf("%d\n", i);
  }
  return 0;
}
