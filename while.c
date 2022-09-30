#include <stdio.h>

/* ---------------- Exercice 1 ------------------- */

/* --- Question 1 : affiche_nombre --- 
void affiche_nombres(int n) {
	 while(n < 10) {
		 n++;
		 printf("%d ", n);
	 }
 }
 
int main() {
	printf("Voici les chiffres souhaités : \n\n\n");
	affiche_nombres(0);
}

*/

/* --- Question 1 : affiche_nombre_decroissants ---
void affiche_nombre_decroissants(int n) {
	while (n > 10) {
		printf("%d ", n);
		n--; 
	}
}

int main() {
	printf("Voici les chiffres souhaités : \n\n\n");
	affiche_nombre_decroissants(20);
}
*/

/* --- Question 2 --- 

void affiche_carre(int n) {
	while (n < 10) {
		n++;
		printf("%d ", n * n);
	}
}

int main() {
	printf("Voici les carrés parfait : \n\n\n");
	affiche_carre(0);
}

*/

/* --- Question 3 --- 
int affiche_carres_entre(int n, int m) {
	if (n >= m) {
		return 0;
	}
	
	int i = 1;
	
	while (i*i <= m) {
		if(i*i>n) {
			printf("%d ", i*i);
		}
		i++;
	}
}

int main() {
	printf("Voici les carrés parfait compris entre : \n\n\n");
	affiche_carres_entre(0, 20);
}
*/

/* --- Question 4 --- 

void saisie_valeur() {
	int i = -5;

	while( i > 3 || i < 0) {
		printf("Merci de saisir une valeur comprise entre 0 et 3 : \n");
		scanf("%d", &i);
	}
	printf("La valeur est de : %d \n", i);
}

int main() {
	saisie_valeur();
}

*/


/* ---------------- Exercice 2 ------------------- */

/* --- Question 1 : boucle for ---
int est_premier(int n) {
	int i;
	for ( i = 2 ; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	printf("%d \n", est_premier(18456));
}
*/

/* --- Question 1 : boucle while --- */
int est_premier(int n) {
	int i = 2;
	while ( i < n ) {
		if(n % i == 0) {
			return 0;
		}
		return 1;
	}
}

/* --- Question 2 --- */

void premier_plus_petit_que(int n) {
	int i = 2;
	while( i < n ) {
		if (est_premier(i)) {
			printf(", %d", i);
		}
		i++;
	}
}

int main() {
	premier_plus_petit_que(100);
}

