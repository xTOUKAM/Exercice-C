#include <stdio.h>

/*-------------------- Exercice 1 ---------------- */

/* ----------- Question 1 --------------
void affiche_nombres(int n) {
	int i;
	for(i = 0; n > i; i++) {
		printf("%d ", i);
	}
}

int main() {
	int n = -5;
	printf("Voici les chiffres souhaités : \n\n\n");
	affiche_nombres(n);
}
*/ 

/* ----------- Question 2 --------------
void affiche_nombres_pairs(int n) {
	int i;
	for(i = 0; n > i; i+=2) {
		printf("%d ", i);
	}
}

int main() {
	int n = 10;
	printf("VOici les chiffres pairs : \n\n\n");
	affiche_nombres_pairs(n);
}
*/

/* ----------- Question 3 --------------
void affiche_nombres_impairs(int n) {
	int i;
	for(i = 0; n > i; n--) {
		printf("%d ", n);
	}
}

int main() {
	int n = 10;
	printf("VOici les chiffres pairs : \n\n\n");
	affiche_nombres_impairs(n);
}
*/

/*-------------------- Exercice 2 ---------------- */

/*----------- Question 1 --------------
void factiorelle(int n) {
	int i;
	int res = 1;
	for (i = 1; n >= i; i++) {
		res *= i;
		printf("%d ", res);
	}
}

int main() {
	printf("Voici le factorielle : \n\n");
	factiorelle(10);
}
*/

void somme_impairs(int n) {
	int i;
	int somme = 0;
	for(i = 1; n >= i; i+=2) {
		somme += i;
	}
	printf("%d ", somme);
}

int main() {
	int n = 10;
	printf("Voici les sommes impairs : \n\n");
	somme_impairs(n);
}
	
		
