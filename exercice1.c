#include <stdio.h>

double poly (double x) {
  return x * x + x + 1;
}

int main() {
  int x = 10;
  printf("Le résultat est : %f \n\n\n", poly(x));
}
