#include <stdio.h>

int nb_jours (int annee) {
  if((annee % 4 == 0 && annee % 100 != 0)|| annee % 400 == 0) {
    return 366;
  }
  return 365;
}

int main() {
  int annee = 1958;
  printf("Le résultat est : %d \n\n\n", nb_jours(annee));
}
