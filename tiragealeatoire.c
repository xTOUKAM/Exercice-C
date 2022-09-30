#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Exercie 1 

// --- Question 1 ---

int lance_un_de() {
	
	return 1 + rand() % 6;
}

/*
int main(){
	printf("Le dé est tombé sur la face numéro : %d \n", lance_un_de(6));
}
*/

/* --- Question 2 --- 

void lance_un_de2(int de) {
	
	int chiffre = lance_un_de();
	int chiffre1 = 0;
	int chiffre2 = 0;
	int chiffre3 = 0;
	int chiffre4 = 0;
	int chiffre5 = 0;
	int chiffre6 = 0;
	for( int i = 0; i<10; i++) {
		chiffre = lance_un_de();
			if ( chiffre == 1 ) {
				chiffre1++;
			}
			if ( chiffre == 2 ) {
				chiffre2++;
			}
			if ( chiffre == 3 ) {
				chiffre3++;
			}
			if ( chiffre == 4 ) {
				chiffre4++;
			}
			if ( chiffre == 5 ) {
				chiffre5++;
			}
			if ( chiffre == 6 ) {
				chiffre6++;
			}
	}
	printf("Le nombre de fois où la valeur est tombé sur 1 : %d \nLe nombre de fois où la valeur est tombé sur 2 : %d \nLe nombre de fois où la valeur est tombé sur 3 : %d \nLe nombre de fois où la valeur est tombé sur 4 : %d \nLe nombre de fois où la valeur est tombé sur 5 : %d \nLe nombre de fois où la valeur est tombé sur 6 : %d \n", chiffre1, chiffre2, chiffre3, chiffre4, chiffre5, chiffre6);
}

int main() {
	srand (time (NULL));
	lance_un_de2(6);
}

*/

/* --- Question 3 ---

void lance_un_de2(int de) {
	int n = -1;
	
	while( n > 10000 || n < 0) {
		printf("Merci de saisir une valeur comprise entre 0 et 10000 compris : \n");
		scanf("%d", &n);
		printf("Vous avez choisi de lancer %d fois votre dé. \n\n", n);
	}
	int chiffre = lance_un_de();
	int chiffre1 = 0;
	int chiffre2 = 0;
	int chiffre3 = 0;
	int chiffre4 = 0;
	int chiffre5 = 0;
	int chiffre6 = 0;
	for( int i = 0; i<n; i++) {
		chiffre = lance_un_de();
			if ( chiffre == 1 ) {
				chiffre1++;
			}
			if ( chiffre == 2 ) {
				chiffre2++;
			}
			if ( chiffre == 3 ) {
				chiffre3++;
			}
			if ( chiffre == 4 ) {
				chiffre4++;
			}
			if ( chiffre == 5 ) {
				chiffre5++;
			}
			if ( chiffre == 6 ) {
				chiffre6++;
			}
	}
	printf("Le nombre de fois où la valeur est tombé sur 1 : %d \nLe nombre de fois où la valeur est tombé sur 2 : %d \nLe nombre de fois où la valeur est tombé sur 3 : %d \nLe nombre de fois où la valeur est tombé sur 4 : %d \nLe nombre de fois où la valeur est tombé sur 5 : %d \nLe nombre de fois où la valeur est tombé sur 6 : %d \n", chiffre1, chiffre2, chiffre3, chiffre4, chiffre5, chiffre6);
}

int main() {
	srand (time (NULL));
	lance_un_de2(6);
}

*/

void lance_un_de2(int de) {
	int n_lancer = -1;
	
	while( n_lancer > 100 || n_lancer < 0) {
		printf("Merci de saisir une valeur comprise entre 0 et 100 compris : \n");
		scanf("%d", &n_lancer);
		printf("Vous avez décidé de lancer %d fois votre dé. \n\n", n_lancer);
	}
	
	int chiffre = lance_un_de();
	int max = 0;
	
	for( int i = 0; i<n_lancer; i++) {
		chiffre = lance_un_de();
		
			if ( chiffre > max ) {
				max = chiffre;
			}
	}
	printf("%d est le plus grand chiffre obtenu \n", max);
}

int main() {
	srand (time (NULL));
	lance_un_de2(6);
}
