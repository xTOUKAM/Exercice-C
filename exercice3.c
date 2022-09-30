#include <stdio.h>

int max2 (int a, int b) {
  if(a>=b) {
    return a;
  } else {
    return b;
  }
}

int main() {
  int a = 10;
  int b = 20;
  printf("Le résultat est : %d \n\n\n", max2(a,b));
}
